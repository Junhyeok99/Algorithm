//
// Created by apple on 2020-07-31.
//
// https://www.acmicpc.net/problem/1149
#include <iostream>
#include <vector>

using namespace std;

typedef struct rgb {
    int r;
    int g;
    int b;
} RGB;

int main() {
    int n;
    vector<RGB> v;
    vector<RGB> calc;

    for (cin >> n; n > 0; n--) {
        int r, g, b;
        scanf("%d %d %d", &r, &g, &b);
        v.push_back(RGB{r, g, b});
    }

    calc.resize(v.size());
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            calc[i] = v[i];
            continue;
        }

        if (calc[i - 1].g + v[i].r < calc[i - 1].b + v[i].r)
            calc[i].r = calc[i - 1].g + v[i].r;
        else
            calc[i].r = calc[i - 1].b + v[i].r;

        if (calc[i - 1].r + v[i].g < calc[i - 1].b + v[i].g)
            calc[i].g = calc[i - 1].r + v[i].g;
        else
            calc[i].g = calc[i - 1].b + v[i].g;

        if (calc[i - 1].r + v[i].b < calc[i - 1].g + v[i].b)
            calc[i].b = calc[i - 1].r + v[i].b;
        else
            calc[i].b = calc[i - 1].g + v[i].b;
    }

    int min = calc[calc.size() - 1].r;
    if (min > calc[calc.size() - 1].g)
        min = calc[calc.size() - 1].g;
    if (min > calc[calc.size() - 1].b)
        min = calc[calc.size() - 1].b;

    cout << min;
    return 0;
}