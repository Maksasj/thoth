#include "thoth.h"
#include "arithmetics.h"
#include <iostream>
#include <cmath>

int main() {
    std::cout.precision(300);
    
    {
        double a = thoth::Math::sqrt(69.420);
        double b = sqrt(69.420);

        std::cout << abs(a - b) << "\n";
    }

    {
        double a = thoth::Math::sin(69.420);
        double b = sin(69.420);

        std::cout << abs(a - b) << "\n";
    }

    {
        double a = thoth::Math::ln(69.420);
        double b = log(69.420);

        std::cout << abs(a - b) << "\n";
    }

    return 0;
}
