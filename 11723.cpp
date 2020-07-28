//
// Created by apple on 2020-07-28.
//
// https://www.acmicpc.net/problem/11723
#include <iostream>

using namespace std;

int main() {
    int n;
    unsigned int m = 0;

    for (cin >> n; n > 0; n--) {
        int t;
        char com[10];
        scanf("%s %d", com, &t);

        string str(com);
        if (str.find("add") != string::npos) {
            m |= 1 << t;
        } else if (str.find("all") != string::npos) {
            m = 2097150;
        } else if (str.find("remove") != string::npos) {
            m &= (2097150 - (1 << t));
        } else if (str.find("check") != string::npos) {
            int i = 1 << t;
            if(!(m & i)) {
                printf("0\n");
            } else {
                printf("1\n");
            }
        } else if (str.find("toggle") != string::npos) {
            unsigned int t1 = m | (1 << t);
            unsigned int t2 = m & (~(1 << t));
            if(m == t1)
                m = t2;
            else
                m = t1;
        } else if (str.find("empty") != string::npos) {
            m = 0;
        }
    }
}