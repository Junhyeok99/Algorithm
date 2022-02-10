//
// Created by junhyeok on 2020-07-28.
//
// https://www.acmicpc.net/problem/11399
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int sum = 0;
    vector<int> v;

    for (cin >> n; n > 0; n--) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    for(int i = v.size(); i > 0; i--)
        sum += i * v[v.size() - i];

    cout << sum;
}