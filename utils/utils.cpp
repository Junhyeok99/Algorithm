//
// Created by 정준혁 on 2022/02/11.
//

#include "utils.h"
#include <iostream>
#include <cstdio>

void print_vector(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
        printf("%d, ", v[i]);
}

void print_vector(vector<char> v) {
    for (int i = 0; i < v.size(); i++)
        printf("%c, ", v[i]);
}