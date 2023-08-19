/*
 * @Author: LynnGao
 * @Date: 2023-08-19 16:55:39
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-19 17:27:09
 * @Description: greatest common divisor and least common multiple
 * @FilePath: \learnsomething\an\chapater5\section2.cpp
 */

#include <cstdio>

// 5.2.1最大公约数
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// int main()
// {
//     int m, n;
//     while (scanf("%d%d", &m, &n) != EOF)
//         printf("%d\n", gcd(m, n));

//     return 0;
// }

// 5.2.2最小公倍数

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main()
{
    int m, n;
    while (scanf("%d%d", &m, &n) != EOF)
        printf("%d\n", lcm(m, n));

    return 0;
}