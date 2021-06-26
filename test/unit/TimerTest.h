
#ifndef TIMERTEST1_H
#define TIMERTEST1_H

#include "unity.h"
#include "Timer.h"
#include "Arduino.h"

namespace time {
    void test() {
        Timer timer{250};
        timer.start();
        delay(50);
        TEST_ASSERT_FALSE(timer.isReady());
        delay(250);
        TEST_ASSERT(timer.isReady())
    }

    void tests() {
        RUN_TEST(test);
    }

};
#endif //TIMERTEST1_H
