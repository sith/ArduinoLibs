#ifndef ARDUINOLIBS_TYPES_H
#define ARDUINOLIBS_TYPES_H

#include "StaticValueFunction.h"

using StaticAccelerationSensor = StaticValueFunction<double>;
using FixedClock = StaticValueFunction<unsigned long>;

#endif
