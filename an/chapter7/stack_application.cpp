/*
 * @Author: LynnGao
 * @Date: 2023-08-27 15:51:44
 * @LastEditors: LynnGao
 * @LastEditTime: 2023-08-31 10:58:26
 * @Description: 后进先出 栈顶指针
 * @FilePath: \learnsomething\an\chapter7\stack_application.cpp
 */

// codeup 1918
#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <queue>
using namespace std;

struct node
{
    double num;
    char op;
    bool flag;
};

string str;
// 栈存储操作符
stack<node> s;
// 队列存储数字
queue<node> q;
map<char, int> op;

void Change()
{
    double num;
    node temp;
    for (int i = 0; i < str.length();)
    {
        if (str[i] >= '0' && str[i] <= '9') // str[i]是数字
        {
            temp.flag = true;
            temp.num = str[i++] - '0';
            while (i < str.length() && str[i] >= '0' && str[i] <= '9')
            {
                temp.num = temp.num * 10 + (str[i] - '0');
                i++;
            }
            q.push(temp);
        }
        else
        {
            temp.flag = false;
            while (!s.empty() && op[str[i]] <= op[s.top().op])
            {
                q.push(s.top());
                s.pop();
            }
            temp.op = str[i];
            s.push(temp);
            i++;
        }
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

double Cal()
{
    double temp1, temp2;
    node cur, temp;
    while (!q.empty())
    {
        cur = q.front();
        q.pop();
        if (cur.flag)
            s.push(cur);
        else
        {
            temp2 = s.top().num;
            s.pop();
            temp1 = s.top().num;
            s.pop();
            temp.flag = true;
            if (cur.op == '+')
                temp.num = temp1 + temp2;
            else if (cur.op == '-')
                temp.num = temp1 - temp2;
            else if (cur.op == '*')
                temp.num = temp1 * temp2;
            else
                temp.num = temp1 / temp2;
            s.push(temp);
        }
    }
    return s.top().num;
}

int main()
{
    op['+'] = op['-'] = 1;
    op['*'] = op['/'] = 2;
    while (getline(cin, str), str != "0")
    {
        for (string::iterator it = str.end(); it != str.begin(); it--)
        {
            if (*it == ' ')
                str.erase(it);
        }
        // 初始化栈
        while (!s.empty())
            s.pop();
        Change();
        printf("%.2f\n", Cal());
    }
    return 0;
}

// Problem E
// 判断给定表达式中的括号是否匹配
// 表达式中合法括号为()[]{}

stack<char> st;

bool MatchPair(char open, char close)
{
    return (open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}');
}

void judge(string str)
{
    for (int i = 0; i < str.length();)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            st.push(str[i]);
            i++;
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (!st.empty() && MatchPair(st.top(), str[i]))
            {
                st.pop();
            }
            else
            {
                printf("no\n");
                return; 
            }
            i++;
        }
        else
            i++;
    }
    if (st.empty())
        printf("yes\n");
    else
        printf("no\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    string s[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        string processStr = "";
        for(char c : s[i])
        {
            if(c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}')
                processStr += c;
        }
        while (!st.empty())
        {
            st.pop();
        }
        judge(processStr);
    }

    return 0;
}
