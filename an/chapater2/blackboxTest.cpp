/*
 * @Author: LynnGao
 * @Date: 2023-08-12 16:06:06
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-14 09:46:29
 * @Description: 黑盒测试 输入类型 输出类型
 * @FilePath: \learnsomething\an\chapater2\blackboxTest.cpp
 */

// 根据黑盒测试是否对每组测试数据
// 都单独测试
// 或是一次性测试所有测试数据 
// 分为

#include <stdio.h>

// 2.10.1 单点测试
// 判断每组数据的输出结果是否正确

// int main(){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d\n", a + b);
//     return 0;
// }

// 2.10.2 多点测试
// 3种输入方式
// (1) while...EOF
// 如果题目没给输入的结束条件 默认读取文件到末尾 
// C语言使用EOF End of File 来代表-1

// int main(){
//     int a, b;
//     while(scanf("%d%d", &a, &b) != EOF)
//         printf("%d\n", a + b);
//     return 0;
// }

// Terminal输入数据时不会触发EOF状态 手动触发 ctrl+z

// while(gets(str) != NULL)

// (2) while break
// 满足某个条件时退出中断

// int main(){
//     int a, b;
//     while(scanf("%d%d", &a, &b) != EOF){
//         if(a == 0 && b == 0) break;
//         printf("%d\n", a + b);
//     }
//     return 0;
// }

// // 简洁写法

// int main(){
//     int a, b;
//     while (scanf("%d%d", &a, &b) != EOF, a || b)
//         printf("%d\n", a + b);
// }

// a != 0 || b != 0 缩写为 a || b

// (3) while(T--)
// 给出测试数据的组数 给出相应数量组数的输入数据

// int main(){
//     int T, a, b;
//     scanf("%d", &T);
//     while(T--){
//         scanf("%d%d", &a, &b);
//         printf("%d\n", a + b);
//     }
//     return 0;
// }

// 输出类型

// (1)正常输出
// (2) 每组数据输出之后额外加一个空行
// 只需要在每组输出结束之后输出一个换行符\n即可

// int main(){
//     int a, b;
//     while (scanf("%d%d", &a, &b) != EOF)
//     {
//         printf("%d\n", a + b);
//         printf("\n");
//     }
    
// }

// (3) 两组输出数据之间有一个空行最后一组数据后没有空行
int main(){
    int T, n, a;
    scanf("%d", &T);
    while(T--){
        int sum = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            sum = sum + a;
        }
        printf("%d\n", sum);
        if (T > 0) printf("\n");
    }
    return 0;
}