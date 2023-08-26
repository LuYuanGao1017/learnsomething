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

int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i);
    printf("%d %d\n", q.front(), q.back());
    return 0;
}