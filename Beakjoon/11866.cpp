//
// Created by apple on 2020-07-13.
//
// https://www.acmicpc.net/problem/11866
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, k;
    queue<int> q;
    vector<int> v;

    cin >> n >> k;
    for(int i = 0; i < n ; i++)
        q.push(i+1);

    cout << "<";

    int cnt = 1;
    while(!q.empty()) {
        if(cnt == k) {
            cout << q.front();
            if(q.size() != 1)
                cout << ", ";
            q.pop();
            cnt = 1;
        } else {
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }

    cout << ">";
}