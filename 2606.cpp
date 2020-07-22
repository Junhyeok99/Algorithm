//
// Created by apple on 2020-07-22.
//
// https://www.acmicpc.net/problem/2606
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    int ans = 0;
    vector<bool> visited(n+1);
    vector<vector<int>> v(n+1);
    queue<int> bfs;

    for (; p > 0; p--) {
        int i, j;
        scanf("%d %d", &i, &j);
        v[i].push_back(j);
        v[j].push_back(i);
    }

    for(auto i : visited)
        i = false;

    bfs.push(1);
    while(!bfs.empty()) {
        int cur = bfs.front();
        bfs.pop();

        if(visited[cur])
            continue;

        visited[cur] = true;
        ans++;

        for(auto i : v[cur]) {
            if(!visited[i])
                bfs.push(i);
        }
    }

    cout << ans - 1;
}