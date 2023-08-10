/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-10 14:07:02
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

// int month[13][2] = {{0, 0},
// {31, 31}, {28, 29}, {31, 31}, 
// {30, 30}, {31, 31}, {30, 30}, 
// {31, 31}, {31, 31}, {30, 30}, 
// {31, 31}, {30, 30}, {31, 31}};

// bool yearjudge(int year){
//     return (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
// }

// int main(){
//     int date1, date2, y1, y2, m1, m2, d1, d2;
//     scanf("%d%d", &date1, &date2);
//     printf("date1 = %d\n",date1);
//     printf("date2 = %d\n",date2);
//     if(date1 > date2){
//         int temp = date1;
//         date1 = date2;
//         date2 = temp;
//     }
//     y1 = date1 / 10000;
//     y2 = date2 / 10000;
//     m1 = date1 % 10000 / 100;
//     m2 = date2 % 10000 / 100;
//     d1 = date1 % 100;
//     d2 = date2 % 100;
//     int days = 1;
//     while (y1 < y2 || m1 < m2 || d1 < d2)
//     {
//         d1++;
//         if (d1 == month[m1][yearjudge(y1) + 1])
//         {
//             m1++;
//             d1 = 1;
//         }
//         if (m1 == 13)
//         {
//             y1++;
//             m1 = 1;
//         }
//         days++;
//     }
//     printf("days:%d", days);
//     return 0;
// }

// 3.5 进制转换
// 不同进制之间转换

int main(){
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    return 0;
}