//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/2164
#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    deque<int> d;

    for (cin >> n; n > 0; n--)
        d.push_front(n);

    while (d.size() != 1) {
        d.pop_front();
        d.push_back(d.front());
        d.pop_front();
    }

    cout << d.front();

    return 0;
}