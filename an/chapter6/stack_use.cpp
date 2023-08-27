/*
 * @Author: LynnGao
 * @Date: 2023-08-26 18:32:08
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-27 09:30:01
 * @Description: 栈 后进先出
 * @FilePath: \learnsomething\an\chapater6\stack_use.cpp
 */

// 1.stack的定义

// 2.stack容器内元素的访问

#include <stdio.h>
#include <stack>
using namespace std;
// int main()
// {
//     stack<int> st;
//     for (int i = 1; i <= 5; i++)
//         st.push(i);
//     printf("%d\n", st.top());
//     return 0;
// }

// 3. stack常用函数实例
// (1) push()
// (2) top()
// (3) pop()

// int main()
// {
//     stack<int> st;
//     for (int i = 1; i <= 5; i++)
//         st.push(i);
//     for (int i = 1; i <= 3; i++)
//         st.pop();
//     printf("%d\n", st.top());
//     return 0;
// }

// (4) empty()

// int main()
// {
//     stack<int> st;
//     if (st.empty())
//         printf("Stack is Empty.\n");
//     else
//         printf("Stack not Empty.\n");
//     printf("After push 1.\n");
//     st.push(1);
//     if (st.empty())
//         printf("Stack is Empty.\n");
//     else
//         printf("Stack not Empty.\n");
//     return 0;
// }

// (5) size()

int main(){
    stack<int> st;
    for (int i = 1; i <= 5; i++)
        st.push(i);
    printf("%d\n", st.size());
    return 0;
}

// 4.stack常见用途
// 栈内存较小 模拟递归实现