//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/1259
#include <iostream>

using namespace std;

bool isPal(int n) {
    int arr[5];
    int l = 0;

    while(true) {
        arr[l] = n % 10;
        l++;
        if(n / 10 == 0)
            break;
        n = n / 10;
    }

    for(int i = 0 ; i < l; i++) {
        if(arr[i] != arr[l - 1 - i])
            return false;
    }

    return true;
}

int main() {
    while(true) {
        int in;
        scanf("%d", &in);
        if(!in)
            break;

        printf("%s", isPal(in) ? "yes\n" : "no\n");
    }
}