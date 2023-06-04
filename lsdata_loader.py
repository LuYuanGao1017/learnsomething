from collections import defaultdict as ddict
from tqdm import tqdm
import dgl

import random
import numpy as np
import pandas as pd
import torch
from ordered_set import OrderedSet
from torch.utils.data import DataLoader, Dataset


class TrainDataset(Dataset):
    """
    初始化函数，接受四个参数：
    - triples: 训练集中的三元组列表，每个三元组都是 (head, relation, tail) 的形式
    - sr2o: 字典,key 是 (head, relation) 的二元组,value 是一个集合，
    表示所有以 head 和 relation 为前缀的三元组的 tail 集合
    - num_ent: 实体的数量
    - num_neg: 每个正样本对应的负样本
    数量，默认为 1
    """
    def __init__(self, triples, sr2o, num_ent, num_neg=1):
        self.triples = triples
        self.sr2o = sr2o
        self.num_ent = num_ent
        self.num_neg = num_neg

    def __len__(self):
        """
        返回训练集中的三元组数量
        """
        return len(self.triples)

    def __getitem__(self, idx):
        """
        根据索引返回一个训练样本
        """
        ele = self.triples[idx]
        src, rel, obj = ele
        # 正样本
        triples = [torch.LongTensor([src, rel, obj])]
        # 正样本对应的标签
        labels = [torch.FloatTensor([1.0])]
        while True:
            neg_obj = random.randint(0, self.num_ent - 1)
            # 从所有实体中随机选择负样本，直到找到一个不在正样本中的负样本
            if neg_obj not in self.sr2o[(src, rel)]:
                triples.append(torch.LongTensor([src, rel, neg_obj]))
                labels.append(torch.FloatTensor([0.0]))
            if len(triples) > self.num_neg:
                break
        # 将所有样本和标签组成一个 mini-batch
        return torch.stack(triples, 0), torch.stack(labels, 0)

    @staticmethod
    def collate_fn(data):
        triples = [] 
        labels = []  
        for triple, label in data:
            triples.append(triple)
            labels.append(label)
        triple = torch.cat(triples, dim=0)
        trp_label = torch.cat(labels, dim=0)
        return triple, trp_label

class TestDataset(Dataset):
    def __init__(self, sr2o, triple2idx=None):
        # 将sr2o参数赋值给类的实例变量self.sr2o
        self.sr2o = sr2o
        # 初始化self.triples和self.ids为两个空列表
        self.triples, self.ids = [], []
        # 对sr2o字典中的每一个(s,r)键值对进行遍历
        for (s, r), o_list in self.sr2o.items():
            self.triples.append([s, r, -1])
            if triple2idx is None:
                self.ids.append(0)
            else:
                self.ids.append([triple2idx[(s, r)]])
    def __len__(self):
        return len(self.triples)

    def __getitem__(self, idx):
        return torch.LongTensor(self.triples[idx]), torch.LongTensor(self.ids[idx])

    @staticmethod
    def collate_fn(data):
        triples = []
        ids = []
        for triple, idx in data:
            triples.append(triple)
            ids.append(idx)
        triples = torch.stack(triples, dim=0)
        trp_ids = torch.stack(ids, dim=0)
        return triples, trp_ids


