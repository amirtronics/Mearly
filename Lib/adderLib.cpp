#include "adderLib.h"

namespace mearlyLib {
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    float add(int a, float b) {
        return static_cast<float>(a) + b;
    }

    float add(float a, int b) {
        return a + static_cast<float>(b);
    }
}

