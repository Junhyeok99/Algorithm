//
// Created by junhyeok on 2020-07-23.
//
// https://www.acmicpc.net/problem/7576
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    queue<pair<pair<int, int>, int>> q;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int t;
            scanf("%d", &t);

            if (t == 1) {
                q.push(make_pair(make_pair(j, i), 0));
                v[i].push_back(0);
            }
            else
                v[i].push_back(t);
        }
    }

    int d = 0;
    while (!q.empty()) {
        auto cur = q.front();
        int x, y;
        x = cur.first.first;
        y = cur.first.second;
        q.pop();

        if (v[y][x] == 1)
            continue;

        d = cur.second;

        v[y][x] = 1;
        if (x - 1 >= 0 && v[y][x - 1] == 0) {
            q.push(make_pair(make_pair(x - 1, y), d + 1));
        }
        if (x + 1 < m && v[y][x + 1] == 0) {
            q.push(make_pair(make_pair(x + 1, y), d + 1));
        }
        if (y - 1 >= 0 && v[y - 1][x] == 0) {
            q.push(make_pair(make_pair(x, y - 1), d + 1));
        }
        if (y + 1 < n && v[y + 1][x] == 0) {
            q.push(make_pair(make_pair(x, y + 1), d + 1));
        }
    }

    bool chk = true;
    for(const auto& i : v) {
        for(auto j : i) {
            if(j == 0) {
                chk = false;
                break;
            }
        }
        if(!chk)
            break;
    }

    if(!chk)
        cout << -1;
    else
        cout << d;
}