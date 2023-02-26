#include <iostream>
#include <cmath>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        double i = 2.0; 

        double thothAnsw = Math::sqrt(i);
        double cmathAnsw = sqrt(i); 

        ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
    }

    TEST_CASE {
        for(double i = 1; i < 1000.0; i += 0.01) {
            double thothAnsw = Math::sqrt(i);
            double cmathAnsw = sqrt(i); 

            ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
        }
    }

    return 0;
}