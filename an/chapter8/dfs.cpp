/*
 * @Author: LynnGao
 * @Date: 2023-09-01 14:55:35
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-09-01 17:26:39
 * @Description:
 * Depth First Search DFS
 * 递归是实现DFS一种方式 非递归比较麻烦
 * 使用递归时调用系统栈 存放递归中每一层的状态
 * 本质还是 栈stack
 * @FilePath: \learnsomething\an\chapter8\dfs.cpp
 */

#include <iostream>

const int maxn = 30;
int n, V, maxValue = 0;
int w[maxn], v[maxn];

// void DFS(int index, int sumW, int sumV)
// {
//     if (index == n)
//     {
//         if (sumW <= V && sumV > maxValue)
//         {
//             maxValue = sumV;
//         }
//         return;
//     }
//     DFS(index + 1, sumW, sumV);
//     DFS(index + 1, sumW + w[index], sumV + v[index]);
// }

void DFS(int index, int sumW, int sumV)
{
    if (index == n)
    {
        return;
    }
    DFS(index + 1, sumW, sumV);
    if (sumW + w[index] <= V)
    {
        if (sumV + v[index] > maxValue)
        {
            maxValue = sumV + v[index];
        }
        DFS(index + 1, sumW + w[index], sumV + v[index]);
    }
}

int main()
{
    std::cin >> n >> V;
    for (int i = 0; i < n; i++)
        std::cin >> w[i];
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    DFS(0, 0, 0);
    std::cout << maxValue << std::endl;
    return 0;
}
