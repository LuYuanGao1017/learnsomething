/*
 * @Author: LynnGao
 * @Date: 2023-08-09 11:47:54
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-12 14:04:42
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

// int main(){
//     int a[10] = {1, 4, 9, 16, 25, 36, 49};
//     int *p = a;
//     int *q = &a[5];
//     printf("q = %d\n", q);
//     printf("p = %d\n", p);
//     printf("q - p = %d\n", q - p);
//     return 0;
// }

// 指针之间的距离 是 地址之间的差 / 基类型 Byte大小

// 2.7.4 使用指针变量作为函数参数

// void change(int *p){
//     *p = 233;
// }

// int main(){
//     int a = 1;
//     int *p = &a;
//     change(p);
//     printf("%d\n", a);
//     return 0;
// }

// int main()
// {
//     int a = 1, b = 2;
//     printf("Before change:\na = %d, b = %d\n", a, b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("After change:\na = %d, b = %d", a, b);
//     return 0;
// }

// 把交换写成函数

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int a = 1, b = 2;
//     printf("Before swap:\na = %d, b = %d\n", a, b);
//     swap(&a, &b);
//     printf("After swap:\n a = %d, b = %d", a, b);
// }

// 2.7.5 引用
// C++　不使用指针　也能修改传入参数
// 引用不产生副本　给原变量起了个别名
// 对引用变量的操作就是对原变量的操作

// 1.引用的含义

// void change(int &x){
//     x = 1;
// }

// int main(){
//     int x = 10;
//     printf("Before change:\n x = %d\n", x);
//     change(x);
//     printf("After change:\n x = %d", x);
//     return 0;
// }

// 不管是否使用引用 函数的参数名和实际传入的参数名可以不同
// 把引用的&和取地址运算符&区分开来

// void change(int &x){
//     x = 1;
// }

// int main(){
//     int a = 10;
//     printf("Before change:\na = %d\n", a);
//     change(a);
//     printf("After change:\na = %d", a);
//     return 0;
// }

// 2.指针的引用

void swap(int * &p1, int * &p2){
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(){
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &b;
    printf("Before swap:\na = %d, b = %d\n", *p1, *p2);
    swap(p1, p2);
    printf("After swap:\na = %d, b = %d", *p1, *p2);
    return 0;
}