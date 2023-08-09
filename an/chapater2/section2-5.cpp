/*
 * @Author: LynnGao
 * @Date: 2023-08-08 10:04:16
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-09 11:26:02
 * @Description: 数组 page39-54
 * 数组:相同数据类型的变量组合在一起而产生的数据集合
 * @FilePath: \learnsomething\an\chapater2\section2-5.cpp
 */

// 2.5.1 一维数组 one-dimensional array
// page 39-41
// 数据类型 数组名[数组大小]
// 数组大小必须是整数常量不可以是变量

#include <stdio.h>

// int main(){
//     int a[10] = {5, 3, 2, 6, 8, 4};
//     for(int i = 0; i < 10; i++){
//         printf("a[%d] = %d\n", i, a[i]);
//     }
//     return 0;
// }

// int main(){
//     int a[10];
//     scanf("%d", &a[0]);
//     for(int i = 1; i < 10; i++){
//         a[i] = a[i - 1] * 2;
//     }
//     for(int i = 0; i < 10; i++){
//         printf("a[%d] = %d\n", i, a[i]);
//     }
//     return 0;
// }

// 2.5.2 冒泡排序 page 41-43

// 1. 交换两个数

// int main(){
//     int a = 1, b = 2;
//     printf("a = %d\t b = %d\n", a, b);
//     printf("After exchange!\n");
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d\t b = %d\n", a, b);
//     return 0;
// }

// 2.冒泡排序
// page 43

// int main(){
//     int a[10] = {3, 1, 4, 5, 2};
//         for(int i = 0; i < 5; i++){
//         printf("a[%d] = %d\t", i, a[i]);
//     }
//     printf("\nAfter bubble\n");
//     for(int i = 1; i <=4; i++){
//         for(int j = 0; j < 5 - i; j++){
//             if(a[j] > a[j + 1]){
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     for(int i = 0; i < 5; i++){
//         printf("a[%d] = %d\t", i, a[i]);
//     }
//     return 0;
// }

// 2.5.3 二维数组 page 43-46

// int main(){
//     int a[5][6] = {{3, 1, 2}, {8, 4}, {}, {1, 2, 3, 4, 5}};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int a[3][3], b[3][3];
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }

//     int c[3][3];

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }
    
//     for(int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*   
如果数组大小较大(大概10^6级别) 
则需要将其定义在主函数外面 
否则会使程序异常退出
函数内部申请的局部变量来自系统栈 允许申请的空间较小

*/

// int a[1000000];

// int main(){
//     for(int i = 0; i < 1000000; i++){
//         a[i] = i;
//     }    
//     return 0;
// }

// 2.5.4 memset 
// page 46-47
// 对数组中每一个元素赋相同值
// 还有fill函数 后续在STL中说
// 使用memset需添加string.h头文件
// memset按字节赋值 对每个字节赋相同值

// #include <string.h>

// int main(){
//     int a[5] = {1, 2, 3, 4, 5};
//     printf("Original:\n");
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("Memset 0:\n");
//     // 赋初值0
//     memset(a, 0, sizeof(a));
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("Memset -1:\n");
//     // 赋初值-1
//     memset(a, -1, sizeof(a));
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("Memset 1:\n");
//     // 赋初值1
//     memset(a, 1, sizeof(a));
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

/* Original:
1       2       3       4       5
Memset 0:
0       0       0       0       0
Memset -1:
-1      -1      -1      -1      -1
Memset 1:
16843009        16843009        16843009        16843009        16843009 */

// 2.5.5 字符数组
// 1.字符数组初始化

// int main(){
//     char str[15] = {'G', 'o', 'o', 'd', ' ', 's', 't', 'o', 'r', 'y', '!'};
//     for(int i = 0; i < 11; i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// } 

// 字符数组可以通过直接赋值字符串来初始化 
// 仅限于初始化 其他位置不允许直接赋值整个字符串

// int main(){

//     char str[15] = "Good Story!";
//     for(int i = 0; i < 11; i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// 2.字符数组的输入输出

// (1)scanf输入和printf输出
// int main(){
//     char str[10];
//     scanf("%s", str);
//     printf("%s", str);
//     return 0;
// }

/* 
Input: TAT TAT TAT
Output: TAT 
%s识别空格作为字符串的结尾后两个TAT不被读入
*/

// (2)getchar输入和putchar输出

// (3)gets输入和puts输出