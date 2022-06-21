//
// Created by junhyeok on 2022/03/29
//
// https://www.acmicpc.net/problem/2579
#include <iostream>
#include "vector"
#include "set"
#include "utility"

#define N pair<int, pair<int, int>>

using namespace std;

int main() {
    vector<int> stairs;
    vector<N> score_vector;
    set<N> score_set;

    int max_score = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int point;
        cin >> point;
        stairs.push_back(point);
    }

    N init = {0, {0, 0}};
    score_vector.push_back(init);
    score_set.insert(init);

    while (true) {
        if (score_vector.empty())
            break;

        vector<N> temp_score_vector;
        for (auto &i: score_vector) {
            if (i.second.second == stairs.size() && i.second.first < 3 && i.first > max_score) {
                max_score = i.first;
                continue;
            }

            if (i.second.second >= stairs.size() || i.second.first >= 3)
                continue;

            if (i.second.second + 1 <= stairs.size()) {
                N key = {i.first + stairs[i.second.second],
                         {i.second.first + 1, i.second.second + 1}};
                if (score_set.find(key) == score_set.end()) {
                    temp_score_vector.push_back(key);
                    score_set.insert(key);
                }
            } else
                continue;

            if (i.second.second + 2 <= stairs.size()) {
                N key = {i.first + stairs[i.second.second + 1],
                         {1, i.second.second + 2}};
                if (score_set.find(key) == score_set.end()) {
                    temp_score_vector.push_back(key);
                    score_set.insert(key);
                }
            } else
                continue;
        }

        score_vector.clear();
        for (auto &i: temp_score_vector) {
            score_vector.push_back(i);
        }
    }

    cout << max_score;

    return 0;
}