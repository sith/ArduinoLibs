#ifndef ARDUINOLIBS_INTEGRALFUNCTION_H
#define ARDUINOLIBS_INTEGRALFUNCTION_H

namespace calculus {
    class IntegralFunction {
        double integrationResult = 0.0;
    public:
        double operator()(double dx, double dt) {
            integrationResult += dx * dt;
            return integrationResult;
        };
    };
}

#endif //ARDUINOLIBS_INTEGRALFUNCTION_H
