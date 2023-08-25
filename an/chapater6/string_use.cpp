/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:51:45
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 18:35:24
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

// int main()
// {
//     string str1 = "abcd", str2 = "xyz", str3;
//     str3 = str1 + str2;
//     str1 += str2;
//     cout << str1 << endl;
//     cout << str3 << endl;
//     return 0;
// }

// (2) compare operator
// == != < <= > >= 字典序

// int main()
// {
//     string str1 = "aa", str2 = "aaa", str3 = "abc", str4 = "xyz";
//     if(str1 < str2) printf("ok1\n");
//     if(str1 != str3) printf("ok2\n");
//     if(str4 >= str3) printf("ok3\n");
//     return 0;
// }

// (3) length()/size()
// 返回string的长度

// int main()
// {
//     string str = "abcxyz";
//     printf("%d %d\n", str.length(), str.size());
//     return 0;
// }

// (4) insert()
// string的insert函数有很多种写法
// <1 insert(pos, string) pos号位置插入字符串

// int main()
// {
//     string str = "abcxyz", str2 = "opq";
//     str.insert(3, str2);
//     cout << str << endl;
//     return 0;
// }

// <2 insert(it, it2, it3) [it2, it3)插入在it位置上

// int main()
// {
//     string str = "abcxyz", str2 = "opq";
//     str.insert(str.begin() + 3, str2.begin(), str2.end());
//     cout << str << endl;
//     return 0;
// }

// (5) erase()删除元素

// <1 单个元素
// int main()
// {
//     string str = "abcdefg";
//     str.erase(str.begin() + 4);
//     cout << str << endl;
//     return 0;
// }

// <2 区间元素

int main(){
    string str = "abcdefg";
    str.erase(str.begin() + 2, str.end() - 1);
    cout << str << endl;
    return 0;
}
// (6) clear()

// (7) substr()

// (8) string::npos

// (9) find()

// (10) replace()

// PAT A1060