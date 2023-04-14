//
// Created by junhyeok on 2022/07/21
//
// https://www.acmicpc.net/problem/1676
#include "iostream"

using namespace std;

int check_zero_fact(int n, int p) {
    int t = 0, cn = n;
    if (n == 0) {
        return 0;
    }

    while (n % 2 == 0) {
        n /= 2;
        if (p > 0) {
            t++;
        }
        p--;
    }

    while (n % 5 == 0) {
        n /= 5;
        if (p < 0) {
            t++;
        }
        p++;
    }

    return t + check_zero_fact(cn - 1, p);
}

int main() {
    int n;

    cin >> n;

    cout << check_zero_fact(n, 0);

    return 0;
}