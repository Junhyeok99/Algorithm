//
// Created by junhyeok on 2020-07-19.
//
// https://www.acmicpc.net/problem/1003
#include <iostream>
#include <map>

using namespace std;

void calc(map<int, pair<int, int>> &m) {
    for (int i = 2; i <= 40; i++) {
        m[i].first = m[i - 1].first + m[i - 2].first;
        m[i].second = m[i - 1].second + m[i - 2].second;
    }
}

int main() {
    int t;
    map<int, pair<int, int>> m;

    m[0] = make_pair(1, 0);
    m[1] = make_pair(0, 1);

    calc(m);

    for (cin >> t; t > 0; t--) {
        int c;
        cin >> c;
        printf("%d %d\n", m[c].first, m[c].second);
    }
}