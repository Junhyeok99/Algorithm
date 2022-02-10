//
// Created by junhyeok on 2020-07-28.
//
// https://www.acmicpc.net/problem/11724
#include <iostream>
#include <vector>

using namespace std;

void dfs(int cur, int d, const vector<vector<int>> &v, vector<int> &vis) {
    if(vis[cur])
        return;

    vis[cur] = d;
    for(auto i: v[cur]) {
        if(!vis[i]) {
            if(cur == 0)
                d++;
            dfs(i, d, v, vis);
        }
    }
}

int main() {
    int n, m;

    cin >> n >> m;
    vector<vector<int>> v(n+1);
    vector<int> visit(n+1);

    for(;n >= 0; n--) {
        visit[n] = 0;
        if(n != 0)
            v[0].push_back(n);
    }

    for(; m > 0; m--) {
        int i, j;
        vector<int> tv;

        scanf("%d %d", &i, &j);
        v[i].push_back(j);
        v[j].push_back(i);
    }

    dfs(0, 0, v, visit);

    int max = 0;
    for(auto i: visit)
        if(max < i)
            max = i;

    cout << max;
}