/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:52:13
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-26 15:54:37
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

// int main()
// {
//     map<char, int> mp;
//     mp['c'] = 20;
//     mp['c'] = 30; // 20会被覆盖
//     printf("%d\n", mp['c']);
//     return 0;
// }

// (2) 通过迭代器访问

// int main(){
//     map<char, int> mp;
//     mp['m'] = 20;
//     mp['r'] = 30;
//     mp['a'] = 40;
//     for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
//         printf("%c %d\n", it -> first, it -> second);

//     return 0;
// }

// 3. map常用函数实例解析
//(1) find(key) O(logN) N为map中映射的个数

// int main()
// {
//     map<char, int> mp;
//     mp['a'] = 1;
//     mp['b'] = 2;
//     mp['c'] = 3;
//     map<char, int>::iterator it = mp.find('b');
//     printf("%c %d\n", it->first, it->second);
//     return 0;
// }

// (2) erase()
// 单个删除两种方法
// <1 erase(it) it为要删除的元素的迭代器 O(1)

// int main()
// {
//     map<char, int> mp;
//     mp['a'] = 1;
//     mp['b'] = 2;
//     mp['c'] = 3;
//     map<char, int>::iterator it = mp.find('b');
//     mp.erase(it); // 删除b 2
//     for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
//         printf("%c %d\n", it->first, it->second);
//     return 0;
// }

// <2 erase(key)
// O(log N)

// int main()
// {
//     map<char, int> mp;
//     mp['a'] = 1;
//     mp['b'] = 2;
//     mp['c'] = 3;
//     mp.erase('b');
//     for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
//         printf("%c %d\n", it->first, it->second);
//     return 0;
// }

// 删除区间元素

// int main()
// {
//     map<char, int> mp;
//     mp['a'] = 1;
//     mp['b'] = 2;
//     mp['c'] = 3;
//     map<char, int>::iterator it = mp.find('b');
//     mp.erase(it, mp.end());
//     for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
//         printf("%c %d\n", it->first, it->second);
//     return 0;
// }

// (3) size()

// int main()
// {
//     map<char, int> mp;
//     mp['a'] = 10;
//     mp['b'] = 20;
//     mp['c'] = 30;
//     printf("%d\n", mp.size()); // 3对映射
//     return 0;
// }

// (4) clear()
// 清空所有元素

int main(){
    map<char, int> mp;
    mp['a'] = 1;
    mp['b'] = 2;
    printf("mp.size() = %d\n", mp.size());
    mp.clear();
    printf("After clear() \nmp.size() = %d\n", mp.size());
    return 0;
}


// 4. map常用途径

// 需要建立字符串和整数之间的映射的题目
// 判断大整数是否存在的题目
// 字符串和字符串映射也可能遇到