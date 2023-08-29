/*
 * @Author: LynnGao
 * @Date: 2023-08-12 14:13:03
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-12 16:02:28
 * @Description: Struct
 * @FilePath: \learnsomething\an\chapater2\section2-8.cpp
 */

// 2.8.1 结构体的定义

/*
struct Name
{
    // 一些基本的数据结构或者自定义的数据类型
};
 */

/*
struct studentInfo {// studentInfo 结构体类型名
    int id; // 学号
    char gender; // "F" or "M"
    char name[20];
    char major[20];
}Alice, Bob, stu[1000];// Alice和Bob两个结构体变量 结构体数组 stu[100]

// 结构体里面能定义除了自身之外的任何数据类型 不过虽然不能定义自己本身 但可以定义自身类型的指针变量
*/

// 2.8.2 访问结构体内的元素
// . 和 -> 操作

// struct studentInfo
// {
//     int id;
//     char name[20];
//     studentInfo* next;
// }stu, *p;

// stu.id
// (*p).id

// 2.8.3 结构体初始化

// 当结构体内变量很多时 使用构造函数 来进行初始化
// 构造函数不需要返回类型 且函数名与结构体名相同

// 普通定义的结构体 内部默认生成一个构造函数(但不可见)

// struct stuInf
// {
//     int id;
//     char gender;
//     stuInf(){}
// };

// // 手动提供id和gender的初始化参数

// struct stuInf
// {
//     int id;
//     char gender;
//     stuInf(int _id, char _gender){
//         id = _id;
//         gender = _gender;
//     }
//     // 构造函数也可简化成一行
//     stuInf(int _id, char _gender): id(_id), gender(_gender) {}
// };

// // 赋值
// stuInf stu = stuInf(10086, 'M');

// 如果重新定义了构造函数 那么必须经过初始化来定义结构体变量

// 为了 有时候可以不初始化 有时候又需要初始化 可以把 默认的构造函数加上

// struct stuInf
// {
//     int id;
//     char gender;
//     // 用以不初始化就定义结构体变量
//     stuInf() {}
//     // 只初始化gender
//     stuInf(char _gender) : gender(_gender) {}
//     // 同时初始化id和gender
//     stuInf(int _id, char _gender) : id(_id), gender(_gender) {}
// };

#include <stdio.h>
struct Point
{
    int x, y;
    Point() {}
    Point(int _x, int _y) : x(_x), y(_y) {}
} pt[10];

int main()
{
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            pt[num++] = Point(i, j);
        }
    }
    printf("num = %d\n", num);
    for (int i = 0; i < num; i++)
        printf("x = %d, y = %d\n", pt[i].x, pt[i].y);

    return 0;
}