//
// Created by apple on 2020-07-20.
//
// https://www.acmicpc.net/problem/1012
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;

    for (cin >> t; t > 0; t--) {
        int w, h, k;
        vector<vector<int>> m;
        cin >> w >> h;

        for (int i = 0; i < h + 2; i++) {
            vector<int> v(w + 2);
            m.push_back(v);
        }

        for (cin >> k; k > 0; k--) {
            int x, y;
            scanf("%d %d", &x, &y);
            m[y + 1][x + 1] = -1;
        }

        int cnt = 0;
        queue<pair<int, int>> q;
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if(m[i][j] == -1) {
                    q.push(make_pair(j, i));
                    cnt++;
                }

                while(!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();

                    if(m[cur.second][cur.first] != -1)
                        continue;
                    m[cur.second][cur.first] = cnt;

                    if(m[cur.second - 1][cur.first] == -1)
                        q.push(make_pair(cur.first, cur.second - 1));
                    if(m[cur.second + 1][cur.first] == -1)
                        q.push(make_pair(cur.first, cur.second + 1));
                    if(m[cur.second][cur.first - 1] == -1)
                        q.push(make_pair(cur.first - 1, cur.second));
                    if(m[cur.second][cur.first + 1] == -1)
                        q.push(make_pair(cur.first + 1, cur.second));
                }
            }
        }

        printf("%d\n", cnt);
    }
}