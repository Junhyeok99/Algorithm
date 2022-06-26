//
// Created by junhyeok on 2022/06/25
//
// https://www.acmicpc.net/problem/2744
#include "iostream"

using namespace std;

int main() {
    string s;
    cin >> s;
    for (char &i: s) {
        if (i <= 'Z') {
            i += 32;
        } else {
            i -= 32;
        }
    }

    cout << s;

    return 0;
}