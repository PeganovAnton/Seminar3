//
// Created by Olga on 16/09/2020.
//

#ifndef TTIMER_TASK_H
#define TTIMER_TASK_H
#include "Timer.h"

class Task {
private:
    class Timer *timer;
public:
    string name;
    string time_spent;
    Task(string tname);
    void start();
    void stop();
    void statistics();
    int time_spend();

};


#endif //TTIMER_TASK_H
