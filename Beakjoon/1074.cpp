//
// Created by junhyeok on 2020-07-20.
//
// https://www.acmicpc.net/problem/1074
#include <iostream>
#include <cmath>

using namespace std;

int squ(int n, int r, int c) {
    int add = 0;

    if (n == 0)
        return 0;

    if (r >= pow(2, n - 1)) {
        add += (int) pow(2, 2 * (n - 1)) * 2;
        r -= pow(2, n - 1);
    }
    if (c >= pow(2, n - 1)) {
        add += (int) pow(2, 2 * (n - 1));
        c -= pow(2, n - 1);
    }

    return add + squ(n - 1, r, c);
}

int main() {
    int n, r, c;
    cin >> n >> r >> c;

    cout << squ(n, r, c);
}