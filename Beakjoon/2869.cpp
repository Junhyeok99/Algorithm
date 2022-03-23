//
// Created by junhyeok on 2022/03/23
//
// https://www.acmicpc.net/problem/2869
#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int a, b, v;

    cin >> a >> b >> v;

    int diff = a - b;
    int before_height = v - a;

//    cout << ceil(((float)before_height / diff) + 1);

    printf("%d\n", (int)ceil(((double)before_height / diff) + 1));

    return 0;
}