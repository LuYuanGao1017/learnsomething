/*
 * @Author: LynnGao
 * @Date: 2023-08-05 15:38:43
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-05 21:54:13
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
int main(){
    char str1[25] = "Wo ai de ren bu ai wo";
    char str2[25] = "so sad a story it is.";
    printf("%s, %s", str1, str2);
    return 0;
}