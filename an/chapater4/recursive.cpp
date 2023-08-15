/*
 * @Author: LynnGao
 * @Date: 2023-08-15 09:51:39
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-15 14:45:47
 * @Description:
 * 递归 分治
 * @FilePath: \learnsomething\an\chapater4\recursive.cpp
 */

// 4.3.1 分治
// 4.3.2 递归

#include <stdio.h>

// 1.求n的阶乘
// int F(int n){
//     if(n == 0) return 1;
//     else return F(n - 1) * n;
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d\n", F(n));
//     return 0;
// }

// 2.求解Fibonacci数列第n项的程序
// int F(int n){
//     if(n == 0 || n == 1) return 1;
//     else return F(n - 1) + F(n - 2);
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d\n", F(n));
//     return 0;
// }

// 3.全排列

// 递归边界 下标由1变到 n + 1时就可以结束
// 递归式 
// 1~n这n个整数按某个顺序摆放的结果称为这n个整数的一个排序
const int maxn = 11;
// p为当前排列 hashTable记录整数x是否已经在P中
int n, P[maxn], hashTable[maxn] = {false};
// 当前处理排列的第index号位
void generateP(int index)
{   
    if (index == n + 1) // 递归边界 已经处理完排列的 1~n 位
    {
        for (int i = 1; i <= n; i++)
            printf("%d", P[i]); // 输出当前排列
        printf("\n");
        return;
    }
    for (int x = 1; x <= n; x++)
    {
        if (hashTable[x] == false)
        {
            P[index] = x;
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}

int main()
{
    n = 3;
    generateP(1);
    return 0;
}

// 4.n皇后问题