//
// Created by junhyeok on 2020-07-16.
//
// https://www.acmicpc.net/problem/1874
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    vector<bool> ans;
    stack<int> s;
    int cur = 1;

    for (cin >> n; n > 0; n--) {
        int t;
        scanf("%d", &t);
        if (t >= cur) {
            for (int i = cur; i <= t; i++) {
                s.push(i);
                ans.push_back(true);
            }
            cur = t + 1;
            ans.push_back(false);
            s.pop();
        } else if (t < cur) {
            if (s.top() == t) {
                s.pop();
                ans.push_back(false);
            } else {
                cout << "NO";
                return 0;
            }
        }
    }

    for (auto i: ans)
        printf("%c\n", i ? '+' : '-');
}