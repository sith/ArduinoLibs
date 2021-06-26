//
// Created by Fedorov, Alex on 6/25/21.
//

#ifndef BOATCOMPUTER_MOTIONSENSOR_H
#define BOATCOMPUTER_MOTIONSENSOR_H
namespace sensors {
    template<typename ACCELERATION_SENSOR>
    class MotionSensor {
    public:
        MotionSensor(const ACCELERATION_SENSOR &accelerationSensor) : accelerationSensor(accelerationSensor) {}

    private:
        const ACCELERATION_SENSOR &accelerationSensor;
    };
}
#endif //BOATCOMPUTER_MOTIONSENSOR_H
