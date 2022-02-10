//
// Created by junhyeok on 2020-07-23.
//
// https://www.acmicpc.net/problem/2630
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> count(const vector<vector<bool>> &v, int n, int x, int y) {
    bool cur = v[y][x];
    bool chk = true;

    if(n == 1)
        return make_pair(!cur, cur);

    for(int i = y; i < y + n; i++) {
        for(int j = x; j < x + n; j++) {
            if(v[i][j] != cur) {
                chk = false;
                break;
            }
        }
        if(!chk)
            break;
    }

    if(chk)
        return make_pair(!cur, cur);
    else {
        int w = 0;
        int b = 0;
        for(int i = 0; i < 4; i++) {
            pair<int, int> t = count(v, n / 2, x + (n / 2) * (i % 2), y + (n / 2) * (i / 2));
            w += t.first;
            b += t.second;
        }
        return make_pair(w, b);
    }

}

int main() {
    int n;
    vector<vector<bool>> v;
    cin >> n;

    for(int i = 0; i < n; i++) {
        vector<bool> t(n);
        for(int j = 0 ; j < n ; j++) {
            int in;
            scanf("%d", &in);
            t[j] = in;
        }
        v.push_back(t);
    }

    pair<int, int> ans = count(v, n, 0, 0);
    cout << ans.first << endl << ans.second;

    return 0;
}