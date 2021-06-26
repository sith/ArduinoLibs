//
// Created by Fedorov, Alex on 10/28/20.
//

#ifndef TIMER_H
#define TIMER_H
namespace time {
    class Timer {
        int duration;
        unsigned long previousTime = 0;

    public:
        explicit Timer(int duration);

        void start();

        bool isReady();
    };
}

#endif //TIMER_H
