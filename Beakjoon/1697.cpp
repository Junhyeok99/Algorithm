//
// Created by apple on 2020-07-22.
//
// https://www.acmicpc.net/problem/1697
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, k;
    vector<int> v(100001);
    queue<pair<int, int>> q;
    cin >> n >> k;

    for(auto &i : v)
        i = -1;

   q.push(make_pair(n, 0));

    while(true) {
        pair<int, int> cur = q.front();
        q.pop();
        v[cur.first] = cur.second;

        if(cur.first == k) {
            cout << cur.second;
            break;
        }

        if(cur.first - 1 >= 0 && v[cur.first - 1] == -1)
            q.push(make_pair(cur.first - 1, cur.second + 1));
        if(cur.first + 1 <= 100000 && v[cur.first + 1] == -1)
            q.push(make_pair(cur.first + 1, cur.second + 1));
        if(cur.first * 2 <= 100000 && v[cur.first * 2] == -1)
            q.push(make_pair(cur.first * 2, cur.second + 1));

    }
}