//
// Created by junhyeok on 2020-07-18.
//
// https://www.acmicpc.net/problem/1966
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int t;

    for (cin >> t; t > 0; t--) {
        int n, m;
        queue<pair<int, int>> q;
        vector<int> v;

        for (cin >> n >> m; n > 0; n--) {
            int a;
            cin >> a;
            q.push(make_pair(a, q.size()));
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        int cnt = 1;
        while (true) {
            if (q.front().first == v.back()) {
                if (q.front().second == m) {
                    printf("%d\n", cnt);
                    break;
                } else {
                    cnt++;
                    q.pop();
                    v.pop_back();
                }
            } else {
                q.push(q.front());
                q.pop();
            }
        }
    }
}