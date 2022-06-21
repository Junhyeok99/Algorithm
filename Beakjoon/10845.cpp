//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/10845
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    queue<int> q;

    for (cin >> n; n > 0; n--) {
        string str;
        cin >> str;

        if (str == "push") {
            int t;
            scanf("%d", &t);
            q.push(t);
        } else if (str == "pop") {
            if (q.empty())
                printf("-1\n");
            else {
                printf("%d\n", q.front());
                q.pop();
            }
        } else if (str == "size") {
            printf("%lu\n", q.size());
        } else if (str == "empty") {
            printf("%d\n", q.empty() ? 1 : 0);
        } else if (str == "front") {
            if (q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.front());
        } else if (str == "back") {
            if (q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.back());
        }
    }
}
