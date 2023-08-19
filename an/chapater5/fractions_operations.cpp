/*
 * @Author: LynnGao
 * @Date: 2023-08-19 17:29:21
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-19 22:42:55
 * @Description: Four operations with fractions
 * @FilePath: \learnsomething\an\chapater5\fractions_operations.cpp
 */

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// 5.3.1 分数的表示和化简

// 1.表示
struct fraction
{
    int up, down;
};

// 2.化简
#include <math.h>
fraction reduction(fraction result)
{
    if (result.down < 0)
    {
        result.up = -result.up;
        result.down = -result.down;
    }
    if (result.up == 0)
    {
        result.down = 1;
    }
    else
    {
        int d = gcd(abs(result.up), abs(result.down));
        result.up /= d;
        result.down /= d;
    }
    return result;
}

// 5.3.2 分数的四则运算
// 1.加法
fraction add(fraction a, fraction b)
{
    fraction result;
    result.up = a.up * b.down + b.up * a.down;
    result.down = a.down * b.down;
    return reduction(result);
}
// 2.减法

fraction minu(fraction a, fraction b)
{
    fraction result;
    result.up = a.up * b.down - b.up * a.down;
    result.down = a.down * b.down;
    return reduction(result);
}

// 3.乘法
fraction multi(fraction a, fraction b)
{
    fraction result;
    result.up = a.up * b.up;
    result.down = a.down * b.down;
    return reduction(result);
}

// 4.除法
fraction divide(fraction a, fraction b)
{
    fraction result;
    result.up = a.up * b.down;
    result.down = a.down * b.up;
    return reduction(result);
}

// 5.3.3 分数的输出
#include <stdio.h>
void showResult(fraction r)
{
    r = reduction(r);
    if (r.down == 1)
        printf("%lld", r.up);
    else if (abs(r.up) > r.down)
    {
        printf("%d %d/%d", r.up / r.down, abs(r.up) % r.down, r.down);
    }
    else
    {
        printf("%d/%d", r.up, r.down);
    }
}