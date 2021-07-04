#ifndef ARDUINOLIBS_CLOCK_H
#define ARDUINOLIBS_CLOCK_H

namespace time {
    class Clock {
    public:
        unsigned long operator()() const;
    };
}

#endif //ARDUINOLIBS_CLOCK_H
