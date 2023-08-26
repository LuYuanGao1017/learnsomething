/*
 * @Author: LynnGao
 * @Date: 2023-08-26 16:55:01
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-26 18:24:36
 * @Description:
 * 优先队列 底层是用堆实现 队首元素一定是当前队列中优先级最高的那一个
 * @FilePath: \learnsomething\an\chapater6\priority_queue_use.cpp
 */
// 1.priority_queue的定义
// priority_queue<typename> name;
// 2.priority_queue 容器内元素的访问
// 优先队列没有front()和back()函数
#include <stdio.h>
#include <queue>
using namespace std;

// int main(){
//     priority_queue<int> q;
//     q.push(3);
//     q.push(4);
//     q.push(1);
//     // 只能通过top()访问队首元素
//     printf("%d\n", q.top());
//     return 0;
// }

// 3.priority常用函数实例

// (1) push(x) O(logN)
// (2) top()
// (3) pop()

// int main(){
//     priority_queue<int> q;
//     q.push(3);
//     q.push(4);
//     q.push(1);
//     printf("%d\n", q.top());
//     q.pop();
//     printf("%d\n", q.top());
//     return 0;
// }

// (4) empty()

// int main()
// {
//     priority_queue<int> q;
//     if (q.empty() == true)
//         printf("Priority Queue Empty.\n");
//     else
//         printf("Priority Queue Not Empty.\n");
//     printf("After push(1)\n");
//     q.push(1);
//     if (q.empty() == true)
//         printf("Priority Queue Empty.\n");
//     else
//         printf("Priority Queue Not Empty.\n");
//     return 0;
// }

// (5) size()

// int main()
// {
//     priority_queue<int> q;
//     q.push(3);
//     q.push(4);
//     q.push(1);
//     printf("%d\n", q.size());
//     return 0;
// }

// 4.priority_queue 内元素优先级的设置

// (1) 基本数据类型的优先级设置

// priority_queue<int> q;
// priority_queue<int, vector<int>, less<int> > q;
// 两种定义等价
// less表示数字大优先级大 greater 表示数字小的优先级小

// int main()
// {
//     priority_queue<int, vector<int>, greater<int>> q;
//     q.push(3);
//     q.push(4);
//     q.push(1);
//     printf("%d\n", q.top());
//     return 0;
// }

// (2) 结构体优先级设置

#include <string>
#include <iostream>
struct fruit
{
    string name;
    int price;
    // friend 友元 对fruit类型的操作符 < 进行重载
    friend bool operator<(fruit f1, fruit f2)
    {
        // 价格越高优先级越高
        // return f1.price < f2.price;
        // 价格越低优先级越低
        return f1.price > f2.price;
    }
} f1, f2, f3;

int main()
{
    priority_queue<fruit> q;
    f1.name = "Peach";
    f1.price = 3;
    f2.name = "Pears";
    f2.price = 4;
    f3.name = "Apple";
    f3.price = 1;
    q.push(f1);
    q.push(f2);
    q.push(f3);
    cout << q.top().name << " " << q.top().price << endl;
    return 0;
}