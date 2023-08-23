/*
 * @Author: LynnGao
 * @Date: 2023-08-21 21:40:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-23 14:26:54
 * @Description: 变长数组 以邻接表的方式存储图
 * @FilePath: \learnsomething\an\chapater6\vector_use.cpp
 */

// 1. 定义

// vector<typename> name;

// 两个不同的数组区别

// vector<vector<int> > name;
// vector<typename> arrayname[arraysize];

// 2.vector容器内元素的访问

//(1) 通过下标访问
// vector<typename> vi vi[index]
//(2) 通过迭代器访问
// vector<typename>::iterator it;
#include <stdio.h>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> vi;
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("%d", i);
//         vi.push_back(i);
//     }
//     for (int i = 0; i < vi.size(); i++)
//         printf("%d ", vi[i]);
//     return 0;
// }

// 得不到输出不知道为啥

int main(){
    vector<int> vi;
    for (int i = 1; i <= 5; i++)
        vi.push_back(i);
        // vector 迭代器不支持it < vi.end()
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++)
        printf("%d ", *it);
    return 0;
}
