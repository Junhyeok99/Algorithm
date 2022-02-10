//
// Created by junhyeok on 2020-07-10.
//
// https://www.acmicpc.net/problem/1920
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find(const vector<int> &v, int tar) {
    int start = 0;
    int end = v.size() - 1;

    while(start <= end) {
        int mid = (start + end) / 2;
        if(v[mid] == tar)
            return 1;
        else if(v[mid] > tar)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}

int main() {
    int n, m;
    vector<int> v;

    for (cin >> n; n > 0; n--) {
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (cin >> m; m > 0; m--) {
        int b;
        scanf("%d", &b);
        printf("%d\n", find(v, b));
    }
}
