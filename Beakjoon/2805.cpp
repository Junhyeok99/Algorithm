//
// Created by junhyeok on 2020-07-19.
//
// https://www.acmicpc.net/problem/2805
#include <iostream>
#include <vector>

using namespace std;

int find(const vector<int> &v, int tot) {
    int start = 0;
    int end = INT32_MAX;

    while(start + 1 < end) {
        int mid = (start + end) / 2;
        long long sum = 0;

        for(auto i : v) {
            sum += (i - mid > 0) ? i - mid : 0;
        }

        if(sum >= tot) {
            start = mid;
        } else {
            end = mid - 1;
        }
    }

    long long sum = 0;
    for(auto i : v) {
        sum += (i - ((start + end + 1) / 2) > 0) ? i - ((start + end + 1) / 2) : 0;
    }

    return sum >= tot ? (start + end + 1) / 2 : (start + end) / 2;
}

int main() {
    int n, m;
    vector<int> v;

    for(cin >> n >> m; n > 0; n--) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    cout << find(v, m);
}