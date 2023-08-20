/*
 * @Author: LynnGao
 * @Date: 2023-08-20 15:21:13
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-20 16:26:51
 * @Description:
 * @FilePath: \learnsomething\an\chapater5\prime_number.cpp
 */

// 5.4.1 素/质数的判断
#include <stdio.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// 5.4.2 素/质数的获取

const int maxn = 101;
int prime[maxn], pNum = 0;
bool P[maxn] = {0};
void find_prime()
{
    for (int i = 1; i < maxn; i++)
    {
        if (isPrime(i) == true)
        {
            prime[pNum++] = i;
            P[i] = true;
        }
    }
}

// 求解100以内所有素数

int main()
{
    find_prime();
    for (int i = 0; i < pNum; i++)
    {
        printf("%d", prime[i]);
    }
}