//
// Created by junhyeok on 2022/03/29
//
// https://www.acmicpc.net/problem/4949
#include <iostream>
#include "string"
#include "stack"

using namespace std;

bool is_balanced(const string &str) {
    stack<char> s;

    for (char i: str) {
        if (i == '(' || i == '[') {
            s.push(i);
        } else if (i == ')') {
            if (!s.empty() && s.top() == '(')
                s.pop();
            else
                return false;
        } else if (i == ']') {
            if (!s.empty() && s.top() == '[')
                s.pop();
            else
                return false;
        }
    }

    if (!s.empty())
        return false;

    return true;
}

int main() {
    while (true) {
        string s;
        while (true) {
            char c = getchar();

            if (c == '\n')
                break;

            s.push_back(c);
        }

        if (s == ".") {
            break;
        }

        if (is_balanced(s))
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}