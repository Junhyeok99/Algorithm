//
// Created by junhyeok on 2022/03/23
//
// https://www.acmicpc.net/problem/15829
#include "iostream"
#include "cmath"

#define M 1234567891

using namespace std;

int main() {
    int l;
    long long hash = 0;

    cin >> l;

    // 각 자리수 마다 곱셈
    for (int i = 0; i < l; i++) {
        char n;
        cin >> n;

        // char -> int 코드로 변경
        int a_i = (int) n - 96;

        // 각 자리에 곱해지는 계수
        long long r_i = 1;
        int j = i;
        while (true) {
            if (j == 0) {
                break;
            }

            // 5보다 클 경우 long long 범위를 벗어나므로 나눠서 modular 값을 구한다.
            if (j <= 5) {
                r_i *= (long long) pow(31, j) % M;
                j = 0;
            } else {
                r_i *= (long long) pow(31, 5) % M;
                j -= 5;
            }

            r_i %= M;
        }

        hash += (long long) (a_i * r_i) % M;
    }

    cout << hash % M;

    return 0;
}