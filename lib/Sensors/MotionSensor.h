#ifndef ARDUINOLIBS_MOTIONSENSOR_H
#define ARDUINOLIBS_MOTIONSENSOR_H
#include "Arduino.h"

namespace sensors {
    template<typename ACCELERATION_SENSOR, typename CLOCK>
    class MotionSensor {
        const ACCELERATION_SENSOR &accelerationSensor;
        const CLOCK &clock;
        unsigned long previousTime;
        double currentSpeed = 0.0;
        double currentDistance = 0.0;
    public:
        MotionSensor(const ACCELERATION_SENSOR &accelerationSensor, const CLOCK &clock) : accelerationSensor(
                accelerationSensor), clock(clock) {
            previousTime = clock();
        }

        double getSpeed() {
            return currentSpeed;
        }

        double getDistance() {
            return currentDistance;
        }

        void process() {
            double dt = clock() - previousTime;
            currentSpeed += accelerationSensor() * dt;
            currentDistance += currentSpeed * dt;
            previousTime += dt;
        }
    };
}
#endif //ARDUINOLIBS_MOTIONSENSOR_H
