#include "thoth.h"
#include <chrono>
#include <iostream>

int main() {
     /*
     {
          thoth::Double a("2.0");

          std::cout << a.toString() << "^-1 = ";

          auto c = a.findInverse();

          std::cout << c.toString() << "\n";
     }
    
     {
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("2.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";
          
          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }
     */
     {
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("3.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }
     /*
     {
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("4.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";
          
          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("5.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("0.0001");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {    
          std::cout << "\n";
          thoth::Double a("0.0001");
          thoth::Double b("0.0001");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {    //0.000000000000000000000000000000001
          std::cout << "\n";
          thoth::Double a("0.0001");
          thoth::Double b("10000.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {    //0.00390625
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("256.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("25600.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }
     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("1.0");
          thoth::Double b("2560000000000000000000000.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("7.0");

          auto c = a.findInverse();

          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("3.0");
          thoth::Double b("7.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }
     {
          thoth::Double a("6.0");

          std::cout << a.findInverse().toString() << "\n";
     }
     */
     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("30.0");
          thoth::Double b("6.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("6.0");
          thoth::Double b("3.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     /*
     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("30.0");
          thoth::Double b("5.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }
     */
     /*
     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("4.0");
          thoth::Double b("2.0");

          std::cout << a.toString() << " / " << b.toString() << " = ";

          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }
     */

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("7.0");
          thoth::Double b("3.0");


          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << a.toString() << " / " << b.toString() << " = ";
          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("3.0");
          thoth::Double b("7.0");


          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << a.toString() << " / " << b.toString() << " = ";
          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("24.0");
          thoth::Double b("6.0");


          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << a.toString() << " / " << b.toString() << " = ";
          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("8.0");
          thoth::Double b("4.0");


          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << a.toString() << " / " << b.toString() << " = ";
          std::cout << c.toString() << "\n";
     }

     {    //0.0000390625
          std::cout << "\n";
          thoth::Double a("0.0001");
          thoth::Double b("10000.0");


          auto begin = std::chrono::steady_clock::now();
          auto c = a / b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << a.toString() << " / " << b.toString() << " = ";
          std::cout << c.toString() << "\n";
     }

    return 0;
}
