/*
 * @Author: LynnGao
 * @Date: 2023-08-05 15:38:43
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-07 17:34:04
 * @Description: 
 * @FilePath: \learnsomething\an\chapater2.c
 */

#include <stdio.h>
// page 5 
// cin count可以不指定输入输出格式
// 但消耗的时间比scanf和printf多得多

// int main(){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d", a+b);
//     return 0;
// }

// page 8
// 整型 int 

// int main(){
//     int a = 1, b = 2;
//     printf("%d", a + b);
//     return 0;
// }

// page 9
// 浮点型 double


// int main(){
//     double a = 3.14, b = 0.12;
//     double c = a + b;
//     printf("%f", c);
//     return 0;
// }

// page 9
// 字符型 char

// int main(){
//     char c1 = 'z', c2 = 'j', c3 = 117;
//     printf("%c%c%c", c1, c2, c3);
//     return 0;
// }

// page 10
//  转义字符\n 控制字符不可显示

/* int main(){
    int num1 = 1, num2 = 2;
    printf("%d\n\n%d", num1, num2);
    printf("%c", 7);
    return 0;
} */

// page 10-11
// 字符串常量可以作为初值赋给字符数组 但不可以给字符变量 char c = "abcd"是错误的
/* int main(){
    char str1[25] = "Wo ai de ren bu ai wo";
    char str2[25] = "so sad a story it is.";
    printf("%s, %s", str1, str2);
    return 0;
} */

// page 11
// 布尔型 c++可以直接使用 c必须添加stdbool.h
// 整型常量在赋值给布尔型变量时会自动转换为true或者false

// #include <stdbool.h>

// int main(){
//     bool flag1 = 0, flag2 = true;
//     int a = 1, b = 1;
//     printf("flag1 = %d flag2 = %d a==b %d\n", flag1, flag2, a==b);
//     return 0;
// }

// page 12
// 强制类型转换 格式为 (新类型名) 变量名

// int main(){
//     double r = 12.56;
//     int a = 3, b = 5;
//     printf("int r = %d\n", (int)r);
//     printf("a/b = %d\n", a / b);
//     printf("double a/b = %.1f", (double)a / (double)b);
//     return 0;
// }

// page 12
// 符号常量 “替换” 用一个标识符来代替常量 又称为“宏定义”或者“宏替换”
// #define 标识符 常量
// #define pi 3.14
// const 定义法 const 数据类型 变量名 = 常量;
// 推荐const写法
// const double pi = 3.14;

// int main(){
//     double r = 3;
//     // printf("pi * r^2 = %.2f\n", pi * r * r);
//     printf("2 * pi * r = %.2f\n", 2 * pi * r );
//     return 0;
// }

// page 13
// define除了可以定义常量歪 还可以定义任何语句或片段

// # define ADD(a, b) ((a) + (b))
// int main(){
//     int num1 = 3, num2 = 5;
//     printf("%d + %d = %d", num1, num2, ADD(num1, num2));
//     return 0;
// }

// 宏定义是直接将对应的部分替换，才进行编译和运行
// #define CAL(x) (x * 2 + 1)

// int main(){
//     int a = 1;
//     printf("%d \n", CAL(a + 1));
//     // CAL(a + 1)  (a + 1 * 2 + 1)=4
//     return 0;
// }

// page 14 2.1.5 operator运算符
// 1. arithmetic operator 算术运算符
//  + - * 

// int main(){
//     int a = 3, b = 4;
//     double c = 1.23, d = 0.24;
//     printf(" %d + %d = %d\t %d - %d = %d\n", a, b, a + b, a, b, a - b);
//     printf(" %f * %f = %f\n", c, d, c * d);
//     return 0;
// }

//  page 14 除法 /

// int main(){
//     int a = 5, b = 4, c = 5, d = 6;
//     printf("%d / %d = %d\t %d / %d = %d\t %d / %d = %d\n", a, b, a / b, a, c, a / c, a, d, a / d);
//     return 0;
// }



// page 15 
// 取模运算符 % 返回被除数与除数相除得到的余数

// int main(){
//     int a = 5, b = 3, c = 5;
//     printf("%d %% %d = %d\n %d %% %d = %d", a, b, a % b, a, c, a % c);
//     return 0;
// }

// page 15 
// 自增/减运算符
// 自增运算符有两种写法 i++ 或 ++i
// 区别在于 i++是先使用i再将i+1 而 ++i是先将i加1再使用i
// 自减同理

// int main(){
//     int a = 1, b = 1, n1, n2;
//     n1 = a++;
//     n2 = ++b;
//     printf("n1 = %d a = %d\n", n1, a);
//     printf("n2 = %d b = %d\n", n2, b);
//     return 0;
// }

// page 16
// 关系运算符 <、>、<=、>=、==、!=
// 逻辑运算符 && || ！与 或 非
// 条件运算符 (? :) 三目运算符:需要三个参数的运算符
//  A ? B : C;

// int main(){
//     int a = 3, b = 5;
//     int c = a > b ? 7 : 11;
//     printf("c = %d\n", c);
//     return 0;
// }

// #define MAX(a, b) ((a) > (b) ? (a) : (b))
// int main(){
//     int a = 4, b = 3;
//     printf("c = %d\n", MAX(a, b));
//     return 0;
// }

// page 17
// 位运算符 二进制位 左/右移 对齐 按位与/或/异或/取反运算
// << 左移 右移 >> 
// 位运算符优先级没有算术运算符高
const int INF = (1 << 30) - 1;
// const int INF = 0x3fffffff;

// 2.2 sequential structure 顺序结构

// 2.2.1 赋值表达式 assignment expression

