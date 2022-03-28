//
// Created by junhyeok on 2022/03/29
//
// https://www.acmicpc.net/problem/18111
#include "iostream"
#include "vector"

using namespace std;

#define DESTROY_BLOCK 2
#define PUT_BLOCK 1

int get_time(const vector<vector<int>>& v, int height) {
    int sum = 0;

    for (auto &i: v) {
        for (int j: i) {
            int diff = height - j;

            if (diff > 0)
                sum += diff * PUT_BLOCK;
            else
                sum -= diff * DESTROY_BLOCK;
        }
    }

    return sum;
}

int main() {
    int sum = 0;
    int n, m, b;
    int min = 257, max = -1;
    vector<vector<int>> field;

    cin >> n >> m >> b;

    for (int i = 0; i < n; i++) {
        field.emplace_back();
        for (int j = 0; j < m; j++) {
            int t;
            cin >> t;

            field[i].push_back(t);
            sum += t;
            if (min > t)
                min = t;
            if (max < t)
                max = t;
        }
    }

    sum += b;
    if (max > (sum / (m * n)))
        max = sum / (m * n);
    if(max > 256)
        max = 256;

    int height = min;
    int time = get_time(field, height);

    for (int i = min + 1; i <= max; i++) {
        int temp_time = get_time(field, i);
        if (temp_time <= time) {
            time = temp_time;
            height = i;
        }
    }

    cout << time << " " << height;

    return 0;
}