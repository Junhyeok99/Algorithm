//
// Created by junhyeok on 2022/07/11
//
// https://www.acmicpc.net/problem/9086
#include "iostream"

using namespace std;

int main() {
    int n;

    for (cin >> n; n > 0; n--) {
        string s;
        cin >> s;

        cout << s[0] << s[s.length() - 1] << endl;
    }


    return 0;
}