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
*/
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


    return 0;
}
