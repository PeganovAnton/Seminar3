#include "Timer.h"
#include <thread>
#include "Task.h"

int main() {
    cout <<"--Timer checks--"<<endl;

    class Timer mtimer;
    mtimer.start_timer();
    this_thread::sleep_for(seconds (1));
    mtimer.stop_timer();
    mtimer.print_time();
    string rime = mtimer.format_elapsed_time();

    mtimer.start_timer();
    std::this_thread::sleep_for(seconds (1));
    mtimer.stop_timer();
    mtimer.print_time();
    rime = mtimer.format_elapsed_time();
    mtimer.start_timer();
    std::this_thread::sleep_for(seconds (1));
    mtimer.stop_timer();
    mtimer.print_time();
    rime = mtimer.format_elapsed_time();
    mtimer.clear_timer();
    mtimer.print_time();
    cout <<"--Timer checks End--" <<endl<<endl;
    cout <<"Hello World" <<endl;

    cout <<"--Task checks--" <<endl<<endl;
    class Task *mtask = new Task("seminar3");
    mtask->statistics();
    mtask->start();
    std::this_thread::sleep_for(seconds(4));
    mtask->stop();
    mtask->statistics();
    cout <<"seconds spent on " <<mtask->name <<" " <<mtask->time_spend()<<endl;
    cout <<"--Task checks End--" <<endl<<endl;
    return 0;
}