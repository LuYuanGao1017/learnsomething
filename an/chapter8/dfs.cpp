/*
 * @Author: LynnGao
 * @Date: 2023-09-01 14:55:35
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-09-01 21:08:35
 * @Description:
 * Depth First Search DFS
 * 递归是实现DFS一种方式 非递归比较麻烦
 * 使用递归时调用系统栈 存放递归中每一层的状态
 * 本质还是 栈stack
 * @FilePath: \learnsomething\an\chapter8\dfs.cpp
 */
// DFS思想
// 1.背包问题
// #include <iostream>
// const int maxn = 30;
// int n, V, maxValue = 0;
// int w[maxn], v[maxn];

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

// 剪枝儿:通过题目条件限制节省计算量的方法

// void DFS(int index, int sumW, int sumV)
// {
//     if (index == n)
//     {
//         return;
//     }
//     DFS(index + 1, sumW, sumV);
//     if (sumW + w[index] <= V)
//     {
//         if (sumV + v[index] > maxValue)
//         {
//             maxValue = sumV + v[index];
//         }
//         DFS(index + 1, sumW + w[index], sumV + v[index]);
//     }
// }

// int main()
// {
//     std::cin >> n >> V;
//     for (int i = 0; i < n; i++)
//         std::cin >> w[i];
//     for (int i = 0; i < n; i++)
//         std::cin >> v[i];
//     DFS(0, 0, 0);
//     std::cout << maxValue << std::endl;
//     return 0;
// }

// 问题A 全排列

// #include <iostream>
// #include <vector>
// std::vector<int> ans;
// int n;
// bool vis[12];
// void dfs(int index)
// {
//     if (index == n)
//     {
//         int m = 0;
//         for (std::vector<int>::iterator it = ans.begin(); it != ans.end(); it++)
//         {
//             std::cout << *it;
//             m++;
//             if (m == n)
//                 std::cout << '\n';
//             else
//                 std::cout << ' ';
//         }
//         return;
//     }
//     for (int x = 1; x <= n; x++)
//     {
//         if (!vis[x])
//         {
//             ans.push_back(x);
//             vis[x] = true;
//             dfs(index + 1);
//             vis[x] = false;
//             ans.pop_back();
//         }
//     }
//     return;
// }

// int main()
// {
//     while (std::cin >> n)
//     {
//         if (n < 1 || n > 10)
//             return 1;
//         else
//         {
//             for (int i = 0; i <= n; i++)
//                 vis[i + 1] = false;
//             dfs(0);
//         }
//     }
//     return 0;
// }

// 问题B 组合输出

