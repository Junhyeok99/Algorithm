//
// Created by junhyeok on 2022/06/21
//
// https://www.acmicpc.net/problem/10699
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    auto rawTime = time(nullptr);
    auto pTimeInfo = localtime(&rawTime);

    int year = pTimeInfo->tm_year + 1900;
    int month = pTimeInfo->tm_mon + 1;
    int day = pTimeInfo->tm_mday;

    cout << year << "-" << (month < 10 ? "0" : "") + to_string(month) << "-" << (day < 10 ? "0" : "") + to_string(day);
    return 0;
}