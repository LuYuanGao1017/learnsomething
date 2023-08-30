/*
 * @Author: LynnGao
 * @Date: 2023-08-29 21:21:07
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-30 22:21:21
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

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
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
    // 指令读取执行
    int numCom;
    cin >> numCom;
    getchar();
    for (int i = 0; i < numCom; i++)
    {
        string str;
        cin >> str;
        if (str == "get")
        {
            int p;
            cin >> p;
            get(head, p);
        }
        if (str == "insert")
        {
            int p, k;
            cin >> p >> k;
            insert(head, p, k);
        }
        if (str == "show")
        {
            show(head);
        }
        if (str == "delete")
        {
            int p;
            cin >> p;
            del(head, p);
        }
    }
    return 0;
}