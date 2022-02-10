//
// Created by junhyeok on 2020-07-29.
//
// https://www.acmicpc.net/problem/11726
#include <iostream>
#include <vector>

using namespace std;

long long rec(int n, vector<long long> &v) {
    if(n == 0)
        return 0;
    else if(v[n] != 0)
        return v[n];
    else {
        v[n-2] = rec(n - 2, v);
        v[n-1] = rec(n - 1, v);
        return (v[n-1] + v[n-2]) % 10007;
    }
}

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);
    v[1] = 1;
    v[2] = 2;
    cout << (rec(n, v) % 10007);
}
