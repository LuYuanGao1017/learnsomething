/*
 * @Author: LynnGao
 * @Date: 2023-08-08 10:04:16
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-08 15:47:14
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

int main(){
    int a[3][3], b[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    int c[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}