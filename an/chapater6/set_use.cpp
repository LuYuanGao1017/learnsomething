/*
 * @Author: LynnGao
 * @Date: 2023-08-23 13:51:25
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-25 16:23:13
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

int main()
{
    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
        printf("%d ", *it);

    return 0;
}

// 3.set常用函数实例解析
// (1) insert() 自动递增排序并去重
// (2) find(value) 返回set中对应值为value的迭代器 O(logN) N为set内元素个数


// 4.set常见用途
// 自动去重并按升序排序
