//
// Created by Olga on 16/09/2020.
//

#include "Task.h"
Task::Task(string tname) {
    timer = new Timer ();
    name = tname;
    time_spent = "00:00:00";
}
void Task::start() {
    timer->start_timer();
    time_spent = timer->format_elapsed_time();
};
void Task::stop() {
    timer->stop_timer();
    time_spent = timer->format_elapsed_time();
};
void Task::statistics() {
    cout << name << " " << time_spent << endl;
};
int Task::time_spend() {
    return timer->get_elapsed_time('s');
};

