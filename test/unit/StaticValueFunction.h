#ifndef ARDUINOLIBS_STATICVALUEFUNCTION_H
#define ARDUINOLIBS_STATICVALUEFUNCTION_H

template<typename TYPE>
class StaticValueFunction {
    TYPE value;
public:

    explicit StaticValueFunction(TYPE initialValue) : value(initialValue) {}

    void setValue(TYPE newValue) {
        value = newValue;
    }

    TYPE operator()() const {
        return value;
    }
};


#endif //ARDUINOLIBS_STATICVALUEFUNCTION_H
