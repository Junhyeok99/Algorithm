//
// Created by apple on 2020-07-07.
//
// https://www.acmicpc.net/problem/1260
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int curr, const vector<vector<int>>& g, vector<bool> &v) {
    std::cout << curr+1 << ' ';
    v[curr] = true;

    while(true) {
        int min = -1;
        for(auto i : g[curr]) {
            if(!v[i] && (min == -1 || min > i)) {
                min = i;
            }
        }
        if(min == -1)
            return;
        dfs(min, g, v);
    }
}

int main() {
    int n, m, s;

    cin >> n >> m >> s;
    vector<vector<int>> graph(n);
    vector<bool> visited(n);

    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }

    dfs(s-1, graph, visited);
    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }
    cout << '\n';

    queue<int> sibling;
    sibling.push(s - 1);
    while(!sibling.empty()) {
        int curr = sibling.front();
        sibling.pop();
        if(visited[curr])
            continue;

        cout << curr + 1 << ' ';
        visited[curr] = true;

        vector<int> tmp;
        for(auto i : graph[curr]) {
            if(!visited[i])
                tmp.push_back(i);
        }
        sort(tmp.begin(), tmp.end());

        for(auto i : tmp)
            sibling.push(i);
    }

}