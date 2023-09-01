/*
 * @Author: LynnGao
 * @Date: 2023-08-29 21:21:07
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-09-01 14:51:04
 * @Description:
 * @FilePath: \learnsomething\an\chapter7\linked_list_process.cpp
 */
// 7.3.1 链表的概念

// 7.3.2 使用malloc函数或new 分配内存空间
// 1.malloc C语言中stdlib.h下的函数
// typename* p = (typename*)malloc(sizeof(typename));
// 2.new运算符
// typename* p = new typename;
// 3.内存泄漏
// malloc和new开辟的空间没有释放
// (1) free函数 对应malloc
// (2)dekete运算符 对应new

// 7.3.3 链表的基本操作
// // 1.创建链表
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     node *next;
// };

// node *create(int Array[])
// {
//     node *p, *pre, *head;
//     head = new node;
//     head->next = NULL;
//     pre = head;
//     for (int i = 0; i < 5; i++)
//     {
//         p = new node;
//         p->data = Array[i];
//         p->next = NULL;
//         pre->next = p;
//         pre = p;
//     }
//     return head;
// }

// int main()
// {
//     int Array[5] = {5, 3, 6, 1, 2};
//     node *L = create(Array);
//     L = L->next;
//     while (L != NULL)
//     {
//         printf("%d ", L->data);
//         L = L->next;
//     }
//     return 0;
// }
// // 2.查找元素
// // count 元素个数
// int search(node *head, int x)
// {
//     int count = 0;
//     node *p = head->next;
//     while (p != NULL)
//     {
//         if (p->data == x)
//         {
//             count++;
//         }
//         p = p->next;
//     }
//     return count;
// }
// // 3.插入元素
// void insert(node *head, int pos, int x)
// {
//     node *p = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         p = p->next;
//     }
//     node *q = new node;
//     q->data = x;
//     q->next = p->next;
//     p->next = q;
// }
// // 4.删除元素
// void del(node *head, int x)
// {
//     node *p = head->next;
//     node *pre = head;
//     while (p != NULL)
//     {
//         if (p->data == x)
//         {
//             pre->next = p->next;
//             delete (p);
//             p = pre->next;
//         }
//         else
//         {
//             pre = p;
//             p = p->next;
//         }
//     }
// }

// 7.3.4 静态链表 原理 hash
// 不需要头节点

// struct Node{
//     typename data;
//     int next;
// }node[size];

// // PAT A1032
// #include <stdio.h>
// #include <stdlib.h>
// const int maxn = 100010;
// struct NODE
// {
//     char c;
//     int next;
//     bool flag;
// } node[maxn];

// int main()
// {
//     for (int i = 0; i < maxn; i++)
//         node[i].flag = false;
//     int a1, a2, n;
//     scanf("%d%d%d", &a1, &a2, &n);
//     int add, next;
//     char data;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %c %d", &add, &data, &next);
//         node[add].c = data;
//         node[add].next = next;
//     }
//     int p;
//     for (p = a1; p != -1; p = node[p].next)
//         node[p].flag = true;
//     for (p = a2; p != -1; p = node[p].next)
//     {
//         if (node[p].flag == true)
//             break;
//     }
//     if (p != -1)
//         printf("%05d\n", p);
//     else
//         printf("-1\n");
//     return 0;
// }

// // PAT A1052
// #include <stdio.h>
// #include <stdlib.h>
// #include <algorithm>
// using namespace std;

// const int maxn = 100010;
// struct NODE
// {
//     int add, key, next;
//     bool flag;
// } node[maxn];

// bool cmp(NODE a, NODE b)
// {
//     if (a.flag == false || b.flag == false)
//         return a.flag > b.flag;
//     else
//         return a.key < b.key;
// }

// int main()
// {
//     for (int i = 0; i < maxn; i++)
//         node[i].flag = false;
//     int n, s;
//     scanf("%d%d", &n, &s);
//     int a, k, nt;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%d%d", &a, &k, &nt);
//         node[a].add = a;
//         node[a].key = k;
//         node[a].next = nt;
//     }
//     int count = 0, p = s;
//     while (p != -1)
//     {
//         node[p].flag = true;
//         count++;
//         p = node[p].next;
//     }
//     if (count == 0)
//     {
//         printf("0 -1");
//     }
//     else
//     {
//         sort(node, node + maxn, cmp);
//         printf("%d %05d\n", count, node[0].add);
//         for (int i = 0; i < count; i++)
//         {
//             if (i != count - 1)
//                 printf("%05d %d %05d\n", node[i].add, node[i].key, node[i + 1].add);
//             else
//                 printf("%05d %d -1\n", node[i].add, node[i].key);
//         }
//     }

