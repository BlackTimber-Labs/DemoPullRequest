#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;
int postfixValue(string str)
{
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c >= '0' && c <= '9')
        {
            s.push(c - '0');
        }
        else
        {
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();
            switch (c)
            {
            case '+':
                s.push(op1 + op2);
                break;
            case '-':
                s.push(op1 - op2);
                break;
            case '*':
                s.push(op1 * op2);
                break;
            case '/':
                s.push(op1 / op2);
                break;
            case '^':
                s.push(pow(op1, op2));
                break;

            default:
                break;
            }
        }
    }
    return s.top();
}

int main()
{
    string str;
    cin >> str;
    cout << postfixValue(str);
    return 0;
}