/*
 * @Author: LynnGao
 * @Date: 2023-08-27 10:20:27
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-27 10:58:06
 * @Description:  绑定两个元素一起不想用struct时
 * pair 内部有两个元素的结构体 两个元素类型是可以指定的
 * @FilePath: \learnsomething\an\chapater6\pair_use.cpp
 */

// struct pair
// {
//     typename1 first;
//     typename2 second;
// };

// 1.pair的定义
// #include <utility>
// 添加过map时不需要加上面这个
// pair<typename1, typename2> name;

#include <iostream>
#include <utility>
using namespace std;

// pair<typeName1, typeName2> name;
// pair<string, int> p;
// 定义时初始化
// pair<string, int> p("haha", 5);

// 2.pair中元素的访问
#include <string>
int main()
{
    pair<string, int> p;
    p.first = "haha";
    p.second = 5;
    cout << p.first << " " << p.second << endl;
    p = make_pair("xixi", 55);
    cout << p.first << " " << p.second << endl;
    p = pair<string, int>("heihei", 555);
    cout << p.first << " " << p.second << endl;
    return 0;
}
// 3.pair常用函数实例解析