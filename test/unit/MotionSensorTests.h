//
// Created by Fedorov, Alex on 6/25/21.
//

#ifndef ARDUINOLIBS_MOTIONSENSORTEST_H
#define ARDUINOLIBS_MOTIONSENSORTEST_H

#include <unity.h>
#include <MotionSensor.h>
#include "types.h"

namespace sensors {

    void speedAndDistance() {
        StaticAccelerationSensor accelerationSensor{0.0};
        FixedClock clock{0};
        MotionSensor<StaticAccelerationSensor, FixedClock> motionSensor{accelerationSensor, clock};
        motionSensor.process();
        TEST_ASSERT_EQUAL_DOUBLE(0.0, motionSensor.getSpeed());
        TEST_ASSERT_EQUAL_DOUBLE(0.0, motionSensor.getDistance());

        accelerationSensor.setValue(1.0);
        clock.setValue(1);

        motionSensor.process();
        TEST_ASSERT_EQUAL_DOUBLE(1.0, motionSensor.getSpeed());
        TEST_ASSERT_EQUAL_DOUBLE(1.0, motionSensor.getDistance());

        accelerationSensor.setValue(1.0);
        clock.setValue(2);

        motionSensor.process();
        TEST_ASSERT_EQUAL_DOUBLE(2.0, motionSensor.getSpeed());
        TEST_ASSERT_EQUAL_DOUBLE(3.0, motionSensor.getDistance());

        accelerationSensor.setValue(0.0);
        clock.setValue(3);

        motionSensor.process();
        TEST_ASSERT_EQUAL_DOUBLE(2.0, motionSensor.getSpeed());
        TEST_ASSERT_EQUAL_DOUBLE(5.0, motionSensor.getDistance());
    }


    void tests() {
        RUN_TEST(speedAndDistance);
    }
}
#endif //ARDUINOLIBS_MOTIONSENSORTEST_H
