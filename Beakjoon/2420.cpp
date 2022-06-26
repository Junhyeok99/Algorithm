//
// Created by junhyeok on 2022/06/25
//
// https://www.acmicpc.net/problem/2420
#include "iostream"

using namespace std;

int main() {
    long long n, m;

    cin >> n >> m;

    if ((long long) (n - m) < 0)
        cout << (long long) (m - n);
    else
        cout << (long long) (n - m);

    return 0;
}