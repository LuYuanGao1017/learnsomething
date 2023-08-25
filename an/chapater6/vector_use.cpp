/*
 * @Author: LynnGao
 * @Date: 2023-08-21 21:40:36
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 09:21:32
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

// int main(){
//     vector<int> vi;
//     for (int i = 1; i <= 5; i++)
//         vi.push_back(i);
//         // vector 迭代器不支持it < vi.end()
//     for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++)
//         printf("%d ", *it);
//     return 0;
// }

// 3. vector常用函数实例解析

// (1) push_back()
// 在vector后面添加一个元素x 时间复杂度O(1)

// int main()
// {
//     vector<int> vi;
//     for (int i = 1; i <= 3; i++)
//         vi.push_back(i);
//     for (int i = 0; i < vi.size(); i++)
//         printf("%d ", vi[i]);
//     return 0;
// }

// (2) pop_back()
// 删除vector的尾元素

// int main()
// {
//     vector<int> vi;
//     for (int i = 1; i <= 3; i++)
//         vi.push_back(i);
//     vi.pop_back();
//     for (int i = 0; i < vi.size(); i++)
//         printf("%d ", vi[i]);
//     return 0;
// }

// (3) size()
// vector中元素个数

// int main()
// {
//     vector<int> vi;
//     for (int i = 1; i <= 3; i++)
//         vi.push_back(i);
//     printf("%d\n", vi.size());
//     return 0;
// }

// (4) clear()
// 清空vector中所有元素

// int main()
// {
//     vector<int> vi;
//     for (int i = 1; i <= 3; i++)
//         vi.push_back(i);
//     vi.clear();
//     printf("%d\n", vi.size());
//     return 0;
// }

// (5) insert()
// 任意迭代器It处插入一个元素 O(N)

// int main()
// {
//     vector<int> vi;
//     for (int i = 1; i <= 5; i++)
//         vi.push_back(i);
//     vi.insert(vi.begin() + 2, -1);
//     for (int i = 0; i < vi.size(); i++)
//         printf("%d ", vi[i]);
//     return 0;
// }

// (6) erase()
// 删除单个元素 删除一个区间的所有元素 O(N)
int main()
{
    vector<int> vi;
    for (int i = 5; i <= 9; i++)
        vi.push_back(i); // 5 6 7 8 9
    // vi.begin()对应的是vi[0] 
    vi.erase(vi.begin() + 3);
    for (int i = 0; i < vi.size(); i++)
        printf("%d ", vi[i]); // 5 6 7 9
    return 0;
}

// 4.vector常见用途
// (1) 储存数据
// 本身可以作为数组使用 元素个数不确定的时候

// (2) 用邻接表存储图
