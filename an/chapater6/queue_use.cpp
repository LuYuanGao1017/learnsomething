/*
 * @Author: LynnGao
 * @Date: 2023-08-26 16:16:41
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-26 16:40:43
 * @Description:
 * 先进先出 队列
 * @FilePath: \learnsomething\an\chapater6\queue_use.cpp
 */

#include <stdio.h>
#include <queue>
using namespace std;

// 1. queue的定义
// 2. queue容器内元素的访问

// int main()
// {
//     queue<int> q;
//     for (int i = 1; i <= 5; i++)
//         q.push(i);
//     printf("%d %d\n", q.front(), q.back());
//     return 0;
// }

// 3.queue常用函数实例
// (1) push(x) 将 x 入列 O(1)
// (2) front() back() 分别获得队首元素和队尾元素 O(1)
// (3) pop() 队首元素出队 O(1)

// int main()
// {
//     queue<int> q;
//     for (int i = 1; i <= 5; i++)
//         q.push(i); // 1 2 3 4 5 入队
//     for (int i = 1; i <= 3; i++)
//         q.pop(); // 1 2 3 出队
//     printf("%d\n", q.front());
//     return 0;
// }

// (4) empty() 检测queue是否为空 返回true则为空 false为非空 O(1)

// int main()
// {
//     queue<int> q;
//     if (q.empty())
//         printf("Queue Empty\n");
//     else
//         printf("Queue Not Empty\n");
//     q.push(1);
//     printf("After q.push(1)\n");
//     if (q.empty())
//         printf("Queue Empty\n");
//     else
//         printf("Queue Not Empty\n");
//     return 0;
// }

// (5) size() 元素个数 O(1)

int main(){
    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i);
    printf("q.size() = %d\n", q.size());
    return 0;
}

// 4.queue常见用途

// 广度优先搜索时
// 使用front() back()函数前必须先判断是否为空 empty()