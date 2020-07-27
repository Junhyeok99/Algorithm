//
// Created by apple on 2020-07-26.
//
// https://www.acmicpc.net/problem/11279
#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    set<int> s;
    map<int, int> m;

    for (cin >> n; n > 0; n--) {
        int t;
        scanf("%d", &t);

        if(!t) {
            if(s.empty())
                printf("0\n");
            else {
                printf("%d\n", *s.rbegin());
                m[*s.rbegin()]--;
                if(m[*s.rbegin()] == 0)
                    s.erase(*s.rbegin());
            }
        } else {
            s.insert(t);
            m[t]++;
        }
    }
}