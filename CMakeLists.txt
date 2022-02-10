cmake_minimum_required(VERSION 3.5)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm Programmers/main.cpp utils/utils.cpp Programmers/disk_controller/disk_controller.cpp)