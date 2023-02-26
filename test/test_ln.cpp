#include <iostream>
#include <cmath>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        double i = 2.0; 

        double thothAnsw = Math::ln(i);
        double cmathAnsw = log(i); 

        ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
    }

    TEST_CASE {
        for(double i = 1; i < 100.0; i = i + 0.01) {
            double thothAnsw = Math::ln(i);
            double cmathAnsw = log(i); 

            ensure(Math::abs(thothAnsw - cmathAnsw) < _MAX_ERROR_);
        }
    }

    return 0;
}