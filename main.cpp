#include "Timer.h"
#include <thread>

int main() {
    cout <<"--Timer checks--"<<endl;

    class Timer mtimer;
    mtimer.start_timer();
    this_thread::sleep_for(seconds (1));
    mtimer.stop_timer();
    mtimer.print_time();
    string rime = mtimer.format_elapsed_time();
    cout << rime << endl;

    mtimer.start_timer();
    std::this_thread::sleep_for(seconds (1));
    mtimer.stop_timer();
    mtimer.print_time();
    rime = mtimer.format_elapsed_time();
    cout << rime << endl;
    mtimer.start_timer();
    std::this_thread::sleep_for(seconds (1));
    mtimer.stop_timer();
    mtimer.print_time();
    rime = mtimer.format_elapsed_time();
    cout << rime << endl;
    mtimer.clear_timer();
    mtimer.print_time();
    cout <<"--Timer checks End--" <<endl<<endl;
    cout <<"Hello World" <<endl;
    return 0;
}
