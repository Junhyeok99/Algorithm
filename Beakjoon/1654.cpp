//
// Created by junhyeok on 2020-07-15.
//
// https://www.acmicpc.net/problem/1654
#include <iostream>
#include <vector>

using namespace std;

long long find(const vector<long long> &v, int cnt) {
    long long start = 1;
    long long end = INT32_MAX;

    while(start + 1 < end) {
        long long mid = (start + end) / 2;
        long long sum = 0;
        for(auto i : v) {
            sum += i / mid;
        }
        if(sum < cnt)
            end = mid - 1;
        else if (sum >= cnt)
            start = mid;
    }

    long long sum1 = 0, sum2 = 0;
    for(auto i : v) {
        sum1 += i / ((start + end) / 2);
        sum2 += i / ((start + end + 1) / 2);
    }

    return sum2 >= cnt ? (start + end + 1) / 2 : (start + end) / 2;
}

int main() {
    int k, n;
    vector<long long> v;

    for(cin >> k >> n; k > 0; k--) {
        long long t;
        scanf("%lld", &t);
        v.push_back(t);
    }

    cout << find(v, n);
}