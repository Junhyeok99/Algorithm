//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/11050
#include <iostream>

using namespace std;

int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int mul_a2b(int a, int b) {
    int m = 1;
    for (int i = a; i >= b; i--) {
        m *= i;
    }
    return m;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << mul_a2b(n, n - k + 1) / fact(k);
}