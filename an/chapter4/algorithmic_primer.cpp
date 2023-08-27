/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-15 09:44:07
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
// struct testee
// {
//     char id[15];
//     int score;
//     int location_num;
//     int local_rank;
// } stu[300];

// bool cmp(testee a, testee b)
// {
//     if (a.score != b.score)
//         return a.score > b.score;
//     else
//         return strcmp(a.id, b.id) < 0;
// }

// int main()
// {
//     int n, k, num = 0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &k);
//         for (int j = 0; j < k; j++)
//         {
//             scanf("%s %d", stu[num].id, &stu[num].score);
//             stu[num].location_num = i;
//             num++;
//         }
//         sort(stu + num - k, stu + num, cmp);
//         stu[num - k].location_num = 1;
//         for(int j = num - k + 1; j < num; j++){
//             if(stu[j].score == stu[j - 1].score){
//                 stu[j].local_rank = stu[j - 1].local_rank;
//             }else{
//                 stu[j].local_rank = j + 1 - (num - k);
//             }
//         }
//     }
//     printf("%d\n", num);
//     sort(stu, stu + num, cmp);
//     int r = 1;
//     for(int i = 0; i < num; i++){
//         if(i > 0 && stu[i].score != stu[i - 1].score){
//             r = i + 1;
//         }
//         printf("%s ", stu[i].id);
//         printf("%d %d %d\n", r, stu[i].location_num, stu[i].local_rank);
//     }
//     return 0;
// }

// 4.2 散列

// 1.M个整数是否在N个整数中出现
// const int maxn = 100010;
// bool hashTable[maxn] = {false};
// int main(){
//     int n, m, x;
//     scanf("%d%d", &n, &m);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &x);
//         hashTable[x] = true;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &x);
//         // if (hashTable[x] == true) printf("Yes\n");
//         if (hashTable[x]) printf("Yes\n");
//         else printf("No\n");
//     }
//     return 0;
// }

// 2.M个整数在N个整数中出现次数
// const int maxn = 10010;
// int hashTable[maxn] = {0};

// int main()
// {
//     int n, m, x;
//     scanf("%d%d", &n, &m);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &x);
//         hashTable[x]++;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &x);
//         printf("%d ", hashTable[x]);
//     }

//     return 0;
// }

// 上面两个直接把输入的数作为下标
// 以空间换时间的方法 且每个数不超过10^5

// 如果输入是10^9就不行了 字符串 也不能直接当下标
// 散列能把这些转换为一个能接受范围内的整数

// 4.2.1 散列的定义与整数散列
//  散列函数

// 4.2.2 字符串hash初步

// // 假设字符串由A~Z组成 0~25 26^len - 1最大的整数 len为字符串长度
// int hashFunc(char s[], int len)
// {
//     int id = 0;
//     for (int i = 0; i < len; i++)
//         id = id * 26 + (s[i] - 'A'); // 将26进制转换为十进制
//     return id;
// }
// // 如果字符串s长度比较长那么换成整数也会很大

// int hashFunc(char s[], int len)
// {
//     int id = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//             id = id * 52 + (s[i] - 'A');
//         }
//         else if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             id = id * 52 + (s[i] - 'a') + 26;
//         }
//     }
//     return id;
// }

// 给出N个字符串 再给出M个查询字符串 问每个查询字符串在N个字符串出现的次数

const int maxn = 100;
char s[maxn][5], temp[5];
int hashTable[26 * 26 * 26 + 10]; // 定义合适大小的数组

int hashFunc(char s[], int len)
{
    int id = 0;
    for (int i = 0; i < len; i++)
    {
        id = id * 26 + (s[i] - 'A');
    }
    return id;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        int id = hashFunc(s[i], 3);
        hashTable[id]++;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%s", temp);
        int id = hashFunc(temp, 3);
        printf("%d\n", hashTable[id]);
    }
    return 0;
}