//     return 0;
// }

// codeup a
// 输入
// 3 3 2 1 初始化列表 3代表后面有三个整数 3 2 1
// 输入顺序与列表中顺序相反
// 第二行一个整数m 下面有m行
// 21 每行是字符串 选自 "get" "insert" "delet" "show"中一种
// "get" "delete"后面一行有一个整数a说明 获得删除第a个元素
// "insert"后面一行两个整数 a 和 e 在第a个位置插入元素e
// "show"后没有整数

/* 样例输入
3 3 2 1
21
show
delete 1
show
delete 2
show
delete 1
show
delete 2
insert 2 5
show
insert 1 5
show
insert 1 7
show
insert 2 5
show
insert 3 6
show
insert 1 8
show
get 2 */

/* 样例输出
1 2 3
delete OK
2 3
delete OK
2
delete OK
Link list is empty
delete fail
insert fail
Link list is empty
insert OK
5
insert OK
7 5
insert OK
7 5 5
insert OK
7 5 6 5
insert OK
8 7 5 6 5
7 */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
struct node
{
    int data;
    node *next;
};

void show(node *L)
{
    L = L->next;
    if (L != NULL)
    {
        while (L != NULL)
        {
            printf("%d ", L->data);
            L = L->next;
        }
        printf("\n");
    }
    else
        printf("Link list is empty\n");
}

void get(node *L, int pos)
{
    node *p = L->next;
    int j = 1;
    while (p != NULL && j < pos)
    {
        p = p->next;
        ++j;
    }
    if (p == NULL || j > pos)
    {
        printf("get failed\n");
        return;
    }
    printf("%d\n", p->data);
}

void insert(node *L, int pos, int value)
{
    node *p = L;
    int j = 0;
    while (p != NULL && j < pos - 1)
    {
        p = p->next;
        ++j;
    }
    if (p == NULL || j > pos - 1)
    {
        printf("insert fail\n");
        return;
    }
    node *q = new node;
    q->data = value;
    q->next = p->next;
    p->next = q;
    printf("insert OK\n");
}

void del(node *L, int pos)
{
    node *p = L;
    int j = 0;

    while (p->next != NULL && j < pos - 1)
    {
        p = p->next;
        ++j;
    }

    if (p->next == NULL || j > pos - 1)
    {
        printf("delete fail\n");
        return;
    }

    node *q = p->next;
    p->next = q->next;
    delete q;
    printf("delete OK\n");
}

int main()
{
    // 第一行数据读取
    int n;
    cin >> n;
    node *head, *p;
    head = new node;
    head->next = NULL;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        p = new node;
        p->data = t;
        p->next = head->next;
        head->next = p;
    }

    // 存储指令的向量
    vector<pair<string, pair<int, int>>> instructions;

    // 指令读取存储
    int numCom;
    cin >> numCom;
    for (int i = 0; i < numCom; i++)
    {
        string str;
        cin >> str;
        if (str == "get" || str == "delete")
        {
            int p;
            cin >> p;
            instructions.push_back({str, {p, 0}});
        }
        else if (str == "insert")
        {
            int p, k;
            cin >> p >> k;
            instructions.push_back({str, {p, k}});
        }
        else if (str == "show")
        {
            instructions.push_back({str, {0, 0}});
        }
    }

    // 执行存储的指令
    for (const auto &instr : instructions)
    {
        if (instr.first == "get")
        {
            get(head, instr.second.first);
        }
        else if (instr.first == "insert")
        {
            insert(head, instr.second.first, instr.second.second);
        }
        else if (instr.first == "show")
        {
            show(head);
        }
        else if (instr.first == "delete")
        {
            del(head, instr.second.first);
        }
    }

    return 0;
} */

// 问题B链表排序

#include <iostream>
#include <algorithm>
#include <vector>
struct stu
{
    int id, score;
    stu *next;
    stu(int sid, int scr) : id(sid), score(scr), next(nullptr) {}
};

bool cmp(const stu *a, const stu *b)
{
    return a->id < b->id;
}

