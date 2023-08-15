/*
 * @Author: LynnGao
 * @Date: 2023-08-15 15:55:16
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-15 16:32:38
 * @Description: 贪心 简单贪心 区间贪心
 * @FilePath: \learnsomething\an\chapater4\greed.cpp
 */

// 4.4.1 简单贪心
// 当前状态下的局部最优

// PATB1020 月饼
#include <stdio.h>
#include <algorithm>
using namespace std;

struct mooncake{
    double store;
    double sell;
    double price;
}cakes[1010];

bool cmp(mooncake a, mooncake b){
    return a.price > b.price;
}

int main(){
    int n;
    double D;
    scanf("%d%lf", &n, &D);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &cakes[i].store);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &cakes[i].sell);
        cakes[i].price = cakes[i].sell / cakes[i].store;
    }

    sort(cakes, cakes + n, cmp);
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (cakes[i].store <= D)
        {
            D -= cakes[i].store;
            ans += cakes[i].sell;
        } else{
            ans += cakes[i].price * D;
            break;
        }
    }
    printf("%.2f\n", ans);
    return 0;
}