class Data(object):
    def __init__(self, data_dir, num_workers, batch_size):
        """
        类的构造函数,接收三个参数.
        data_dir:数据所在目录的路径;
        num_workers:用于数据加载器的进程数;
        batch_size:训练时用到的批次大小.
        """
        self.data_dir = data_dir
        self.num_workers = num_workers
        self.batch_size = batch_size

        ent_set, rel_set = OrderedSet(), OrderedSet()

        # 场景类型
        event_info = pd.read_json("{}/event_info.json".format(self.data_dir)) 
        rel_set.update(event_info['event_id'].tolist())
        print('Number of events: {}'.format(len(rel_set)))
        self.rel2id = {rel: idx for idx, rel in enumerate(rel_set)}
        self.rel2id.update({rel + "_reverse": idx + len(self.rel2id) for idx, rel in enumerate(rel_set)})
        self.num_rel = len(self.rel2id) // 2

        # 用户id转换为idx int 原始样本数量299889
        user_info = pd.read_json("{}/user_info.json".format(self.data_dir)) 
        # 只能去掉等级为-1的样本329个 
        user_info_filtered = user_info[(user_info['user_level'] != -1)]
        # 性别-1换为2 
        user_info_filtered.loc[user_info_filtered['gender_id'] == -1, 'gender_id'] = 2
        # 年龄-1换为0
        user_info_filtered.loc[user_info_filtered['age_level'] == -1, 'age_level'] = 0
        # 性别one-hot
        user_info = pd.get_dummies(user_info_filtered, columns=['gender_id'], prefix=['gender'])

        ent_set.update(user_info['user_id'].tolist())
        print('Number of users: {}'.format(len(ent_set)))
        self.ent2id = {ent: idx for idx, ent in enumerate(ent_set)}
        self.num_ent = len(self.ent2id)
        self.data = ddict(list) 
        self.sr2o = dict()
        for split in ['train', 'valid', 'test']:
            self.sr2o[split] = ddict(set)
        src = []
        dst = []
        rels = []
        inver_src = []
        inver_dst = []
        inver_rels = []
        
        df = pd.read_json("{}/source_event_preliminary_train_info.json".format(self.data_dir))
        # 去掉不在ent_set中的三元组
        df = df[df['inviter_id'].isin(ent_set) & df['voter_id'].isin(ent_set)]
        records = df.to_dict('records')
        for line in records:
            sub, rel, obj = line['inviter_id'], line['event_id'], line['voter_id']
            sub_id, rel_id, obj_id = (
                self.ent2id[sub],
                self.rel2id[rel],
                self.ent2id[obj],
            )
            self.data['train'].append((sub_id, rel_id, obj_id))
            self.sr2o['train'][(sub_id, rel_id)].add(obj_id)
            self.sr2o['train'][(obj_id, rel_id + self.num_rel)].add(sub_id) 
            src.append(sub_id)
            dst.append(obj_id)
            rels.append(rel_id)
            inver_src.append(obj_id)
            inver_dst.append(sub_id)
            inver_rels.append(rel_id + self.num_rel)

        K = 200
        few_shot_valid_cnt = ddict(int)
        df = pd.read_json("{}/target_event_preliminary_train_info.json".format(self.data_dir))
        records = df.to_dict('records')
        random.shuffle(records)
        for line in records:
            sub, rel, obj = line['inviter_id'], line['event_id'], line['voter_id']
            sub_id, rel_id, obj_id = (
                self.ent2id[sub],
                self.rel2id[rel],
                self.ent2id[obj],
            )

            if few_shot_valid_cnt[rel] < K:
                self.sr2o['valid'][(sub_id, rel_id)].add(obj_id)
                self.data['valid'].append([sub_id, rel_id, obj_id])
                few_shot_valid_cnt[rel] += 1
            else:
                self.data['train'].append((sub_id, rel_id, obj_id))
                self.sr2o['train'][(sub_id, rel_id)].add(obj_id)
                self.sr2o['train'][(obj_id, rel_id + self.num_rel)].add(sub_id)  
                src.append(sub_id)
                dst.append(obj_id)
                rels.append(rel_id)
                inver_src.append(obj_id)
                inver_dst.append(sub_id)
                inver_rels.append(rel_id + self.num_rel)

        self.triple2idx = dict()
        df = pd.read_json("{}/target_event_preliminary_test_info.json".format(self.data_dir))
        records = df.to_dict('records')
        
        for line in records:
            triple_id = int(line['triple_id'])
            sub, rel = line['inviter_id'], line['event_id']
            sub_id, rel_id = self.ent2id[sub], self.rel2id[rel]
            self.sr2o['test'][(sub_id, rel_id)] = set()
            self.triple2idx[(sub_id, rel_id)] = triple_id
        
        print('****************************')
        for split in ['train', 'valid']:
            print('Number of {} triples: {}'.format(split, len(self.data[split])))

        print('****************************')
         # 创建self.data的副本,并将其类型转化为字典
        self.data = dict(self.data)
        # 遍历验证集和测试集
        for split in ['valid', 'test']:
             # 输出每个集合中的查询数量
            print('Number of {} queries: {}'.format(split, len(self.sr2o[split])))

        # 构建图
        # CompGCN中的关系增强 故而又加inver_
        src = src + inver_src  
        dst = dst + inver_dst  
        rels = rels + inver_rels 
        # 使用源节点列表和目标节点列表构建DGL图，节点数为self.num_ent
        self.g = dgl.graph((src, dst), num_nodes=self.num_ent) 
        # 实体/节点特征 num_ent * 5 
        user_feat = user_info.iloc[:,1:]
        self.g.ndata['ent_feat'] = torch.tensor(user_feat.values)
        # 为DGL图的边赋予对应的关系类型
        self.g.edata["etype"] = torch.Tensor(rels).long()
        # 边掩码
        in_edges_mask = [True] * (self.g.num_edges() // 2) + [False] * (self.g.num_edges() // 2)
        out_edges_mask = [False] * (self.g.num_edges() // 2) + [True] * (self.g.num_edges() // 2)
        self.g.edata["in_edges_mask"] = torch.Tensor(in_edges_mask)
        self.g.edata["out_edges_mask"] = torch.Tensor(out_edges_mask)
        def get_train_data_loader(split, batch_size, shuffle=True):
            return DataLoader(
                TrainDataset(
                    self.data[split], self.sr2o[split], self.num_ent,
                ),
                batch_size=batch_size,
                shuffle=shuffle,
                num_workers=max(0, self.num_workers),
                collate_fn=TrainDataset.collate_fn,
                pin_memory=True
            )

        def get_test_data_loader(split, batch_size, shuffle=False):
            triple2idx = None if split == 'valid' else self.triple2idx
            return DataLoader(
                TestDataset(
                    self.sr2o[split], triple2idx
                ),
                batch_size=batch_size,
                shuffle=shuffle,
                num_workers=max(0, self.num_workers),
                collate_fn=TestDataset.collate_fn,
                pin_memory=True
            )
        # train/valid/test dataloaders
        self.data_iter = {
            "train": get_train_data_loader("train", self.batch_size),
            "valid": get_test_data_loader("valid", 1024),
            "test": get_test_data_loader("test", 1024),
            }