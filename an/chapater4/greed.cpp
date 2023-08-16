/*
 * @Author: LynnGao
 * @Date: 2023-08-15 15:55:16
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-16 13:35:28
 * @Description: 贪心 简单贪心 区间贪心
 * @FilePath: \learnsomething\an\chapater4\greed.cpp
 */

// 4.4.1 简单贪心
// 当前状态下的局部最优

#include <stdio.h>
#include <algorithm>
using namespace std;

// // PATB1020 月饼
// struct mooncake{
//     double store;
//     double sell;
//     double price;
// }cakes[1010];

// bool cmp(mooncake a, mooncake b){
//     return a.price > b.price;
// }

// int main(){
//     int n;
//     double D;
//     scanf("%d%lf", &n, &D);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lf", &cakes[i].store);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lf", &cakes[i].sell);
//         cakes[i].price = cakes[i].sell / cakes[i].store;
//     }

//     sort(cakes, cakes + n, cmp);
//     double ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (cakes[i].store <= D)
//         {
//             D -= cakes[i].store;
//             ans += cakes[i].sell;
//         } else{
//             ans += cakes[i].price * D;
//             break;
//         }
//     }
//     printf("%.2f\n", ans);
//     return 0;
// }

// PAT B1023 组个最小数

// int main()
// {
//     int numbers[10] = {0};
//     int temp;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &temp);
//         numbers[temp]++;
//     }
//     for (int i = 1; i < 10; i++)
//     {
//         if (numbers[i] > 0)
//         {
//             printf("%d", i);
//             numbers[i]--;
//             break;
//         }
//     }
//     for (int i = 0; i < 10; i++)
//         for (int j = 0; j < numbers[i]; j++)
//             printf("%d", i);

//     return 0;
// }

// 4.4.2　区间贪心
// 区间不相交问题　给出Ｎ个开区间
// 选择尽可能多的开区间　使得这些开区间两两没有交集

// const int maxn = 4;
// struct Inteval
// {
//     int x, y;
// } I[maxn];

// bool cmp(Inteval a, Inteval b)
// {
//     if (a.x != b.x)
//         return a.x > b.x;
//     else
//         return a.y < b.y;
// }

// int main()
// {
//     for (int i = 0; i < maxn; i++)
//         scanf("%d%d", &I[i].x, &I[i].y);
//     sort(I, I + maxn, cmp);
//     int ans = 1, lastX = I[0].x;
//     for (int i = 1; i < maxn; i++)
//     {
//         if (I[i].y <= lastX)
//         {
//             lastX = I[i].x;
//             ans++;
//         }
//     }
//     printf("%d\n", ans);
//     return 0;
// }

const int maxn = 4;
struct Inteval
{
    int x, y;
} I[maxn];

bool cmp(Inteval a, Inteval b)
{
    if (a.y != b.y)
        return a.y > b.y;
    else
        return a.x < b.x;
}

int main()
{
    for (int i = 0; i < maxn; i++)
        scanf("%d%d", &I[i].x, &I[i].y);
    sort(I, I + maxn, cmp);
    int ans = 1, lastX = I[0].x;
    for (int i = 1; i < maxn; i++)
    {
        if (I[i].y <= lastX)
        {
            lastX = I[i].x;
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
