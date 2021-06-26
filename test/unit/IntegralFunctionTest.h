//
// Created by Fedorov, Alex on 6/25/21.
//

#ifndef ARDUINOLIBS_INTEGRALFUNCTIONTEST_H
#define ARDUINOLIBS_INTEGRALFUNCTIONTEST_H

#include <unity.h>
#include <IntegralFunction.h>

namespace calculus {

    void integration() {

        IntegralFunction integralFunction;

        double result = integralFunction(2.0, 1.0);
        TEST_ASSERT_EQUAL_DOUBLE(2.0, result);

        result = integralFunction(3.0, 2.0);
        TEST_ASSERT_EQUAL_DOUBLE(8.0, result);
    }


    void tests() {
        RUN_TEST(integration);
    }
}
#endif //ARDUINOLIBS_INTEGRALFUNCTIONTEST_H
