/*
 * @Author: LynnGao
 * @Date: 2023-08-16 13:40:30
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-16 14:49:34
 * @Description: 基于有序序列的二分查找
 * @FilePath: \learnsomething\an\chapater4\binary.cpp
 */

#include <stdio.h>
#include <math.h>

// 4.5.1二分查找

// int binarySearch(int A[], int left, int right, int x){
//     int mid;
//     while (left <= right)
//     {
//         mid = (left + right) / 2;
//         if (A[mid] == x) return mid;
//         else if(A[mid] > x){
//             right = mid - 1;
//         }else {
//             left = mid + 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     const int n = 10;
//     int A[n] = {1, 3, 4, 6, 7, 9, 10, 11, 13, 15};
//     printf("%d %d\n", binarySearch(A, 0, n - 1, 6), binarySearch(A, 0, n - 1, 9));
//     return 0;
// }

// 4.5.2 二分法拓展

// 给定单调函数f(x)求f(x)=0的根
// const double eps = 1e-5;

// double f(double x)
// {
//     return x * x;
// }

// double calSqrt()
// {
//     double left = 1, right = 2, mid;
//     while (right - left > eps)
//     {
//         mid = (left + right) / 2;
//         if (f(mid) > 2)
//             right = mid;
//         else
//             left = mid;
//     }
//     return mid;
// }

// int main(){
//     printf("%.3f", calSqrt());
//     return 0;
// }

// 装水问题

const double PI = acos(-1.0);
const double eps = 1e-5;

double f(double R, double h)
{
    double alpha = 2 * acos((R - h) / R);
    double X = 2 * sqrt(R * R - (R - h) * (R - h));
    double S1 = alpha * R * R / 2 - X * (R - h) / 2;
    double S2 = PI * R * R / 2;
    return S1 / S2;
}

int main(){
    printf("%lf", PI);
    return 0;
}