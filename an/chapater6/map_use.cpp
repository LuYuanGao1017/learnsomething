/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:52:13
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-26 13:50:06
 * @Description:
 * 映射
 * 数组 array[0] = 25 array[4] = 36 分别将0和4映射到25和36上
 * map 将任何基本类型 映射到任何基本类型上
 * @FilePath: \learnsomething\an\chapater6\map_use.cpp
 */

// 1. map定义
// map<typename1, typename2> mp;
// 必须先确定两种类型 key value

// 2. map容器内元素访问

// (1) 通过下标访问
// map 中键是唯一的

#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    map<char, int> mp;
    mp['c'] = 20;
    mp['c'] = 30; // 20会被覆盖
    printf("%d\n", mp['c']);
    return 0;
}

// (2) 通过迭代器访问

// 3. map常用函数实例解析

// 4. map常用途径