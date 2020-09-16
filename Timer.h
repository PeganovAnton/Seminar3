//
// Created by Olga on 16/09/2020.
//

#ifndef TTIMER_TIMER_H
#define TTIMER_TIMER_H
/*
 * Useful Links
 * https://habr.com/ru/post/324984/
 * */

#include <chrono>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
using namespace std::chrono;
class Timer {
private:
    time_point<steady_clock> start;
    time_point<steady_clock> end;
    milliseconds ms = std::chrono::milliseconds(0);
public:
    Timer();
    void start_timer();
    void stop_timer();
    void clear_timer();
    void print_time();
    int get_elapsed_time(char fmt);
    string format_elapsed_time();
};

#endif //TTIMER_TIMER_H
