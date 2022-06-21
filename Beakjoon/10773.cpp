//
// Created by junhyeok on 2022/03/23
//
// https://www.acmicpc.net/problem/10773
#include "iostream"
#include "stack"

using namespace std;

int main() {
    int k;
    int sum = 0;
    stack<int> s;

    cin >> k;

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        if (n == 0) {
            if (!s.empty())
                s.pop();
        } else {
            s.push(n);
        }
    }

    while (true) {
        if (s.empty())
            break;

        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}