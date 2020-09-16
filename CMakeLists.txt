cmake_minimum_required(VERSION 3.17)
project(TaskTimer)

set(CMAKE_CXX_STANDARD 11)

add_executable(TaskTimer
                Task.cpp
                Task.h
                Timer.h
                Timer.cpp
                main.cpp)