/*
 * @Author: LynnGao
 * @Date: 2023-08-16 13:40:30
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-18 09:46:14
 * @Description: 基于有序序列的二分查找
 * @FilePath: \learnsomething\an\chapater4\binary.cpp
 */

#include <stdio.h>
#include <math.h>

// 4.5.1二分查找

// int binarySearch(int A[], int left, int right, int x){
//     int mid;
//     while (left <= right)
//     {
//         mid = (left + right) / 2;
//         if (A[mid] == x) return mid;
//         else if(A[mid] > x){
//             right = mid - 1;
//         }else {
//             left = mid + 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     const int n = 10;
//     int A[n] = {1, 3, 4, 6, 7, 9, 10, 11, 13, 15};
//     printf("%d %d\n", binarySearch(A, 0, n - 1, 6), binarySearch(A, 0, n - 1, 9));
//     return 0;
// }

// 4.5.2 二分法拓展

// 给定单调函数f(x)求f(x)=0的根
// const double eps = 1e-5;

// double f(double x)
// {
//     return x * x;
// }

// double calSqrt()
// {
//     double left = 1, right = 2, mid;
//     while (right - left > eps)
//     {
//         mid = (left + right) / 2;
//         if (f(mid) > 2)
//             right = mid;
//         else
//             left = mid;
//     }
//     return mid;
// }

// int main(){
//     printf("%.3f", calSqrt());
//     return 0;
// }

// 装水问题

// const double PI = acos(-1.0);
// const double eps = 1e-5;

// double f(double R, double h)
// {
//     double alpha = 2 * acos((R - h) / R);
//     double X = 2 * sqrt(R * R - (R - h) * (R - h));
//     double S1 = alpha * R * R / 2 - X * (R - h) / 2;
//     double S2 = PI * R * R / 2;
//     return S1 / S2;
// }

// double solve(double R, double r){
//     double left = 0, right = R, mid;
//     while (right - left > eps)
//     {
//         mid = (left + right) / 2;
//         if (f(R, mid) > r)
//         {
//             right = mid;
//         }else{
//             left = mid;
//         }
//     }
//     return mid;
// }

// int main()
// {
//     double R, r;
//     scanf("%lf%lf", &R, &r);
//     printf("%.4f", solve(R, r));
//     return 0;
// }

// 切木棒问题

// N根木棒 长度均已知
// 切割得到至少K段长度相等的木棒
// 长度L最长为多长
//  1 << L << 最短的
// 3根 10 24 15 假设 K=7
// L <= 最短的那一根 10
// L = 10 1 + 2 + 1 = 4 < 7
// L = (0 + 10) / 2 = 5   2 + 4 + 3 = 9 > 7
// L = (5 + 10) / 2 = 7   1 + 3 + 2 = 6 < 7
// L = (5 + 7) / 2 = 6  1 + 4 + 2 = 7 = 7

// #include <algorithm>
// using namespace std;

// int solve(int N, int Len[], int K)
// {
//     int left = 0, right = Len[0];
//     int l;
//     while (left < right)
//     {
//         l = (left + right) / 2;
//         int k = 0;

//         for (int i = 0; i < N; i++)
//             k += Len[i] / l;

//         if (k >= K)
//             left = l + 1;
//         else
//             right = l;
//     }
//     return left - 1;
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int Lengths[N];
//     for (int i = 0; i < N; i++)
//         scanf("%d", &Lengths[i]);
//     sort(Lengths, Lengths + N);
//     int K;
//     scanf("%d", &K);
//     printf("%d\n", solve(N, Lengths, K));
//     return 0;
// }

// 4.5.3 快速幂

// // a^b % m --> (a * a *...a) b次 % m

// typedef long long LL;
// // 模运算性质 (a * b) % m 等价于 ((a % m) * (b % m)) % m

// LL pow(LL a, LL b, LL m)
// {
//     LL ans = 1;
//     for (int i = 0; i < b; i++)
//         ans = ans * a % m;
//     return ans;
// }

// LL pow(LL a, LL b, LL m)
// {
//     LL ans = 1;
//     for (int i = 0; i < b; i++)
//         ans = ans * a;
//     return ans % m;
// }

// 4.6 two pointers
// 4.6.1 什么是two pointers
// 编程思想

// 给定一个递增的正数序列和一个正整数 M
// 求序列种两个不同位置的数 a 和 b 使 a + b = M
// 给出所有满足的 a 和 b的方案

int main()
{
    int A[6] = {1, 2, 3, 4, 5, 6};
    int M;
    scanf("%d", &M);
    int i = 0, j = 5;
    while (i < j)
    {
        if (A[i] + A[j] == M)
        {
            printf("A[%d] = %d \tA[%d] =  %d\n", i, A[i], j, A[j]);
            i++;
            j--;
        }
        else if (A[i] + A[j] < M)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}