/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:51:25
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 16:41:46
 * @Description:
 * set集合
 * 内部自动有序 不含重复元素的容器
 * 去掉重复元素的情况比较大或者类型不是Int型而不能直接开散列表
 * @FilePath: \learnsomething\an\chapater6\set_use.cpp
 */

#include <stdio.h>
#include <set>
using namespace std;

// 1.定义set
// set<typename> name;

// 2.set容器内元素的访问
// 只能通过迭代器访问
// ste<typename>::iterator it;

// int main()
// {
//     set<int> st;
//     st.insert(3);
//     st.insert(5);
//     st.insert(2);
//     st.insert(3);
//     for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//         printf("%d ", *it);

//     return 0;
// }

// 3.set常用函数实例解析
// (1) insert() 自动递增排序并去重
// (2) find(value) 返回set中对应值为value的迭代器 O(logN) N为set内元素个数

// int main()
// {
//     set<int> st;
//     for (int i = 1; i <= 3; i++)
//         st.insert(i);
//     set<int>::iterator it = st.find(2);
//     printf("%d\n", *it);
//     // printf("%d\n", *(st.find(2)));
//     return 0;
// }

// (3) erase() 删除单个元素 一个区间内所有元素
// <1 删除单个元素有两种方法

// 结合find()使用

// int main()
// {
//     set<int> st;
//     st.insert(100);
//     st.insert(200);
//     st.insert(100);
//     st.insert(300);
//     st.erase(st.find(100));
//     st.erase(st.find(200));
//     for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//         printf("%d\n", *it);
//     return 0;
// }

// erase(value)

int main()
{
    set<int> st;
    st.insert(100);
    st.insert(200);
    st.erase(100);
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
        printf("%d\n", *it);
    return 0;
}
// <2 删除一个区间内的所有元素
// (4) size()

// (5) clear() O(N)

// 4.set常见用途
// 自动去重并按升序排序
