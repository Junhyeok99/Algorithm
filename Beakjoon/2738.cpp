//
// Created by junhyeok on 2022/06/25
//
// https://www.acmicpc.net/problem/2738
#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n, m;
    vector<vector<int>> a;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        a.emplace_back();
        for (int j = 0; j < m; j++) {
            int t;
            cin >> t;

            a[i].push_back(t);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int t;
            cin >> t;

            a[i][j] += t;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}