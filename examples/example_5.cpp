#include "thoth.h"

int main() {
    /*
    {
        thoth::Double a0("100.2000000");
        std::cout << a0.toString() << "\n";

        thoth::Double a1("11111111111111.2");
        std::cout << a1.toString() << "\n";

        thoth::Double a2("123456789.987654321");
        std::cout << a2.toString() << "\n";

        thoth::Double a3("123456798.0");
        std::cout << a3.toString() << "\n";

        thoth::Double a4("2222222222.2");
        std::cout << a4.toString() << "\n";

        thoth::Double a5("0.000132");
        std::cout << a5.toString() << "\n";

        thoth::Double a6("123456798");
        std::cout << a6.toString() << "\n";
    }
    */
   /*
    {
        thoth::Double a("1.123");
        thoth::Double b("000.1");

        std::cout << (a > b) << "\n";
    }
    {
        thoth::Double a("1");
        thoth::Double b("0.1");
        
        std::cout << (a > b) << "\n";
    }

    {
        thoth::Double a("0.1");
        thoth::Double b("0.01");
        
        std::cout << (b < a) << "\n";
    }


    {
        thoth::Double a("1");
        thoth::Double b("0.1");

        std::cout << (a > b) << "\n";
        std::cout << (b > a) << "\n";
    }

    {
        thoth::Double a("2700.0");
        thoth::Double b("72.0");

        //std::cout << a.toString() << "\n";
        //std::cout << b.toString() << "\n";

        std::cout << (a > b) << "\n";
        //std::cout << (b > a) << "\n";
    }

    {
        thoth::Double a("-1.157412");
        thoth::Double b("-10.4165841");

        std::cout << (a > b) << "\n";
    }
    */

    {
        thoth::Double a("0.001");
        thoth::Double b("0.00001");
        bool value = (a > b);
        std::cout << "G: '"<< value << "', E: '" << (0.001 > 0.00001) << "\n";
    }

    {
        thoth::Double a("-1.0001");
        thoth::Double b("-10.00001");

        bool value = (a > b);
        std::cout << "G: '"<< value << "', E: '" << (-1.0001 > -10.00001) << "\n";
    }

    {
        thoth::Double a("10.00001");
        thoth::Double b("1.0001");

        bool value = (a > b);
        std::cout << "G: '"<< value << "', E: '" << (10.00001 > 1.0001) << "\n";
    }

    {
        thoth::Double a("1");
        thoth::Double b("0.1");

       bool value = (a > b);
        std::cout << "G: '"<< value << "', E: '" << (1 > 0.1) << "\n";
    }

    {
        thoth::Double a("-1.000001");
        thoth::Double b("-1.00001");

        bool value = (a > b);
        std::cout << "G: '"<< value << "', E: '" << (-1.000001 > -1.00001) << "\n";
    }

    {
        thoth::Double a("-1.00001");
        thoth::Double b("-1.000001");

        bool value = (a < b);
        std::cout << "G: '"<< value << "', E: '" << (-1.00001 < -1.000001) << "\n";
    }

    {
        thoth::Double a("-1.00001");
        thoth::Double b("-1.0001");
        bool value = (a < b);
        std::cout << "G: '"<< value << "', E: '" << (-1.00001 < -1.0001) << "\n";
    }

    {
        thoth::Double a("72.0");
        thoth::Double b("2700.0");
        bool value = (a > b);
        std::cout << "G: '"<< value << "', E: '" << (72.0 > 2700.0) << "\n";
    }

    return 0;
}
