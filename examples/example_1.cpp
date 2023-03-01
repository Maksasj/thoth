#include "thoth.h"
#include <iostream>

int main() {
    {
        thoth::Integer a("999999999999999999999999999999999999");
        thoth::Integer b("1");
        std::cout << a.toString() << "\n";
        std::cout << b.toString() << "\n";

        thoth::Integer c = a + b;

        std::cout << c.toString() << "\n";
    }

    std::cout << "==============\n";

    {
        thoth::Integer a("4894165461654616541616541165416");
        thoth::Integer b("49858496485684564896548956848511116");
        std::cout << a.toString() << "\n";
        std::cout << b.toString() << "\n";

        thoth::Integer c = a + b;

        std::cout << c.toString() << "\n";
    }

    return 0;
}