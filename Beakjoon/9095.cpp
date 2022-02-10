//
// Created by apple on 2020-07-10.
//
// https://www.acmicpc.net/problem/9095
#include <iostream>

using namespace std;

int calc(int k) {
    switch (k) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 4;
        default:
            int ret = 0;
            if (k - 1 > 0)
                ret += calc(k - 1);
            if (k - 2 > 0)
                ret += calc(k - 2);
            if (k - 3 > 0)
                ret += calc(k - 3);
            return ret;
    }
}

int main() {
    int t;

    for (cin >> t; t > 0; t--) {
        int n;
        cin >> n;
        cout << calc(n) << endl;
    }
}