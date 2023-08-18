/*
 * @Author: LynnGao
 * @Date: 2023-08-18 16:05:41
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-18 17:29:13
 * @Description:
 * @FilePath: \learnsomething\an\chapater4\skills_supplements.cpp
 */

// 4.7.1 打表

// 1.空间换时间 将所有可能需要用到的结果事先算出来

// 4.7.2 递推

// 递推关系

// PAT B1040/A1093
#include <stdio.h>
#include <string.h>
const int maxn = 100010;
const int MOD = 1000000007;
char str[maxn];
int leftNumP[maxn] = {0};
int main()
{
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (i > 0)
            leftNumP[i] = leftNumP[i - 1];
        if (str[i] == 'P')
            leftNumP[i]++;
    }
    int ans = 0, rightNumT = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == 'T')
        {
            rightNumT++;
        }
        else if (str[i] == 'A')
        {
            ans = (ans + leftNumP[i] * rightNumT) & MOD;
        }
    }
    printf("%d\n", ans);
    return 0;
}
// 4.7.3 
// 随机选择算法
