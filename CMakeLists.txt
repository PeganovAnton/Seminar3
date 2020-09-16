cmake_minimum_required(VERSION 3.12.4)
project(TaskTimer)

set(CMAKE_CXX_STANDARD 11)

add_executable( TaskTimer
                Timer.h
                Timer.cpp
                main.cpp)