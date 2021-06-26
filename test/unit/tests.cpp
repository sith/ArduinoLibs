//
// Created by Fedorov, Alex on 4/29/21.
//
#include <Arduino.h>
#include <unity.h>
#include "SmoothingFunctionTest.h"

void setup() {}

void loop() {
    UNITY_BEGIN();
    smoothingFunction::tests();
    UNITY_END();
}
