//
// Created by junhyeok on 2022/06/25
//
// https://www.acmicpc.net/problem/5597
#include "iostream"
#include "vector"

using namespace std;

int main() {
    vector<int> v;

    for (int i = 0; i < 30; i++) {
        v.emplace_back(1);
    }

    for (int i = 0; i < 28; i++) {
        int t;
        cin >> t;

        v[t - 1]--;
    }

    for (int i = 0; i < 30; i++) {
        if (v[i] == 1) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}