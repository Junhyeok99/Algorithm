//
// Created by junhyeok on 2020-07-13.
//
// https://www.acmicpc.net/problem/10816
#include <iostream>

using namespace std;

int main() {
    int n, m;
    int *arr;

    arr = (int *)malloc(sizeof(int) * 20000001);

    for(int i = 0; i <= 20000000; i++)
        arr[i] = 0;

    for(cin >> n ; n > 0 ; n--) {
        int in;
        scanf("%d", &in);
        arr[in + 10000000]++;
    }

    for(cin >> m; m > 0; m--) {
        int in;
        scanf("%d", &in);
        printf("%d ", arr[in + 10000000]);
    }

    free(arr);
}