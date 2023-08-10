/*
 * @Author: LynnGao
 * @Date: 2023-08-10 15:32:02
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-10 15:45:53
 * @Description: Common functions under the algorithm header file
 * @FilePath: \learnsomething\an\chapater6\section9.cpp
 */
#include <stdio.h>
// 6. sort() function

// 根据具体情形使用不同的排序方法，效率较高。

// 6.1如何使用sort()
// 头文件 algorithm using namespace std;
// sort(首元素地址(必须), 尾元素地址的下一个地址(必须), 比较函数(非必须))
#include <algorithm>

using namespace std;

int main()
{
    int a[6] = {9, 4, 2, 5, 6, -1};
    printf("Original Array:\n");
    for (int i = 0; i < 6; i++)
        printf("%d", a[i]);
    printf("\n");
    printf("Sort 4 elements:\n");
    sort(a, a + 4);
    for (int i = 0; i < 6; i++)
        printf("%d", a[i]);
    printf("\n");
    printf("Sort all elements:\n");
    sort(a, a + 6);
    for(int i = 0; i < 6; i++)
        printf("%d", a[i]);
    printf("\n");
    return 0;
}