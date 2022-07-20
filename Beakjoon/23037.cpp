//
// Created by junhyeok on 2022/07/11
//
// https://www.acmicpc.net/problem/23037
#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int a, sum = 0;

    cin >> a;

    while (a != 0) {
        sum += (int) round(pow(a % 10, 5));
        a /= 10;
    }

    cout << sum;

    return 0;
}