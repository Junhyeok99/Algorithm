//
// Created by junhyeok on 2020-07-26.
//
// https://www.acmicpc.net/problem/7662
#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    int t;
    for (scanf("%d", &t); t > 0; t--) {
        int k;
        set<int> s;
        map<int, int> m;
        for (scanf("%d", &k); k > 0; k--) {
            char c;
            int n;
            scanf("%c %d", &c, &n);
            if (c == '\n') {
                k++;
                continue;
            }
            if (c == 'I') {
                m[n]++;
                s.insert(n);
            } else if (c == 'D' && !s.empty()) {
                if (n == -1) {
                    m[*s.begin()]--;
                    if (!m[*s.begin()])
                        s.erase(*s.begin());
                } else if (n == 1) {
                    m[*s.rbegin()]--;
                    if (!m[*s.rbegin()])
                        s.erase(*s.rbegin());
                }
            }
        }
        if (s.empty()) {
            printf("EMPTY\n");
        } else {
            printf("%d %d\n", *s.rbegin(), *s.begin());
        }
    }
}