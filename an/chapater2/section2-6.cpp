/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:46:57
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-11 16:30:27
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

// void change(int x){
//     x = x + 1;
// }

// int main(){
//     int x = 10;
//     change(x);
//     printf("%d\n", x);
//     return 0;
// }


// 函数参数可以不止一个

// int MAX(int a, int b, int c){
//     int M;
//     if(a >= b && a >= c) M = a;
//     else if(b >= a && b >= c) M = b;
//     else M = c;
//     return M;
// }


// int main(){
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     printf("%d\n", MAX(a, b, c));
//     return 0;
// }

// 2.6.2 main函数

// 2.6.3 以数组作为函数参数

void change(int a[], int b[][5]){
    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    b[0][0] = 1;
}

int main(){
    int a[3] = {0};
    int b[5][5] = {0};
    change(a, b);
    for (int i = 0; i < 3; i++)
        printf("%d\n", a[i]);
    return 0;
}

// 2.6.4 函数的嵌套调用

// 2.6.5 函数的递归调用

