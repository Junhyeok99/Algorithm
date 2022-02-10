//
// Created by 정준혁 on 2022/02/11.
//
// https://programmers.co.kr/learn/courses/30/lessons/42627?language=cpp

#include "disk_controller.h"
#include "../../utils/utils.h"
#include <algorithm>

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

//    job이 모두 done 되기 전까지 무한 반복
    while (done != jobs.size()) {
//        jobs를 탐색하며 작업 가능한 job scheduling
        for (int i = job_index; i < jobs.size(); i++) {
            if (jobs[i][0] > time) {
                break;
            } else {
                pool.push_back(jobs[i]);
                job_index++;
            }
        }

//        작업 가능한 job이 없으면 시간 경과
        if (pool.empty()) {
            time = jobs[job_index][0];
            continue;
        } else {
//            작업 가능시 가장 짧은 작업 선택
            int shortest = pool[0][1];
            auto shortest_it = pool.begin();
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
    }

//    평균값 계산
    return answer / jobs.size();
}