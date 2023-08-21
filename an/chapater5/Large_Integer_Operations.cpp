/*
 * @Author: LynnGao
 * @Date: 2023-08-21 13:48:51
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-21 14:22:31
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