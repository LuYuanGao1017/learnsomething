/*
 * @Author: LynnGao
 * @Date: 2023-08-29 21:21:07
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-29 22:08:47
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
// 1.创建链表
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    node* next;
};

node* create(int Array[]){
    node* p, *pre, *head;
    head = new node;
    head->next = NULL;
    pre = head;
    for (int i = 0; i < 5; i++)
    {
        p = new node;
        p->data = Array[i];
        p->next = NULL;
        pre->next = p;
        pre = p;
    }
    return head;
}

int main(){
    int Array[5] = {5, 3, 6, 1, 2};
    node* L = create(Array);
    L = L->next;
    while (L!=NULL)
    {
        printf("%d ", L->data);
        L = L->next;
    }
    return 0;
}
// 2.查找元素