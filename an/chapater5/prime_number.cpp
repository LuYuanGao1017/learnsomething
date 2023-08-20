/*
 * @Author: LynnGao
 * @Date: 2023-08-20 15:21:13
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-20 17:23:41
 * @Description:
 * @FilePath: \learnsomething\an\chapater5\prime_number.cpp
 */

// 5.4.1 素/质数的判断
#include <stdio.h>
#include <math.h>

// // 开根号 算法复杂度 O(sqrt(n))
// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     int sqr = (int)sqrt(1.0 * n);
//     for (int i = 2; i <= sqr; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// // n接近int型变量上限时 i * i 会溢出 n < 10^9都是安全的
// // 解决办法是将i定义为long long型
// // 5.4.2 素/质数表的获取

// const int maxn = 101;
// int prime[maxn], pNum = 0;
// bool P[maxn] = {0};
// void find_prime()
// {
//     for (int i = 1; i < maxn; i++)
//     {
//         if (isPrime(i) == true)
//         {
//             prime[pNum++] = i;
//             P[i] = true;
//         }
//     }
// }

// // 求解100以内所有素数

// int main()
// {
//     find_prime();
//     for (int i = 0; i < pNum; i++)
//     {
//         printf("%d ", prime[i]);
//     }
// }

// 上面的算法在 n < 10^5 是可以承受的 如果出现需要更大范围的素数表
// 则使用 埃氏筛法 欧拉筛法能达到 O(n)
// O(nlog log n)
const int maxn = 101;
int prime[maxn], pNum;
bool p[maxn] = {0};

void find_prime()
{
    for (int i = 2; i < maxn; i++)
    {
        if (p[i] == false)
        {
            prime[pNum++] = i;
            for (int j = i + i; j < maxn; j += i)
            {
                p[j] = true;
            }
        }
    }
}

int main()
{
    find_prime();
    for (int i = 0; i < pNum; i++)
    {
        printf("%d ", prime[i]);
    }
}

// PAT B1013 数素数