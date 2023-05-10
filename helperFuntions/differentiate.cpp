#include <iostream>
#include <string>
#include <cmath>
#include "helpFunc.h"

std::string differentiate(double base, double exponent) {
    std::string result;

    if (exponent == base) {
        result = "0.0";
    } else {
        double resultValue = exponent * base;
        exponent = exponent - 1.0;

        if (base < 0.0 || exponent < 0.0) {
            resultValue = -resultValue;
            result = "-" + std::to_string(std::abs(resultValue));
        } else {
            result = std::to_string(resultValue);
        }
    }

    return result + "x^" + std::to_string(static_cast<int>(std::abs(exponent)));
}
