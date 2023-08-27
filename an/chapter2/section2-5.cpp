/*
 * @Author: LynnGao
 * @Date: 2023-08-08 10:04:16
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-11 15:36:23
 * @Description: 数组 page39-54
 * 数组:相同数据类型的变量组合在一起而产生的数据集合
 * @FilePath: \learnsomething\an\chapater2\section2-5.cpp
 */

// 2.5.1 一维数组 one-dimensional array
// page 39-41
// 数据类型 数组名[数组大小]
// 数组大小必须是整数常量不可以是变量

#include <stdio.h>

// int main(){
//     int a[10] = {5, 3, 2, 6, 8, 4};
//     for(int i = 0; i < 10; i++){
//         printf("a[%d] = %d\n", i, a[i]);
//     }
//     return 0;
// }

// int main(){
//     int a[10];
//     scanf("%d", &a[0]);
//     for(int i = 1; i < 10; i++){
//         a[i] = a[i - 1] * 2;
//     }
//     for(int i = 0; i < 10; i++){
//         printf("a[%d] = %d\n", i, a[i]);
//     }
//     return 0;
// }

// 2.5.2 冒泡排序 page 41-43

// 1. 交换两个数

// int main(){
//     int a = 1, b = 2;
//     printf("a = %d\t b = %d\n", a, b);
//     printf("After exchange!\n");
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d\t b = %d\n", a, b);
//     return 0;
// }

// 2.冒泡排序
// page 43

// int main(){
//     int a[10] = {3, 1, 4, 5, 2};
//         for(int i = 0; i < 5; i++){
//         printf("a[%d] = %d\t", i, a[i]);
//     }
//     printf("\nAfter bubble\n");
//     for(int i = 1; i <=4; i++){
//         for(int j = 0; j < 5 - i; j++){
//             if(a[j] > a[j + 1]){
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     for(int i = 0; i < 5; i++){
//         printf("a[%d] = %d\t", i, a[i]);
//     }
//     return 0;
// }

// 2.5.3 二维数组 page 43-46

// int main(){
//     int a[5][6] = {{3, 1, 2}, {8, 4}, {}, {1, 2, 3, 4, 5}};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int a[3][3], b[3][3];
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }

//     int c[3][3];

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
如果数组大小较大(大概10^6级别)
则需要将其定义在主函数外面
否则会使程序异常退出
函数内部申请的局部变量来自系统栈 允许申请的空间较小

*/

// int a[1000000];

// int main(){
//     for(int i = 0; i < 1000000; i++){
//         a[i] = i;
//     }
//     return 0;
// }

// 2.5.4 memset
// page 46-47
// 对数组中每一个元素赋相同值
// 还有fill函数 后续在STL中说
// 使用memset需添加string.h头文件
// memset按字节赋值 对每个字节赋相同值

// #include <string.h>

// int main(){
//     int a[5] = {1, 2, 3, 4, 5};
//     printf("Original:\n");
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("Memset 0:\n");
//     // 赋初值0
//     memset(a, 0, sizeof(a));
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("Memset -1:\n");
//     // 赋初值-1
//     memset(a, -1, sizeof(a));
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("Memset 1:\n");
//     // 赋初值1
//     memset(a, 1, sizeof(a));
//     for(int i = 0; i < 5; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

/* Original:
1       2       3       4       5
Memset 0:
0       0       0       0       0
Memset -1:
-1      -1      -1      -1      -1
Memset 1:
16843009        16843009        16843009        16843009        16843009 */

// 2.5.5 字符数组
// 1.字符数组初始化

// int main(){
//     char str[15] = {'G', 'o', 'o', 'd', ' ', 's', 't', 'o', 'r', 'y', '!'};
//     for(int i = 0; i < 11; i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// 字符数组可以通过直接赋值字符串来初始化
// 仅限于初始化 其他位置不允许直接赋值整个字符串

// int main(){

//     char str[15] = "Good Story!";
//     for(int i = 0; i < 11; i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// 2.字符数组的输入输出

// (1)scanf输入和printf输出
//  %s用来输入一个字符串并存在字符数组里 识别空格或换行来识别字符串的结束

// int main(){
//     char str[10];
//     scanf("%s", str);
//     printf("%s", str);
//     return 0;
// }

/*
Input: TAT TAT TAT
Output: TAT
%s识别空格作为字符串的结尾后两个TAT不被读入
*/

// (2)getchar输入和putchar输出

// int main()
// {
//     char str[5][5];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             str[i][j] = getchar();
//         }
//         getchar(); // 把输入中每行末尾的换行符吸收掉
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             putchar(str[i][j]);
//         }
//         putchar('\n');
//     }
//     return 0;
// }

// (3)gets输入和puts输出
// gets 识别换行符\n作为输入结束
// scanf完一个整数后 如果要使用 gets 需要先用getchar接收整数后的换行符

// int main(){
//     char str1[20];
//     char str2[5][10];
//     gets(str1);
//     for(int i = 0; i < 3; i++){
//         gets(str2[i]);
//     }
//     puts(str1);
//     for (int i = 0; i < 3; i++)
//     {
//         puts(str2[i]);
//     }
//     return 0;
// }

// 2.5.6 string.h头文件
// 1.strlen() strlen函数可以得到字符数组中第一个\0前的字符的个数

#include <stdio.h>
#include <string.h>

// int main(){
//     char str[10];
//     gets(str);
//     int len = strlen(str);
//     printf("%d\n", len);
//     return 0;
// }

// 2.strcmp() 返回两个字符串大小的比较结果 按字典序
// 字典序就是字符串在字典中的顺序

// int main(){
//     char str1[50], str2[50];
//     gets(str1);
//     gets(str2);
//     int cmp = strcmp(str1, str2);
//     if (cmp < 0) printf("str1 < str2\n");
//     else if (cmp > 0) printf("str1 > str2\n");
//     else printf("str1 == str2\n");
//     return 0;
// }

// 3.strcpy()
//  把一个字符串复制给另一个字符串
// strcp(str1, str2)把字符数组2复制给字符数组1包括结束字符\0

// int main(){
//     char str1[50], str2[50];
//     gets(str1);
//     gets(str2);
//     strcpy(str1, str2);
//     puts(str1);
//     return 0;
// }

// 4.strcat()
// 字符串拼接 strcat(str1, str2)把str2拼接到str1后面

// int main(){
//     char str1[50], str2[50];
//     gets(str1);
//     gets(str2);
//     strcat(str1, str2);
//     puts(str1);
//     return 0;
// }

// 2.5.7 sscanf和sprintf
// 支持正则表达式

// int main(){
//     int n;
//     char str[100] = "123";
//     // 把str内容以%d的格式写到n中
//     sscanf(str, "%d", &n);
//     printf("%d\n", n);
//     return 0;
// }

// int main(){
//     int n = 233;
//     char str[100];
//     // 把n以%d的格式写到str字符数组中
//     sprintf(str, "%d", n);
//     printf("%s\n", str);
//     return 0;
// }

// int main(){
//     int n;
//     double db;
//     char str[100] = "2048:3.14,hello", str2[100];
//     sscanf(str, "%d:%lf,%s", &n, &db, str2);
//     printf("n = %d, db = %.2f, str2 = %s\n", n, db, str2);
//     return 0;
// }

int main(){
    int n = 12;
    double db = 3.1415;
    char str[100] , str2[100] = "good";
    sprintf(str, "%d:%.2f,%s", n, db, str2);
    printf("str = %s", str);
    return 0;
}