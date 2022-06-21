//
// Created by junhyeok on 2020-07-10.
//
// https://www.acmicpc.net/problem/1931
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool callback(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second)
        return true;
    else if (a.second == b.second)
        return a.first < b.first;
    else
        return false;
}

int main() {
    int n;
    int cnt = 0;
    int last = 0;
    vector<pair<int, int>> v;
    for (cin >> n; n > 0; n--) {
        int i, j;
        cin >> i >> j;
        v.emplace_back(i, j);
    }

    sort(v.begin(), v.end(), callback);

    for (auto t: v) {
        if (t.first >= last) {
            cnt++;
            last = t.second;
        }
    }

    cout << cnt;

    return 0;
}