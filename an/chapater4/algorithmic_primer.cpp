/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-14 13:29:40
 * @Description:
 * @FilePath: \learnsomething\an\chapater4\algorithmic_primer.cpp
 */

#include <stdio.h>
#include <algorithm>
#include <string.h>
// 4.1　排序
// 4.1.1
// 4.1.2

// 4.1.3 排序题与sort函数的应用
// 排序题的常用解题步骤

// // 1.相关结构体的定义

// struct stuInf
// {
//     char name[10];
//     int id[10];
//     int score;
//     int r; // 排名
// } stu[10];

// // 2.cmp函数的编写
// bool cmp(stuInf a, stuInf b)
// {
//     if (a.score != b.score)
//         return a.score > b.score;
//     else
//         return strcmp(a.name, b.name) < 0;
// }

// // 3.排名的实现

// int main()
// {
//     stu[0].r = 1;
//     for(int i = 1; i < 10; i++){
//         if(stu[i].score == stu[i - 1].score)
//             stu[i].r = stu[i - 1].r;
//         else stu[i].r = i + 1;
//     }
//     return 0;
// }
