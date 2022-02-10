//
// Created by junhyeok on 2020-07-22.
//
// https://www.acmicpc.net/problem/1927
#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    set<int> s;
    map<int, int> m;

    for (cin >> n; n > 0; n--) {
        int c;
        scanf("%d", &c);

        if (!c) {
            if (s.empty())
                printf("%d\n", 0);
            else {
                printf("%d\n", *s.begin());
                m[*s.begin()]--;

                if(m[*s.begin()] == 0) {
                    s.erase(s.begin());
                }
            }
        } else if (c > 0) {
            m[c]++;
            s.insert(c);
        }
    }
}