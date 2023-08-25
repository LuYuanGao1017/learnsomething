/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:51:45
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 18:18:12
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

// int main()
// {
//     string str;
//     cin >> str;
//     // cout << str;
//     printf("%s\n", str);
//     // .c_str()转换为字符串数组 可以使用printf
//     printf("%s", str.c_str());
//     return 0;
// }

// (2) 迭代器访问

// 有些函数需要迭代器为参数

// string::iterator it;

// int main()
// {
//     string str = "abcd";
//     for (string::iterator it = str.begin(); it != str.end(); it++)
//         printf("%c", *it);
//     return 0;
// }

// 3.string 常用函数实例解析
// (1)operator+= 将两个string拼起来
int main()
{
    string str1 = "abcd", str2 = "xyz", str3;
    str3 = str1 + str2;
    str1 += str2;
    cout << str1 << endl;
    cout << str3 << endl;
    return 0;
}
// (2) compare operator 
// == != < <= > >= 字典序


// (3)
// (4)
// (5)
// (6)
// (7)
// (8)
// (9)
// (10)
//