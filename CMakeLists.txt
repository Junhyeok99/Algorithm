cmake_minimum_required(VERSION 3.5)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm utils/utils.cpp Programmers/main.cpp Programmers/divide_number_cards/divide_number_cards.cpp)