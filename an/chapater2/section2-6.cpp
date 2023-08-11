/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:46:57
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-11 15:50:05
 * @Description: Function函数
 * @FilePath: \learnsomething\an\chapater2\section2-6.cpp
 */
// 2.6.1 函数的定义

/* 
返回类型 函数名称(参数类型 参数){
    函数主体
}
 */

// void 无返回 
#include <stdio.h>

// 无参数函数
// void print1()
// {
//     printf("Haha,\n");
//     printf("Good idea!\n");
// }

// void print2(){
//     printf("Ohno,\n");
//     printf("Bad idea!\n");
// }

// int main(){
//     print1();
//     print2();
//     return 0;
// }


// 有参数函数

// int judge(int x){
//     if (x > 0) return 1;
//     else if(x == 0) return 0;
//     else return -1;
// }

// int main(){
//     int a, ans;
//     scanf("%d", &a);
//     ans = judge(a);
//     printf("%d\n", ans);
//     return 0;
// }

// (1)全局变量

// int x;//定义x为全局变量

// void change(){
//     x = x + 1;
// }

// int main(){
//     x = 10;
//     change();
//     printf("%d\n", x);
//     return 0;
// }

// (2)局部变量

void change(int x){
    x = x + 1;
}

int main(){
    int x = 10;
    change(x);
    printf("%d\n", x);
    return 0;
}