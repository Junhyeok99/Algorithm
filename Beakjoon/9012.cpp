//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/9012
#include <iostream>

using namespace std;

bool vps(char *str, int c) {
    int d = 0;

    while(true) {
        if(str[c] == '\0')
            break;
        d += (str[c] == '(' ? 1 : -1);
        c++;
       if(d < 0)
           return false;
    }

    return d == 0;
}

int main() {
    int n;

    for(cin >> n; n > 0; n--) {
        char arr[51];
        cin >> arr;

        printf("%s", vps(arr, 0) ? "YES\n" : "NO\n");
    }
}