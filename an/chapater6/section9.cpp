/*
 * @Author: LynnGao
 * @Date: 2023-08-10 15:32:02
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-27 12:04:47
 * @Description: Common functions under the algorithm header file
 * @FilePath: \learnsomething\an\chapater6\section9.cpp
 */
#include <stdio.h>
#include <algorithm>

using namespace std;

// 1. max() min() abs()

// int main()
// {
//     int x = 1, y = -2;
//     printf("max(%d,%d) = %d\nmin(%d, %d) = %d\n", x, y, max(x, y), x, y, min(x, y));
//     printf("abs(%d) = %d\nabs(%d) = %d", x, abs(x), y, abs(y));
//     return 0;
// }

// 2. swap()

// int main()
// {
//     int x = 1, y = 2;
//     printf("x = %d y = %d\n", x, y);
//     swap(x, y);
//     printf("After swap\nx = %d y = %d", x, y);
//     return 0;
// }

// 3. reverse()
// reverse(it, it2) 将数组指针在[it, it2)之间元素或容器的迭代器元素进行反转

int main(){
    int a[10] = {10, 11, 12, 13, 14, 15};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    reverse(a, a + 4);
    printf("\nAfter reverse(a, a + 4)\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

// 4. next_permutation()

// 5. fill()

// 6. sort() function

// 根据具体情形使用不同的排序方法，效率较高。

// (1)如何使用sort()
// 头文件 algorithm using namespace std;
// sort(首元素地址(必须), 尾元素地址的下一个地址(必须), 比较函数(非必须))

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
// struct node{
//     int x, y;
// }sad[10];

// bool cmp(node a, node b){
//     return a.x > b.x;
// }

// int main(){
//     sad[0].x = 2; //{2, 2}
//     sad[0].y = 2;
//     sad[1].x = 1; //{1, 3}
//     sad[1].y = 3;
//     sad[2].x = 3; //{3, 1}
//     sad[2].y = 1;
//     sort(sad, sad + 3, cmp);
//     for (int i = 0; i < 3; i++)
//         printf("%d %d\n", sad[i].x, sad[i].y);
//     return 0;
// }

// struct node{
//     int x, y;
// }sad[10];
//  先按x从大到小排序当x相等情况下按照y的大小从小到大排序
// bool cmp(node a, node b){
//     if(a.x != b.x) return a.x > b.x;
//     else return a.y < b.y;
// }

// int main(){
//     sad[0].x = 2; //{2, 2}
//     sad[0].y = 2;
//     sad[1].x = 1; //{1, 3}
//     sad[1].y = 3;
//     sad[2].x = 2; //{2, 1}
//     sad[2].y = 1;
//     sort(sad, sad + 3, cmp);
//     for(int i = 0; i < 3; i++)
//         printf("%d %d\n", sad[i].x, sad[i].y);
//     return 0;
// }

// cmp函数首先判断结构体内的x元素是否相等
// 如果不相等则直接按照x的大小来排序

// (3)容器的排序
// STL标准容器中 只有vector string deque是可以使用sort的

#include <iostream>
// #include <vector>

// bool cmp(int a, int b)
// {
//     return a > b;
// }

// int main()
// {
//     std::vector<int> vi;
//     vi.push_back(3);
//     vi.push_back(1);
//     vi.push_back(2);
//     sort(vi.begin(), vi.end(), cmp);
//     for (int i = 0; i < 3; i++)
//         cout<<vi[i]<<endl;
//     return 0;
// }

#include <string>
// int main(){
//     string str[3] = {"bbbb", "cc", "aaa"};
//     sort(str, str + 3);
//     for (int i = 0; i < 3; i++)
//         cout<<str[i]<<endl;
//     return 0;
// }
/*
aaa
bbbb
cc
*/

// bool cmp(string str1, string str2){
//     return str1.length() < str2.length();
// }
// int main(){
//     string str[3] = {"bbbb", "cc", "aaa"};
//     sort(str, str + 3, cmp);
//     for (int i = 0; i < 3; i++)
//         cout<<str[i]<<endl;
//     return 0;
// }