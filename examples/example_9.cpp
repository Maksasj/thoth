#include "thoth.h"
#include <iostream>

int main() {
    /*
    {
        thoth::Double a("1.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "1.0");
    }

    {
        thoth::Double a("2.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "2.0");
    }

    {
        thoth::Double a("3.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "3.0");
    }

    {
        thoth::Double a("4.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "4.0");
    }

    {
        thoth::Double a("5.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "5.0");
    }

    {
        thoth::Double a("6.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "6.0");
    }

    {
        thoth::Double a("7.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "7.0");
    }

    {
        thoth::Double a("8.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "8.0");
    }

    {
        thoth::Double a("9.0");
        thoth::Double b("1.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "9.0");
    }
    {
        thoth::Double a("10.0");
        thoth::Double b("10.0");

        auto c = a / b;

        std::cout << c.toString()  << "\n"; // "10.0");
    }
    {
        thoth::Double a("2.0");
        thoth::Double b("100000.1");

        //auto c = a / b;
        //std::cout << c.toString()  << "\n"; // "10.0");
        
        std::cout << b.findInverse().toString() << "\n";
    }

    {
        thoth::Double a("2.0");
        thoth::Double b("3.14159265358979323846");

        auto c = a / b;
        std::cout << c.toString()  << "\n"; // "10.0");
        
        //std::cout << b.findInverse().toString() << "\n";
    }
    
    {
        thoth::Double a("1.0");
        thoth::Double b("0.5");

        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }

    {
        thoth::Double a("1.0");
        thoth::Double b("0.1");

        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }

    {
        thoth::Double a("1.0");
        thoth::Double b("0.01");

        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }

    {
        thoth::Double a("1.0");
        thoth::Double b("0.001");

        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }
        {
        thoth::Double a("1.0");
        thoth::Double b("0.0001");

        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }
        {
        thoth::Double a("1.0");
        thoth::Double b("0.00001");

        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }
    {
        thoth::Double a("1.0");
        thoth::Double b("0.000001");
        
        auto c = a / b;
        std::cout << a.toString() << " / " << b.toString() << " = " << c.toString()  << "\n"; // "10.0");
    }
    {
        thoth::Double a("627357.571571905719025710920000000000004124146214626417267462174612746124612746812467");
        thoth::Double b("5718571289572185.585293582958932520001");
//0.0000000001097052987196106507203539283597911134443192595244998400662844753801848875469400592171333715
//0.0000000001097052987196106507203539283597911134443192595244998400662844753801848875469400592171389461
        auto c = a / b;
        std::cout << c.toString() << "\n";
    }
    */

    {
        thoth::Double a("10000000000000000000000000000000000000000000000000000000000000000000000000000000000.0");
        thoth::Double b("0.00000000000000000000000000000000000000000000000000000000000000000000000000000000001");

        //auto c = a / b;
        std::cout << b.findInverse().toString() << "\n";
        //std::cout << c.toString() << "\n";
    }

    {
        thoth::Double b("3.14159265358979323846");
        
        std::cout << b.findInverse().toString() << "\n";
    }

    {
        thoth::Double b("0.1");
        
        std::cout << b.findInverse().toString() << "\n";
    }


    {
        thoth::Double b("0.5");
        
        std::cout << b.findInverse().toString() << "\n";
    }


    return 0;
}