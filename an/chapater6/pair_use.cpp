/*
 * @Author: LynnGao
 * @Date: 2023-08-27 10:20:27
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-27 11:56:51
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
#include <map>
using namespace std;

// pair<typeName1, typeName2> name;
// pair<string, int> p;
// 定义时初始化
// pair<string, int> p("haha", 5);

// 2.pair中元素的访问
#include <string>

// int main()
// {
//     pair<string, int> p;
//     p.first = "haha";
//     p.second = 5;
//     cout << p.first << " " << p.second << endl;
//     p = make_pair("xixi", 55);
//     cout << p.first << " " << p.second << endl;
//     p = pair<string, int>("heihei", 555);
//     cout << p.first << " " << p.second << endl;
//     return 0;
// }

// 3.pair常用函数实例解析
// 比较操作数
// 两个pair类型数据可以直接使用 == != < > <= >= 比较
// 先以first大小作为标准 只有当first相等时才去判别second的大小

// int main(){
//     pair<int, int> p1(5, 10);
//     pair<int, int> p2(5, 15);
//     pair<int, int> p3(10, 5);
//     if(p1 < p3) printf("p1 < p3\n");
//     if(p1 <= p3) printf("p1 <= p3\n");
//     if(p1 < p2) printf("p1 < p2\n");
//     return 0;
// }

// 4.pair常见用途
// (1)代替二元结构体及其构造函数 节省编码时间
// (2)作为map的键值对来进行插入

int main(){
    map<string, int> mp;
    mp.insert(make_pair("heihei", 5));
    mp.insert(pair<string, int>("haha", 10));
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;
    return 0;
}