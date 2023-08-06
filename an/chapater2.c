/*
 * @Author: LynnGao
 * @Date: 2023-08-05 15:38:43
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-06 17:07:28
 * @Description: 
 * @FilePath: \learnsomething\an\chapater2.c
 */

#include <stdio.h>
// page 5 
// cin count可以不指定输入输出格式
// 但消耗的时间比scanf和printf多得多

// int main(){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d", a+b);
//     return 0;
// }

// page 8
// 整型 int 

// int main(){
//     int a = 1, b = 2;
//     printf("%d", a + b);
//     return 0;
// }

// page 9
// 浮点型 double


// int main(){
//     double a = 3.14, b = 0.12;
//     double c = a + b;
//     printf("%f", c);
//     return 0;
// }

// page 9
// 字符型 char

// int main(){
//     char c1 = 'z', c2 = 'j', c3 = 117;
//     printf("%c%c%c", c1, c2, c3);
//     return 0;
// }

// page 10
//  转义字符\n 控制字符不可显示

/* int main(){
    int num1 = 1, num2 = 2;
    printf("%d\n\n%d", num1, num2);
    printf("%c", 7);
    return 0;
} */

// page 10-11
// 字符串常量可以作为初值赋给字符数组 但不可以给字符变量 char c = "abcd"是错误的
/* int main(){
    char str1[25] = "Wo ai de ren bu ai wo";
    char str2[25] = "so sad a story it is.";
    printf("%s, %s", str1, str2);
    return 0;
} */

// page 11
// 布尔型 c++可以直接使用 c必须添加stdbool.h
// 整型常量在赋值给布尔型变量时会自动转换为true或者false

// #include <stdbool.h>

// int main(){
//     bool flag1 = 0, flag2 = true;
//     int a = 1, b = 1;
//     printf("flag1 = %d flag2 = %d a==b %d\n", flag1, flag2, a==b);
//     return 0;
// }

// page 12
// 强制类型转换 格式为 (新类型名) 变量名

// int main(){
//     double r = 12.56;
//     int a = 3, b = 5;
//     printf("int r = %d\n", (int)r);
//     printf("a/b = %d\n", a / b);
//     printf("double a/b = %.1f", (double)a / (double)b);
//     return 0;
// }

// page 12
// 符号常量 “替换” 用一个标识符来代替常量 又称为“宏定义”或者“宏替换”
// #define 标识符 常量
// #define pi 3.14
// const 定义法 const 数据类型 变量名 = 常量;
// 推荐const写法
// const double pi = 3.14;

// int main(){
//     double r = 3;
//     // printf("pi * r^2 = %.2f\n", pi * r * r);
//     printf("2 * pi * r = %.2f\n", 2 * pi * r );
//     return 0;
// }

// page 13
// define除了可以定义常量歪 还可以定义任何语句或片段

// # define ADD(a, b) ((a) + (b))
// int main(){
//     int num1 = 3, num2 = 5;
//     printf("%d + %d = %d", num1, num2, ADD(num1, num2));
//     return 0;
// }

// 宏定义是直接将对应的部分替换，才进行编译和运行
// #define CAL(x) (x * 2 + 1)

// int main(){
//     int a = 1;
//     printf("%d \n", CAL(a + 1));
//     // CAL(a + 1)  (a + 1 * 2 + 1)=4
//     return 0;
// }

// page 14 2.1.5 operator运算符
// 1. arithmetic operator 算术运算符
//  + - * 

// int main(){
//     int a = 3, b = 4;
//     double c = 1.23, d = 0.24;
//     printf(" %d + %d = %d\t %d - %d = %d\n", a, b, a + b, a, b, a - b);
//     printf(" %f * %f = %f\n", c, d, c * d);
//     return 0;
// }

//  除法 /

// int main(){
//     int a = 5, b = 4, c = 5, d = 6;
//     printf("%d / %d = %d\t %d / %d = %d\t %d / %d = %d\n", a, b, a / b, a, c, a / c, a, d, a / d);
//     return 0;
// }

