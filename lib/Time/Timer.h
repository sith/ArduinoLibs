//
// Created by Fedorov, Alex on 10/28/20.
//

#ifndef TIMER_H
#define TIMER_H

#include "Clock.h"

namespace time {
    class Timer {
        int duration;
        unsigned long previousTime = 0;
        const Clock &clock;

    public:
        Timer(int duration, const Clock &clock);

        void start();

        bool isReady();
    };
}

#endif //TIMER_H
