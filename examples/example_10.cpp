#include "thoth.h"
#include <iostream>

int main() {
    {
        thoth::Double a("5.0");
        thoth::Double b("4.0");

        auto c = a % b;

        std::cout << c.toString() << "\n";
    }

    {
        thoth::Double a("2.0");
        thoth::Double b("4.0");

        auto c = a % b;

        std::cout << c.toString() << "\n";
    }

    {
        thoth::Double a("7.0");
        thoth::Double b("4.0");

        auto c = a % b;

        std::cout << c.toString() << "\n";
    }

    return 0;
}