void print(stu *head)
{
    while (head)
    {
        std::cout << head->id << ' ' << head->score <<std::endl;
        head = head->next;
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<stu *> stus;
    for (int i = 0; i < n; i++)
    {
        int id, s;
        std::cin >> id >> s;
        stus.push_back(new stu(id, s));
    }
    for (int i = 0; i < m; i++)
    {
        int id, s;
        std::cin >> id >> s;
        stus.push_back(new stu(id, s));
    }
    std::sort(stus.begin(), stus.end(), cmp);
    stu *L = new stu(0, 0);
    stu *p = L;
    for (stu *s : stus)
    {
        p->next = s;
        p = s;
    }
    print(L->next);
    return 0;
}

// 问题C
/* #include <iostream>
#include <vector>
struct node
{
    int data;
    node *next;
    node(int d) : data(d), next(nullptr) {}
};

int main()
{
    std::vector<node *> nodes;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        std::cin >> d;
        nodes.push_back(new node(d));
    }
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        int d;
        std::cin >> d;
        nodes.push_back(new node(d));
    }
    node *head, *cur;
    head = new node(-1);
    cur = head;
    for (node *n : nodes)
    {
        cur->next = n;
        cur = n;
    }
    cur->next = nullptr;
    node * L = head->next;
    while (L)
    {
        std::cout << L->data << " ";
        L = L->next;
    }

    return 0;
} */

// 问题D

/* #include <iostream>
#include <algorithm>
int search(int Arr[], int v, int left, int right)
{
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (Arr[mid] == v)
        {
            Arr[mid] = Arr[mid + 1];
            Arr[mid + 1] = v;
            return 1;
        }
        else if (Arr[mid] > v)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int x, l;
    std::cin >> x >> l;
    int a[l + 1];
    for (int i = 0; i < l; i++)
    {
        std::cin >> a[i];
    }
    if (search(a, x, 0, l - 1) == 1)
    {
        std::cout << x << std::endl;
        for (int i = 0; i < l; i++)
        {
            std::cout << a[i] << " ";
        }
    }
    else
    {
        a[l] = x;
        std::sort(a, a + l + 1);
        std::cout << "no" << std::endl;
        for (int i = 0; i < l + 1; i++)
        {
            std::cout << a[i] << " ";
        }
    }
    return 0;
} */

// // 问题E 单链表反转
// #include <iostream>
// struct node
// {
//     int data;
//     node *next;
// };

// void print(node *L)
// {
//     while (L)
//     {
//         std::cout << L->data << ' ';
//         L = L->next;
//     }
//     std::cout << '\n';
// }

// void link_reverse(node * &head) {
//     node *prev = nullptr;
//     node *current = head;
//     node *nextNode = nullptr;

//     while (current) {
//         nextNode = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextNode;
//     }

//     head = prev; // 更新原链表头为反转后的链表头
// }

// int main()
// {
//     int n;
//     while (std::cin >> n)
//     {
//         if (n == 0)
//         {
//             std::cout << "list is empty\n";
//         }
//         // 创建单链表
//         else
//         {
//             node *L, *p;
//             L = new node;
//             L->next = nullptr;
//             p = L;
//             for (int i = 0; i < n; i++)
//             {
//                 node *q = new node;
//                 int x;
//                 std::cin >> x;
//                 q->data = x;
//                 q->next = nullptr;
//                 p->next = q;
//                 p = q;
//             }
//             print(L->next); // 输出反转前
//             link_reverse(L->next); //反转
//             print(L->next);
//         }
//     }

//     return 0;
// }

// 问题F 有序单链表删除重复元素
// set中元素不会重复 用来记录
// #include <iostream>
// #include <unordered_set>
// struct node
// {
//     int data;
//     node *next;
// };

// void del_dup(node *head)
// {
//     std::unordered_set<int> seen;
//     node *h, *cur;
//     h = head->next;
//     seen.insert(h->data);
//     cur = h->next;
//     while (cur)
//     {
//         if (seen.find(cur->data) != seen.end())
//         {
//             h->next = cur->next;
//             delete cur;
//             cur = h->next;
//         }
//         else
//         {
//             seen.insert(cur->data);
//             h = cur;
//             cur = cur->next;
//         }
//     }
// }

// void print(node *head)
// {
//     node *p = head->next;
//     while (p)
//     {
//         std::cout << p->data << ' ';
//         p = p->next;
//     }
//     std::cout << '\n';
//     return;
// }

// int main()
// {
//     int n;
//     while (std::cin >> n)
//     {
//         if (n == 0)
//         {
//             std::cout << "list is empty\n";
//             continue;
//         }
//         // 创建单链表 尾插法
//         else
//         {
//             node *L, *p;
//             L = new node;
//             L->next = nullptr;
//             p = L;
//             int d;
//             for (int i = 0; i < n; i++)
//             {
//                 std::cin >> d;
//                 node *q = new node;
//                 q->data = d;
//                 q->next = nullptr;
//                 p->next = q;
//                 p = q;
//             }
//             print(L);   // 输出删除前
//             del_dup(L); // 删除重复
//             print(L);   // 输出删除后的
//             // 释放链表节点内存
//             while (L)
//             {
//                 node *temp = L;
//                 L = L->next;
//                 delete temp;
//             }
//         }
//     }
//     return 0;
// }