#include "thoth.h"

int main() {
     /*
     {
          thoth::Double a("2.0");

          std::cout << a.toString() << "\n";

          auto c = a.findInverse();

          std::cout << c.toString() << "\n";
     }
     */

     {
          thoth::Double a("1.0");
          thoth::Double b("2.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto c = a / b;

          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("1.0");
          thoth::Double b("3.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto c = a / b;

          std::cout << c.toString() << "\n";
     }

    return 0;
}
