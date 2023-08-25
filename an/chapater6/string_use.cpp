/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:51:45
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 18:11:53
 * @Description:
 * @FilePath: \learnsomething\an\chapater6\string_use.cpp
 */

// 1.string 定义
// string str
// string str = "abc"

#include <stdio.h>
#include <string>
using namespace std;
// 2.string 中内容的访问
// (1) 下标访问

// int main()
// {
//     string str = "abcd";
//     for (int i = 0; i < str.length(); i++)
//         printf("%c ", str[i]);
//     return 0;
// }

// 如果要读入和读出整个字符串 
// 只能用 cin cout

#include <iostream>

int main()
{
    string str;
    cin >> str;
    // cout << str;
    printf("%s\n", str);
    // .c_str()转换为字符串数组 可以使用printf
    printf("%s", str.c_str());
    return 0;
}

// (2) 迭代器访问

// 3.string 常用函数实例解析

//