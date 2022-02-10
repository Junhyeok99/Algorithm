//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/2609
#include <iostream>

using namespace std;

int gcd(int i, int j) {
    return j ? gcd(j, i % j) : i;
}

int main() {
    int n, m;

    cin >> n >> m;
    int ans = gcd(n > m ? n : m, n > m ? m : n);

    cout << ans << endl << n * m / ans;

}