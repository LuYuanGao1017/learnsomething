/*
 * @Author: LynnGao
 * @Date: 2023-08-26 18:32:08
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-27 09:00:45
 * @Description: 栈 后进先出
 * @FilePath: \learnsomething\an\chapater6\stack_use.cpp
 */

// 1.stack的定义

// 2.stack容器内元素的访问

#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
        st.push(i);
    printf("%d\n", st.top());
    return 0;
}
