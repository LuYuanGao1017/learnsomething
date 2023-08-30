/*
 * @Author: LynnGao
 * @Date: 2023-08-29 21:21:07
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-30 14:46:53
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

// PAT A1032
#include <stdio.h>
#include <stdlib.h>
const int maxn = 100010;
struct NODE
{
    char c;
    int next;
    bool flag;
} node[maxn];

int main()
{
    for (int i = 0; i < maxn; i++)
        node[i].flag = false;
    int a1, a2, n;
    scanf("%d%d%d", &a1, &a2, &n);
    int add, next;
    char data;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %c %d", &add, &data, &next);
        node[add].c = data;
        node[add].next = next;
    }
    int p;
    for (p = a1; p != -1; p = node[p].next)
        node[p].flag = true;
    for (p = a2; p != -1; p = node[p].next)
    {
        if (node[p].flag == true)
            break;
    }
    if (p != -1)
        printf("%05d\n", p);
    else
        printf("-1\n");
    return 0;
}