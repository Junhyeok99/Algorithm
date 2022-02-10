//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/10828
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    stack<int> s;

    for (cin >> n; n > 0; n--) {
        string str;
        cin >> str;

        if(str == "push") {
            int t;
            scanf("%d", &t);
            s.push(t);
        } else if (str == "pop") {
            if (s.empty())
                printf("-1\n");
            else {
                printf("%d\n", s.top());
                s.pop();
            }
        } else if (str == "size") {
            printf("%lu\n", s.size());
        } else if (str == "empty") {
            printf("%d\n", s.empty() ? 1 : 0);
        } else if (str == "top") {
            if (s.empty())
                printf("-1\n");
            else
                printf("%d\n", s.top());
        }
    }
}