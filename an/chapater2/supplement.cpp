/*
 * @Author: LynnGao
 * @Date: 2023-08-12 16:04:59
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-13 14:44:37
 * @Description: C++中的cin cout 浮点数比较 复杂度
 * @FilePath: \learnsomething\an\chapater2\supplement.cpp
 */

// 2.9.1 cin与cout

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     double db;
//     char c;
//     char str[10];
//     cin >> n;
//     cin >> n >> db >> c >> str;
//     cout << n << db << c << str;
//     cout << n;
//     return 0;
// }

// c in out 结合
// 不需要像scanf 和printf那样指定输入和输出格式 也不需要使用&取地址运算符

// 2.9.2 浮点数的比较

// 计算机采用有限位的二进制编码 浮点数在计算机中的存储并不总是精确的

// 1.等于运算符 ==

#include <stdio.h>
#include <math.h>

// const double eps = 1e-8;
// #define Equ(a, b) ((fabs((a) - (b))) < (eps))

// int main(){
//     double db = 1.23;
//     if (Equ(db, 1.23))

//     {
//         printf("true");
//     }else{
//         printf("false");
//     }
//     return 0;
// }


int main(){
    double db1 = 4 * asin(sqrt(2.0) / 2);
    double db2 = 3 * asin(sqrt(3.0) / 2);
    if(db1 == db2) printf("true");
    else printf("false");
    return 0;
}

// 误差处理

// 2.大于运算符