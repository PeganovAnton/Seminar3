#include "Timer.h"
#include <thread>
#include <fstream>

int main() {
    cout <<"--Timer checks--"<<endl;

    class Timer mtimer;
    mtimer.start_timer();
    std::this_thread::sleep_for(1s);
    mtimer.stop_timer();
    mtimer.print_time();
    string rime = mtimer.format_elapsed_time();

    mtimer.start_timer();
    std::this_thread::sleep_for(2s);
    mtimer.stop_timer();
    mtimer.print_time();
    rime = mtimer.format_elapsed_time();
    mtimer.start_timer();
    std::this_thread::sleep_for(3s);
    mtimer.stop_timer();
    mtimer.print_time();
    rime = mtimer.format_elapsed_time();
    mtimer.clear_timer();
    mtimer.print_time();
    cout <<"--Timer checks End--" <<endl<<endl;
    cout <<"Hello World" <<endl;
    return 0;
}