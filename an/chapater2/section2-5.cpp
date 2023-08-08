/*
 * @Author: LynnGao
 * @Date: 2023-08-08 10:04:16
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-08 11:34:51
 * @Description: 数组 page39-54
 * 数组:相同数据类型的变量组合在一起而产生的数据集合
 * @FilePath: \learnsomething\an\chapater2\section2-5.cpp
 */

// 2.5.1 一维数组 one-dimensional array
// page 39-41
// 数据类型 数组名[数组大小]
// 数组大小必须是整数常量不可以是变量

#include <stdio.h>

int main(){
    int a[10] = {5, 3, 2, 6, 8, 4};
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}