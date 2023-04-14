//
// Created by junhyeok on 2022/06/26
//
// https://www.acmicpc.net/problem/11718
#include "iostream"
#include "string"

using namespace std;

int main() {
    while (true) {
        char c;
        c = (char) getchar();
        if (feof(stdin) != 0) {
            break;
        }
        cout << c;
    }

    return 0;
}