//
// Created by junhyeok on 2022/03/23
//
// https://www.acmicpc.net/problem/1929
#include <iostream>
#include <set>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    // set 2 as prime number
    set<int> prime = {2};

    cin >> a >> b;

    // check odd number has prime
    for (int i = 3; i <= b; i += 2) {
        // check if number is still boolean
        bool chk = true;

        // search through prime numbers
        for (auto j: prime) {
            // prime that smaller than square root of current number
            if (j <= sqrt(i)) {
                if (i % j == 0) {
                    chk = false;
                    break;
                }
            } else {
                break;
            }
        }

        // if number is still boolean, add prime set
        if (chk)
            prime.insert(i);
    }

    for (auto i: prime) {
        if (i >= a && i <= b) {
            printf("%d\n", i);
        }
    }
}