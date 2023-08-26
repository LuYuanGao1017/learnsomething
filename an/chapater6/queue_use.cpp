/*
 * @Author: LynnGao
 * @Date: 2023-08-26 16:16:41
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-26 16:16:50
 * @Description:
 * 先进先出 队列
 * @FilePath: \learnsomething\an\chapater6\queue_use.cpp
 */

#include <stdio.h>
#include <queue>
using namespace std;

// 1. queue的定义
// 2. queue容器内元素的访问

int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i);
    printf("%d %d\n", q.front(), q.back());
    return 0;
}

// 3.queue常用函数实例
