/*
 * @Author: LynnGao
 * @Date: 2023-08-21 13:48:51
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-21 15:04:28
 * @Description: 大整数 又称为 高精度整数 用基本数据类型无法存储其精度的整数
 * @FilePath: \learnsomething\an\chapater5\Large_Integer_Operations.cpp
 */
#include <stdio.h>
#include <string.h>
// 5.6.1 大整数存储
// 数组array

struct bign
{
    int d[1000];
    int len;
    bign()
    {
        memset(d, 0, sizeof(d));
        len = 0;
    }
};

bign change(char str[])
{
    bign a;
    a.len = strlen(str);
    for (int i = 0; i < a.len; i++)
    {
        a.d[i] = str[a.len - i - 1] - '0';
    }
    return a;
}

int compare(bign a, bign b)
{
    if (a.len > b.len)
        return 1;
    else if (a.len < b.len)
        return -1;
    else
    {
        for (int i = a.len - 1; i >= 0; i--)
        {
            if (a.d[i] > b.d[i])
                return 1;
            else if (a.d[i] < b.d[i])
                return -1;
        }
    }
    return 0;
}
// 5.6.2 大整数四则运算

// 1.高精度加法

bign add(bign a, bign b)
{
    bign c;
    int carry = 0;
    for (int i = 0; i < a.len || i < b.len; i++)
    {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len++] = temp % 10;
        carry = temp / 10;
    }
    if (carry != 0)
        c.d[c.len++] = carry;
    return c;
}

void print(bign a)
{
    for (int i = a.len - 1; i >= 0; i--)
        printf("%d", a.d[i]);
}

// int main()
// {
//     char str1[1000], str2[1000];
//     scanf("%s%s", str1, str2);
//     bign a = change(str1);
//     bign b = change(str2);
//     print(add(a, b));
//     return 0;
// }

// 2.高精度减法
bign sub(bign a, bign b)
{
    bign c;
    for (int i = 0; i < a.len || i < b.len; i++)
    {
        if (a.d[i] < b.d[i])
        {
            a.d[i + 1]--;
            a.d[i] += 10;
        }
        c.d[c.len++] = a.d[i] - b.d[i];
    }
    // 去除高位的 0 同时至少保留一位最低位
    while (c.len - 1 >= 1 && c.d[c.len - 1] == 0)
        c.len--;
    return c;
}

// int main()
// {
//     char str1[1000], str2[1000];
//     scanf("%s%s", str1, str2);
//     bign a = change(str1);
//     bign b = change(str2);
//     print(sub(a, b));
//     return 0;
// }

// 3.高精度乘法

bign multi(bign a, int b)
{
    bign c;
    int carry = 0;
    for (int i = 0; i < a.len; i++)
    {
        int temp = a.d[i] * b + carry;
        c.d[c.len++] = temp % 10;
        carry = temp / 10;
    }
    while (carry != 0)
    {
        c.d[c.len++] = carry % 10;
        carry /= 10;
    }
    return c;
}

// int main()
// {
//     char str1[1000];
//     scanf("%s", str1);
//     int b;
//     scanf("%d", &b);
//     bign a = change(str1);
//     print(multi(a, b));
//     return 0;
// }

// 4.高精度除法

bign divide(bign a, int b, int &r)
{
    bign c;
    c.len = a.len;
    for (int i = a.len - 1; i >= 0; i--)
    {
        r = r * 10 + a.d[i];
        if (r < b)
            c.d[i] = 0;
        else
        {
            c.d[i] = r / b;
            r = r % b;
        }
    }
    while (c.len - 1 >= 1 && c.d[c.len - 1] == 0)
        c.len--;
    return c;
}

int main()
{
    char str1[1000];
    scanf("%s", str1);
    int b, r = 0;
    scanf("%d", &b);
    bign a = change(str1);
    print(divide(a, b, r));
    return 0;
}