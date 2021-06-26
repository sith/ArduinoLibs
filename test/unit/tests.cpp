//
// Created by Fedorov, Alex on 4/29/21.
//
#include <Arduino.h>
#include <unity.h>
#include "SmoothingFunctionTest.h"
#include "TimerTest.h"
#include "IntegralFunctionTest.h"
#include "MotionSensorTests.h"

void setup() {}

void loop() {
    UNITY_BEGIN();
    smoothingFunction::tests();
    time::tests();
    calculus::tests();
    sensors::tests();
    UNITY_END();
}
