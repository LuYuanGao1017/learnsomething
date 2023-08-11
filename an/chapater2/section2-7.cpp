/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:47:54
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-11 20:30:38
 * @Description: 指针pointer
 * @FilePath: \learnsomething\an\chapater2\section2-7.cpp
 */

#include <stdio.h>
// 2.7.1 什么是指针
// 变量的地址
// int main(){
//     int a = 1;
//     printf("%d, %d\n", &a, a);
//     return 0;
// }

// 2.7.2 指针变量

// 指针变量用来存放指针

// int main(){
//     int a;
//     int *p = &a;
//     a = 233;
//     printf("%d\n", *p);
//     return 0;
// }

// int main(){
//     int a;
//     int *p = &a;
//     *p = 233;
//     printf("%d, %d\n", *p, a);
//     return 0;
// }

// 2.7.3 指针与数组

// 数组名 是 指针
// int main(){
//     int a[10] = {1};
//     int *p = a;
//     printf("%d\n", *p);
//     return 0;
// }

// 指针变量的加减法

// int main(){
//     int a[10];
//     for(int i = 0; i < 10; i++)
//         scanf("%d", a + i);
//     for(int i = 0; i < 10; i++)
//         printf("%d", *(a + i));
//     return 0;
// }

// 指针变量的自增

// int main(){
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for(int *p = a; p < a + 10; p++)
//         printf("%d ", *p);
//     return 0;
// }

// 指针的减法

int main(){
    int a[10] = {1, 4, 9, 16, 25, 36, 49};
    int *p = a;
    int *q = &a[5];
    printf("q = %d\n", q);
    printf("p = %d\n", p);
    printf("q - p = %d\n", q - p);
    return 0;
}

// 指针之间的距离 是 地址之间的差 / 基类型 Byte大小

// 2.7.4 使用指针变量作为函数参数

