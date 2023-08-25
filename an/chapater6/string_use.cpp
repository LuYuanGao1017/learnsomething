/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:51:45
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 22:28:24
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

// <2 区间元素 两种方法

// erase(first, last)
// int main(){
//     string str = "abcdefg";
//     str.erase(str.begin() + 2, str.end() - 1);
//     cout << str << endl;
//     return 0;
// }

// erase(pos, length)
// int main(){
//     string str = "abcdefg";
//     str.erase(3, 2);
//     cout << str << endl;
//     return 0;
// }

// (6) clear() 清空string中的数据 O(1)

// int main(){
//     string str = "abcd";
//     printf("str length %d\n", str.length());
//     str.clear();
//     printf("After str.clear()\nstr Length %d\n", str.length());
//     return 0;
// }

// (7) substr()

// substr(pos, len) 返回从pos号开始长度为len的子串 O(len)

// int main()
// {
//     string str = "Thank you for your simle.";
//     cout << str.substr(0, 5) << endl;
//     cout << str.substr(14, 4) << endl;
//     cout << str.substr(19, 5) << endl;
//     return 0;
// }

// (8) string::npos
// 一个常数 本身的值为-1 unsigned_int类型
// find函数失配时的返回值
// int main()
// {
//     if (string::npos == -1)
//     {
//         cout << "-1 is true." << endl;
//     }
//     if (string::npos == 4294967295)
//     {
//         cout << "4294967295 is also true." << endl;
//     }
//     return 0;
// }

// (9) find()
// str.find(str2) str2是str子串时 返回第一次出现的位置
// str.find(str2, pos) 从str的pos号位开始匹配str2

// int main()
// {
//     string str = "Thank you for your smile.";
//     string str2 = "you";
//     string str3 = "me";
//     if (str.find(str2) != string::npos)
//     {
//         cout << str.find(str2) << endl;
//     }
//     if (str.find(str2, 7) != string::npos)
//     {
//         cout << str.find(str2, 7) << endl;
//     }
//     if (str.find(str3) != string::npos)
//     {
//         cout << str.find(str3) << endl;
//     }
//     else
//     {
//         cout << "I knoe there is no position for me." << endl;
//     }

//     return 0;
// }

// (10) replace()
// int main()
// {
//     string str = "Maybe you will turn around.";
//     string str2 = "will not";
//     string str3 = "surely";
//     // str.replace(pos, len, str2) 把str 从pos号开始、长度为len的子串替换成str2
//     cout << str.replace(10, 4, str2) << endl;
//     // str.replace(it1, it2, str2) 把str的迭代器[it1, it2)范围的子串替换为str2
//     cout << str.replace(str.begin(), str.begin() + 5, str3) << endl;
//     return 0;
// }

// PAT A1060

int n;
string deal(string s, int &e)
{
    int k = 0; // s下标
    while (s.length() > 0 && s[0] == '0')
    {
        s.erase(s.begin());
    }
    if (s[0] == '.') // 小数
    {
        s.erase(s.begin());
        while (s.length() > 0 && s[0] == '0')
        {
            s.erase(s.begin());
            e--;
        }
    }
    else
    { // 整数
        while (k < s.length() && s[k] != '.')
        {
            k++;
            e++;
        }
        if (k < s.length())
        {
            s.erase(s.begin() + k); // 删除小数点
        }
    }
    if (s.length() == 0)
    {
        e = 0;
    }
    int num = 0;
    k = 0;
    string res;
    while (num < n)
    {
        if (k < s.length())
            res += s[k++];
        else
            res += '0';
        num++;
    }
    return res;
}

int main()
{
    string s1, s2, s3, s4;
    cin >> n >> s1 >> s2;
    int e1 = 0, e2 = 0;
    s3 = deal(s1, e1);
    s4 = deal(s2, e2);
    if (s3 == s4 && e1 == e2)
    {
        cout << "YES 0." << s3 << "*10^" << e1 << endl;
    }
    else
    {
        cout << "NO 0." << s3 << "*10^" << e1 << " 0." << s4 << "*10^" << e2 << endl;
    }
    return 0;
}