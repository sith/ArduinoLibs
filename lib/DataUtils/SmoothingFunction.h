//
// Created by Fedorov, Alex on 5/14/21.
//

#ifndef SMOOTHINGFUNCTION_H
#define SMOOTHINGFUNCTION_H
namespace dataUtils {
    template<unsigned char READINGS_SIZE>
    class SmoothingFunction {
        static const unsigned char size = READINGS_SIZE;
        double readings[size]{0.0};
        unsigned char currentIndex = 0;
        unsigned char length = 0;

        double avg() {
            double sum = 0.0;
            for (int i = 0; i < length; i++) {
                sum += readings[i];
            }
            return sum / length;
        }

        double stdDev(double &mean) {
            double total = 0.0;
            for (int i = 0; i < length; i++) {
                double diff = readings[i] - mean;
                double squareDiff = diff * diff;
                total = total + squareDiff;
            }

            double variance = total / length;
            double stdDev = sqrt(variance);
            return stdDev;
        }

    public:
        double operator()(double value) {
            if (currentIndex == size) {
                currentIndex = 0;
            }
            readings[currentIndex++] = value;
            ++length;
            length = min(length, size);

            double mean = avg();
            double std = stdDev(mean);

            double sum = 0;
            unsigned char newLength = 0;

            for (int i = 0; i < length; i++) {
                if (readings[i] >= mean - 2 * std && readings[i] <= mean + 2 * std) {
                    sum += readings[i];
                    ++newLength;
                }
            }
            return sum / newLength;
        }
    };
}
#endif //SMOOTHINGFUNCTION_H
