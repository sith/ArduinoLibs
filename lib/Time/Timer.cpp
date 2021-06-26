//
// Created by Fedorov, Alex on 10/28/20.
//

#include "Timer.h"
#include <Arduino.h>

bool time::Timer::isReady() {
    unsigned long currentTime = millis();

    if (previousTime + duration > currentTime) {
        return false;
    }

    previousTime = currentTime;
    return true;
}

time::Timer::Timer(int duration) : duration(duration) {}

void time::Timer::start() {
    previousTime = millis();
}
