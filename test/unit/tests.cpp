//
// Created by Fedorov, Alex on 4/29/21.
//
#include <Arduino.h>
#include <unity.h>
#include "SmoothingFunctionTest.h"
#include "TimerTest.h"

void setup() {}

void loop() {
    UNITY_BEGIN();
    smoothingFunction::tests();
    time::tests();
    UNITY_END();
}
