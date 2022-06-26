//
// Created by junhyeok on 2022/06/25
//
// https://www.acmicpc.net/problem/10807
#include "iostream"
#include "map"

using namespace std;

int main() {
    map<int, int> m;
    int n, v;

    for (cin >> n; n > 0; n--) {
        int t;
        cin >> t;

        m[t]++;
    }

    cin >> v;

    cout << m[v];

    return 0;
}