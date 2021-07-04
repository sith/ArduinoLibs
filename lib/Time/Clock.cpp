#include <Arduino.h>
#include "Clock.h"

unsigned long time::Clock::operator()() const {
    return millis();
}
