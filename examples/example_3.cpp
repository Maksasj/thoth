#include "thoth.h"
#include "arithmetics.h"
#include <iostream>
#include <cmath>

int main() {
    std::cout.precision(17);

    {
        double maxError = -1.0;    
        for(double i = 0.0; i < 48.0; i += 0.01)  {
            double a = thoth::Math::sqrt(i);
            double b = sqrt(i);

            double delta = thoth::Math::abs<double>(a - b);
            if(delta > maxError)
                maxError = delta;
            
        }

        std::cout << "sqrt max error in range [1.0, 48.0]: " << maxError << "\n";
    }

    {
        double maxError = -1.0;    
        for(double i = 0.0; i < _THOTH_CONSTANT_PI_ * 80; i += 0.01)  {
            double a = thoth::Math::sin(i);
            double b = sin(i);

            double delta = thoth::Math::abs<double>(a - b);
            if(delta > maxError)
                maxError = delta;
            
        }

        std::cout << "sin max error in range [0.0, ~251.32]: " << maxError << "\n";
    }

    {
        double maxError = -1.0;    
        for(double i = 1.01; i < 1000.0; i += 0.01)  {
            double a = thoth::Math::ln(i);
            double b = log(i);

            double delta = thoth::Math::abs<double>(a - b);
            if(delta > maxError)
                maxError = delta;
            
        }

        std::cout << "ln max error in range [1.01, 1000.0]: " << maxError << "\n";
    }

    return 0;
}
