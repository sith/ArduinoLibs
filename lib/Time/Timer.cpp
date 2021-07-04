//
// Created by Fedorov, Alex on 10/28/20.
//

#include "Timer.h"
#include <Arduino.h>

bool time::Timer::isReady() {
    unsigned long currentTime = clock();

    if (previousTime + duration > currentTime) {
        return false;
    }

    previousTime = currentTime;
    return true;
}

void time::Timer::start() {
    previousTime = millis();
}

time::Timer::Timer(int duration, const time::Clock &clock) : duration(duration), clock(clock) {}
