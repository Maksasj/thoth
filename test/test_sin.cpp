#include <iostream>
#include <cmath>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        double i = 2.0; 

        double thothAnsw = Math::sin(i);
        double cmathAnsw = sin(i); 

        ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
    }

    TEST_CASE {
        for(double i = 0; i < _THOTH_CONSTANT_PI_ * 2; i += 0.0001) {
            double thothAnsw = Math::sin(i);
            double cmathAnsw = sin(i); 

            ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
        }
    }

    TEST_CASE {
        for(double i = 0; i < _THOTH_CONSTANT_PI_ * 2 * 69; i += 0.02) {
            double number = i;
            int circles = number / (_THOTH_CONSTANT_PI_ * 2);
            std::cout << circles << "\n";
            number -= circles * (_THOTH_CONSTANT_PI_ * 2);

            double thothAnsw = Math::sin(number);
            double cmathAnsw = sin(number); 

            ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
        }
    }

    return 0;
}