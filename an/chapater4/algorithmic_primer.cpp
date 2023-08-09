/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-09 15:34:37
 * @Description: 基础代码
 * @FilePath: \learnsomething\an\chapater4\algorithmic_primer.cpp
 */
#include<stdio.h>
// 3.1 简单模拟

// PAT B1001 

// int main(){
//     int n, count = 0;
//     scanf("%d", &n);
//     // 判断偶数还是奇数
//     while(n != 1){
//         count++;
//         if(n % 2 == 0)  n = n / 2;
//         else n = (3 * n + 1) / 2;
//     }
//     printf("%d", count);
//     return 0;
// }

// PAT B1032

const int MAXN = 100010;
int scores[MAXN] = {0};

int main(){
    int n, schoolID, score;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &schoolID, &score);
        scores[schoolID] += score;
    }
    int k = 1, max = -1;
    for (int i = 1; i <= n; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            k = i;
        }
    }
    printf("%d %d\n", k, max);
    return 0;
}