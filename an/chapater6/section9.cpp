/*
 * @Author: LynnGao
 * @Date: 2023-08-10 15:32:02
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-10 21:13:29
 * @Description: Common functions under the algorithm header file
 * @FilePath: \learnsomething\an\chapater6\section9.cpp
 */
#include <stdio.h>
// 6. sort() function

// 根据具体情形使用不同的排序方法，效率较高。

// (1)如何使用sort()
// 头文件 algorithm using namespace std;
// sort(首元素地址(必须), 尾元素地址的下一个地址(必须), 比较函数(非必须))
#include <algorithm>

using namespace std;

// int 数组大小排序
// int main()
// {
//     int a[6] = {9, 4, 2, 5, 6, -1};
//     printf("Original Array:\n");
//     for (int i = 0; i < 6; i++)
//         printf("%d", a[i]);
//     printf("\n");
//     printf("Sort 4 elements:\n");
//     sort(a, a + 4);
//     for (int i = 0; i < 6; i++)
//         printf("%d", a[i]);
//     printf("\n");
//     printf("Sort all elements:\n");
//     sort(a, a + 6);
//     for(int i = 0; i < 6; i++)
//         printf("%d", a[i]);
//     printf("\n");
//     return 0;
// }

// (2) 如何实现比较函数cmp
// 对序列进行排序
// 那么序列中的元素一定要有可比性
// 需要制定排序规则来建立可比性
// 特别是 结构体 本身没有大小关系 需人为订制比较的规则

// (2.1) 基本数据类型数组的排序
// 不填写比较函数时默认从小到大排序
// int main(){
//     int a[5] = {3, 1, 4, 2};
//     sort(a, a + 4);
//     for (int i = 0; i < 4; i++)
//         printf("%d", a[i]);
//     return 0;
// }

// 如果要从大到小 则使用比较函数cmp 告诉 sort何时交换元素

// bool cmp(int a, int b){
//     return a > b; // 可看做a>b时a放到b前面
// }

// int main(){
//     int a[5] = {3, 1, 4, 2};
//     sort(a, a + 4, cmp);
//     for (int i = 0; i < 4; i++)
//         printf("%d", a[i]);
//     return 0;
// }

// (2.2) 结构体数组的排序
struct node{
    int x, y;
}sad[10];

bool cmp(node a, node b){
    return a.x > b.x;
}
