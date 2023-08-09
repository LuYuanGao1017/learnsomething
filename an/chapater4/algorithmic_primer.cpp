/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-09 21:22:18
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

// const int MAXN = 100010;
// int scores[MAXN] = {0};

// int main(){
//     int n, schoolID, score;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%d", &schoolID, &score);
//         scores[schoolID] += score;
//     }
//     int k = 1, max = -1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (scores[i] > max)
//         {
//             max = scores[i];
//             k = i;
//         }
//     }
//     printf("%d %d\n", k, max);
//     return 0;
// }

// 3.2 Find Element

// 给定一些元素 查找某个满足条件的元素
// 查找操作

// codeup 1934
// n个数值各不相同 找x返回下标

// int main(){
//     int n, x, index = -1;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     scanf("%d", &x);
//     for(int i = 0; i < n; i++){
//         if (a[i] == x)
//         {
//             index = i;
//         }
//     }
//     if (index == -1) printf("%d not in array!\n", x);
//     else printf("%d index is %d", x, index);
//     return 0;
// }

// 3.3 图形输出
// 图形由若干字符组成
// 1.通过规律，直接进行输出
// 2.定义一个二维字符数组 通过规律填充 然后输出

// PAT B1036

// int main(){
//     int n, row;
//     char s;
//     scanf("%d %c", &n, &s);
//     if (n % 2 == 1) row = n / 2 + 1;
//     else row = n / 2;
//     for (int i = 0; i < row; i++)
//     {
//         if(i == 0 || i == row -1){
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%c", s);
//             }
//             printf("\n");
//         }else{
//             for (int k = 0; k < n; k++)
//             {
//                 if(k == 0 || k == n - 1) printf("%c", s);
//                 else printf(" ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// 3.4 日期处理
// 平年365天 闰年366天

// codeup 1928 日期差值

int main(){

    return 0;
}