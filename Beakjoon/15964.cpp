//
// Created by junhyeok on 2022/07/20
//
// https://www.acmicpc.net/problem/15964
#include "iostream"

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    cout << (long long) ((a + b) * (a - b));

    return 0;
}