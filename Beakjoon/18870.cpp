//
// Created by junhyeok on 2020-07-30.
//
// https://www.acmicpc.net/problem/18870
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    vector<int> v;
    map<int, int> m;
    set<int> s;

    for (cin >> n; n > 0; n--) {
        int t;
        scanf("%d", &t);
        v.push_back(t);
        s.insert(t);
    }

    int c = 0;
    for (auto i: s) {
        m[i] = c++;
    }

    for (auto i: v)
        printf("%d ", m[i]);

}