//
// Created by junhyeok on 2020-07-07.
//
// https://www.acmicpc.net/problem/11053

#include <iostream>
#include <vector>gi

using namespace std;

int main() {
    int n;
    vector<int> v;
    vector<int> cnt;

    for(cin >> n; n > 0; n--) {
        int t;
        cin >> t;
        v.push_back(t);
        cnt.push_back(0);
    }

    for(int i = 0; i < v.size(); i++) {
        int max = cnt[i];
        for(int j = 0; j < i; j++) {
            if(v[i] > v[j] && max < cnt[j])
                max = cnt[j];
        }
        cnt[i] = max + 1;
    }

    int ans = 0;
    for(auto m: cnt) {
        if(m > ans)
            ans = m;
    }
    cout << ans;
}
