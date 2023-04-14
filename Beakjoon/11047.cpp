//
// Created by junhyeok on 2022/07/20
//
// https://www.acmicpc.net/problem/11047
#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n, goal;
    int cur = 0;
    cin >> n >> goal;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }

    for (u_long i = v.size() - 1; i >= 0; i--) {
        int div = goal / v[i];
        cur += div;
        goal -= div * v[i];

        if (goal == 0) {
            break;
        }
    }

    cout << cur;

    return 0;
}