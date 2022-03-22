//
// Created by junhyeok on 2022/03/23
//
// https://www.acmicpc.net/problem/2108
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int sum = 0, max = -4000, min = 4000, n;
    // input 배열
    vector<short> a;
    // input의 빈도를 저장하는 map
    map<short, int> m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        if(t < min)
            min = t;
        if(t > max)
            max = t;
        sum += t;
        a.push_back(t);
        m[t]++;
    }

    sort(a.begin(), a.end());

    // float round 시 -0 issue로 int 타입 변경
    cout << (int)(round((double)sum / n)) << endl;
    cout << a[n/2] << endl;
    a.clear();
    sum = 0; //value

    // 최다 빈도수 확인
    for(auto i: m) {
        if(i.second > sum)
            sum = i.second;
    }
    // 최다 빈도로 나온 숫자들 배열에 저장
    for(auto i : m) {
        if(i.second == sum)
            a.push_back(i.first);
    }

    if(a.size() == 1)
        cout << a[0] << endl;
    else
        cout << a[1] << endl;

    cout << max - min << endl;
}