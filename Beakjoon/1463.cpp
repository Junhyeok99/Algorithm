//
// Created by junhyeok on 2020-07-09.
//
// https://www.acmicpc.net/problem/1463
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    int n;
    int i = 0;
    cin >> n;
    if(n == 1) {
        cout << 0;
        return 0;
    }
    m[n] = i;
    while(true) {
        bool chk = false;
        for(auto p : m) {
            if(p.second == i) {
                int curr = p.first;

                if(curr % 3 == 0 && (m[curr / 3] > i + 1 || m[curr / 3] == 0)) {
                    m[curr / 3] = i + 1;
                    if(curr / 3 == 1) {
                        chk = true;
                        break;
                    }
                }
                if(curr % 2 == 0 && (m[curr / 2] > i + 1 || m[curr / 2] == 0)) {
                    m[curr / 2] = i + 1;
                    if(curr / 2 == 1) {
                        chk = true;
                        break;
                    }
                }

                if(m[curr - 1] > i + 1 || m[curr - 1] == 0) {
                    m[curr - 1] = i + 1;
                    if(curr - 1 == 1) {
                        chk = true;
                        break;
                    }
                }
            }
        }
        i++;
        if(chk) {
            cout << i;
            break;
        }
    }
}

