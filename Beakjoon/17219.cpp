//
// Created by junhyeok on 2022/07/21
//
// https://www.acmicpc.net/problem/17219
#include "iostream"
#include "map"
#include "string"

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b;
    map<string, string> m;

    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        m.insert(pair<string, string>(s1, s2));
    }

    for (int i = 0; i < b; i++) {
        string s;
        cin >> s;

        cout << m.find(s)->second << '\n';
    }

    return 0;
}