// int main(){
//     int n = 3 * 2 + 1;
//     int m = (n > 6) && (n < 8);
//     n = n + 2;
//     printf("n = %d m = %d\n", n, m);
//     return 0;
// }

// 2.2.2 使用scanf和printf输入/输出
// 1. scanf函数的使用
// scanf("格式控制", 变量地址);
// scanf("%d", &n);

// int main(){
//     char str[10];
//     scanf("%s", str);
//     printf("str = %s", str);
//     return 0;
// }

// scanf的%c格式时可以读入空格和换行的
// 其余格式的输入是以空白符(空格、换行等)为结束判断标志的

// int main(){
//     int a;
//     char c, str[10];
//     scanf("%d%c%s", &a, &c, str);
//     printf("a = %d, c = %c, str = %s", a, c, str);
//     return 0;
// }

/* 
Input:1 a bcd
Output: a = 1, c =  , str = a
 */

// 2.printf函数的使用
// printf("格式控制", 变量名称);

// int main(){
//     float f1 = 8765.4, f2 = 8765.4;
//     double d1 = 8765.4, d2 = 8765.4;
//     printf("%f * %f = %f\n%lf * %lf = %f\n", f1, f2, f1 * f2, d1, d2, d1 * d2);
//     return 0;
// }

// 两个float类型的浮点数相乘 精度在整数部分就已经不准确了 建议用double

// int main(){
//     printf("abcd\nefg\n\nhijklmn");
//     return 0;
// }

// printf("%%");
// printf("\\");

//实用的输出格式 1. %md 2. %0md 3. %.mf 

// 1. %md

// int main(){
//     int a = 123, b = 1234567;
//     printf("%%5d a = %5d\n", a);//小于5位数 自动用空格填充
//     printf("%%5d b = %5d\n", b);//大于5位数直接输出
//     return 0;
// }

// 2. %0md
// int main(){
//     int a = 123, b = 1234567;
//     printf("%%05d a = %05d\n", a);//小于5位数 用0填充
//     printf("%%05d b = %05d\n", b);//大于5位数直接输出
//     return 0;
// }

// 3. %.mf
// 浮点数保留m位小数输出 四舍六入五成双规则

// int main(){
//     double d1 = 12.3456;
//     printf("Origin %f\n", d1);
//     printf("%%.0f = %.0f\n", d1);
//     printf("%%.1f = %.1f\n", d1);
//     printf("%%.2f = %.2f\n", d1);
//     printf("%%.3f = %.3f\n", d1);
//     printf("%%.4f = %.4f\n", d1);
//     return 0;
// }

// 2.2.3 使用getchar和putchar输入\输出字符

// int main(){
//     char c1, c2, c3;
//     c1 = getchar();
//     getchar();
//     c2 = getchar();
//     c3 = getchar();
//     putchar(c1);
//     putchar(c2);
//     putchar(c3);
//     return 0;
// }

/* 
Input: abcd
Output: acd
b被接收但没存储到变量中 
 */

// 2.2.4 注释 行注释 多行注释

// 2.2.5 typedef
// 给复杂的数据类型起别名
// 例如 LL来代替long long 避免因在程序中出现大量的long long降低编码效率

// typedef long long LL;
// int main(){
//     LL a = 123456789012345LL, b = 1234567890123456LL;
//     printf("%lld\n", a + b);
//     return 0;
// }

// 2.2.6 常用math函数
// math.h头文件 很多数学函数
#include <math.h>

// 1.fabs(double x) 取绝对值

// int main(){
//     double db = -12.56;
//     printf("Original db = %f\n Fabs(db) = %.2f", db, fabs(db));
//     return 0;
// }

// 2.floor(double x)和ceil(double x)
// 向下 向上取整 python的Numpy也有

// int main(){
//     double db1 = -5.2, db2 = 5.2;
//     printf("Original db1 = %f\t floor(db1) = %.0f\t ceil(db1) = %.0f\n", db1, floor(db1), ceil(db1));
//     printf("Original db2 = %f\t floor(db2) = %.0f\t ceil(db2) = %.0f\n", db2, floor(db2), ceil(db2));
//     return 0;
// }

// 3.pow(double r, double p) 返回r^q
// int main(){
//     double db = pow(2.0, 3.0);
//     printf("db = %f\n", db);
//     return 0;
// }

// 4.sqrt(double x) 算术平方根
// int main(){
//     double x = 2.0;
//     double db = sqrt(x);
//     printf("x = %f\t sqrt(x) = %f", x, db);
//     return 0;
// }

// 5.log(double x) 以自然对数为底的对数

// int main(){
//     double db = log(1.0);
//     printf("%f\n", db);
//     return 0;
// }

// 6.sin(double x) cos(double x) tan(double x)

// int main(){
//     const double pi = acos(-1.0);
//     double db1 =  sin(pi * 45 / 180);
//     double db2 = cos(pi * 45 / 180);
//     double db3 = tan(pi * 45 / 180);
//     printf("sin(pi / 4)=%f, cos(pi / 4)=%f, tan(pi / 4)=%f\n", db1, db2, db3);
//     return 0;
// }

// 7.asin(double x) acos(double x) atan(double x)

// int main(){
//     double db1 = asin(1);
//     double db2 = acos(-1.0);
//     double db3 = atan(0);
//     printf("asin(1) = %f\t acos(-1.0) = %f\t atan(0) = %f", db1, db2, db3);
//     return 0;
// }
// 8.round(double x)

int main(){
    double db1 = round(3.40);
    double db2 = round(3.45);
    double db3 = round(3.50);
    double db4 = round(3.55);
    double db5 = round(3.60);
    printf("db1 = %d, db2 = %d, db3 = %d, db4 = %d, db5 = %d", (int)db1, (int)db2, (int)db3, (int)db4, (int)db5);
    return 0;
}