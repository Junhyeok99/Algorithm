//
// Created by 정준혁 on 2022/02/11.
//
// https://programmers.co.kr/learn/courses/30/lessons/42627?language=cpp

#include "disk_controller.h"
#include "../../utils/utils.h"
#include <algorithm>
#include <iostream>
#include <cstdio>

bool cmp(vector<int> a, vector<int> b) {
    return a[0] < b[0] || (a[0] == b[0] && (a[1] < b[1]));
}

int solution(vector<vector<int>> jobs) {
    int time = 0;
    int answer = 0;
//     sort input
    sort(jobs.begin(), jobs.end(), cmp);

//     Check if input is sorted
//    for(auto & job : jobs) {
//        print_vector(job);
//        cout << endl;
//    }

//    완료된 job의 index 저장
    int job_index = 0;
    int done = 0;
//    사용 가능한 schedule의 pool
    vector<vector<int>> pool;

    while (done != jobs.size()) {
        vector<vector<int>> bucket;
        printf("<%d\n", time);
        for (int i = job_index; i < jobs.size(); i++) {
            if (jobs[i][0] > time) {
                break;
            } else {
                bucket.push_back(jobs[i]);
                pool.push_back(jobs[i]);
                job_index++;
            }
        }
        printf("pool size: %ld\n", pool.size());
        printf("done: %d\n", done);
        if (pool.empty()) {
            time = jobs[job_index][0];
            continue;
        } else {
            bucket.clear();
            int shortest = pool[0][1];
            auto shortest_it = pool.begin();
            printf("shortest: %d\n", shortest);
            for (auto it = shortest_it; it != pool.end(); it++) {
                if(it->at(1) < shortest) {
                    shortest = it->at(1);
                    shortest_it = it;
                }
            }

            time += shortest;
            answer += time - shortest_it->at(0);
            pool.erase(shortest_it);
            done++;
        };
        printf("answer: %d\n", answer);
        printf("%d>\n", time);
    }

    return answer / jobs.size();
}