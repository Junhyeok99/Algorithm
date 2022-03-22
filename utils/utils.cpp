//
// Created by 정준혁 on 2022/02/11.
//
#include <cstdio>
#include <iostream>

#include "utils.h"

void print_vector(const vector<int>& v) {
    for (int i : v)
        printf("%d, ", i);
}

void print_vector(const vector<char>& v) {
    for (char i : v)
        printf("%c, ", i);
}