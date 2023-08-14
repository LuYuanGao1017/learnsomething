/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-14 14:07:34
 * @Description:
 * @FilePath: \learnsomething\an\chapater4\algorithmic_primer.cpp
 */

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

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

// PAT A1025
struct testee
{
    char id[15];
    int score;
    int location_num;
    int local_rank;
} stu[300];

bool cmp(testee a, testee b)
{
    if (a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.id, b.id) < 0;
}

int main()
{
    int n, k, num = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        for (int j = 0; j < k; j++)
        {
            scanf("%s %d", stu[num].id, &stu[num].score);
            stu[num].location_num = i;
            num++;
        }
        sort(stu + num - k, stu + num, cmp);
        stu[num - k].location_num = 1;
        for(int j = num - k + 1; j < num; j++){
            if(stu[j].score == stu[j - 1].score){
                stu[j].local_rank = stu[j - 1].local_rank;
            }else{
                stu[j].local_rank = j + 1 - (num - k);
            }
        }
    }
    printf("%d\n", num);
    sort(stu, stu + num, cmp);
    int r = 1;
    for(int i = 0; i < num; i++){
        if(i > 0 && stu[i].score != stu[i - 1].score){
            r = i + 1;
        }
        printf("%s ", stu[i].id);
        printf("%d %d %d\n", r, stu[i].location_num, stu[i].local_rank);
    }
    return 0;
}

// 4.2 散列
// 4.2.1 散列的定义与整数散列

// 4.2.2 字符串hash初步


// 4.3 递归