//
// Created by junhyeok on 2020-07-22.
//
// https://www.acmicpc.net/problem/1764
#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m;
    set<string> s;
    set<string> ans;

    for (cin >> n >> m; n > 0; n--) {
        char name[21];
        scanf("%s", name);
        string str(name);

        s.insert(str);
    }

    for (; m > 0; m--) {
        char name[21];
        scanf("%s", name);
        string str(name);

        if(s.find(str) != s.end())
            ans.insert(str);
    }

    printf("%d\n", ans.size());
    for(const auto& i : ans)
        printf("%s\n", i.c_str());
}