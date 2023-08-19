/*
 * @Author: LynnGao
 * @Date: 2023-08-18 16:05:41
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-19 08:59:06
 * @Description:
 * @FilePath: \learnsomething\an\chapater4\skills_supplements.cpp
 */

// 4.7.1 打表

// 1.空间换时间 将所有可能需要用到的结果事先算出来

// 4.7.2 递推

// 递推关系

// PAT B1040/A1093
// #include <stdio.h>
// #include <string.h>
// const int maxn = 100010;
// const int MOD = 1000000007;
// char str[maxn];
// int leftNumP[maxn] = {0};
// int main()
// {
//     gets(str);
//     int len = strlen(str);
//     for (int i = 0; i < len; i++)
//     {
//         if (i > 0)
//             leftNumP[i] = leftNumP[i - 1];
//         if (str[i] == 'P')
//             leftNumP[i]++;
//     }
//     int ans = 0, rightNumT = 0;
//     for (int i = len - 1; i >= 0; i--)
//     {
//         if (str[i] == 'T')
//         {
//             rightNumT++;
//         }
//         else if (str[i] == 'A')
//         {
//             ans = (ans + leftNumP[i] * rightNumT) & MOD;
//         }
//     }
//     printf("%d\n", ans);
//     return 0;
// }

// 4.7.3
// 随机选择算法
// 找出无序数组中第K个大的数

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void swap(int A[], int p, int l)
{
    int temp = A[p];
    A[p] = A[l];
    A[l] = temp;
}

int randPartition(int A[], int left, int right)
{
    int p = round(1.0 * rand() / RAND_MAX * (right - left) + left);
    swap(A, p, left);
    int temp = A[left];
    while (left < right)
    {
        while (left < right && A[right] > temp)
            right--;
        A[left] = A[right];
        while (left < right && A[left] <= temp)
            left++;
        A[right] = A[left];
    }
    A[left] = temp;
    return left;
}

int randSelect(int A[], int left, int right, int K)
{
    if (left == right)
        return A[left];
    int p = randPartition(A, left, right);
    int M = p - left + 1;
    if (K == M)
        return A[p];
    if (K < M)
        return randSelect(A, left, p - 1, K);
    else
        return randSelect(A, p + 1, right, K - M);
}

int main()
{
    int A[6] = {5, 12, 7, 2, 9, 3};
    for (int i = 0; i < 6; i++)
        printf("%d ", A[i]);
    printf("\n3 th big number %d", randSelect(A, 0, 5, 3));
    return 0;
}