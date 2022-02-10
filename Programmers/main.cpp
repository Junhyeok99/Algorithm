//
// Created by 정준혁 on 2022/02/11.
//
#include "disk_controller/disk_controller.h"
#include "../utils/utils.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> input = {{0, 3}, {1, 9}, {2, 6}};
    cout << solution(input) << " <-answer" << endl;
    return 0;
}
