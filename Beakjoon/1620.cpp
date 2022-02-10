//
// Created by junhyeok on 2020-07-21.
//
// https://www.acmicpc.net/problem/1620
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m;
    map<string, int> s2i;
    map<int, string> i2s;

    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        char s[21];
        scanf("%s", s);
        string str(s);
        s2i[str] = i;
        i2s[i] = str;
    }

    for(;m > 0; m--) {
        char s[21];
        scanf("%s", s);
        string str(s);

        if('0' <= s[0] && '9' >= s[0])
            printf("%s\n", i2s[stoi(str)].c_str());
        else
            printf("%d\n", s2i[str]);
    }

    return 0;
}