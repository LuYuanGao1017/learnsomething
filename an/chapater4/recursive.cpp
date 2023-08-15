/*
 * @Author: LynnGao
 * @Date: 2023-08-15 09:51:39
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-15 10:32:13
 * @Description: 
 * 递归 分治 
 * @FilePath: \learnsomething\an\chapater4\recursive.cpp
 */

// 4.3.1 分治
// 4.3.2 递归

#include <stdio.h>

int F(int n){
    if(n == 0) return 1;
    else return F(n - 1) * n;
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", F(n));
    return 0;
}