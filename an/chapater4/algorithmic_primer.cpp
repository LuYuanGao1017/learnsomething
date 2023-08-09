/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:49:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-09 15:17:15
 * @Description: 基础代码
 * @FilePath: \learnsomething\an\chapater4\algorithmic_primer.cpp
 */
#include<stdio.h>
// 3.1 简单模拟

// PAT B1001 

int main(){
    int n, count = 0;
    scanf("%d", &n);
    // 判断偶数还是奇数
    while(n != 1){
        count++;
        if(n % 2 == 0)  n = n / 2;
        else n = (3 * n + 1) / 2;
    }
    printf("%d", count);
    return 0;
}