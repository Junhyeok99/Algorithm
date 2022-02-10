//
// Created by apple on 2020-07-08.
//
// https://www.acmicpc.net/problem/2920
#include <iostream>

using namespace std;

int main() {
    int ans = 0;
    int before;
    cin >> before;

    for (int i = 1; i < 8; i++) {
        int curr;
        cin >> curr;
        ans += (before - curr) == 1 ? 1 : ((before - curr) == -1 ? -1 : 0);
        before = curr;
    }

    if (ans == -7)
        cout << "ascending";
    else if (ans == 7)
        cout << "descending";
    else
        cout << "mixed";

}
