/*
 * @Author: LynnGao
 * @Date: 2023-08-29 11:38:29
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-29 18:35:33
 * @Description:
 * @FilePath: \learnsomething\an\chapter7\queue_application.cpp
 */

// 输入10个整数
// 最小的数与第一个数换位置
// 最大的数与最后一个数换位置
// 三个函数
// (1)输入10个数
// (2)进行处理
// (3)输出10个数

// 样例输入 2 1 3 4 5 6 7 8 10 9
// 样例输出 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
#include <queue>
#include <limits.h>
using std::queue;

int MAX = INT_MIN;
int MIN = INT_MAX;
int n = 10;
int MinTemp, MaxTemp;
queue<int> q;
queue<int> temp;

void read()
{
    while (!q.empty())
    {
        q.pop();
    }
    int x;
    while (n--)
    {
        scanf("%d", &x);
        q.push(x);
        if (x > MAX)
        {
            MAX = x;
        }
        if (x < MIN)
        {
            MIN = x;
        }
    }
    MinTemp = q.front();
    MaxTemp = q.back();
}

void change()
{
    while (!temp.empty())
        temp.pop();
    temp.push(MIN);
    q.pop();
    for (int i = 0; i < 8; i++)
    {
        if (q.front() == MIN)
        {
            q.front() = MinTemp;
        }
        temp.push(q.front());
        q.pop();
    }
    temp.push(MAX);
    while (!q.empty())
        q.pop();
    bool flag = true;
    while (!temp.empty())
    {
        if (temp.front() == MAX)
        {
            if (flag)
                temp.front() = MaxTemp;
            flag = false;
        }
        q.push(temp.front());
        temp.pop();
    }
}

void print()
{
    while (!q.empty())
    {
        printf("%d ", q.front());
        q.pop();
    }
}

int main()
{
    read();
    change();
    print();
    return 0;
}