#include "thoth.h"
#include <chrono>

int main() {
     /*
     {
          thoth::Integer a("74891750172521759015791257125671290671296812056235728035727592759275927359729672349673496739467927690276927392938592385092859276923968324962795792379482956832967923679267927690267239067239067239075924701724612846184575790236709");
          thoth::Integer b("4356786546798017926547908765779087965764535617890724612749018765392836592639532805236580237409823675028365803656185610275901759127592165912656182478365836570813759016750891267580712905719025790102750912658012650812658012658012478912750812759012750195719025709175901725901750192657108263812638012631728351746328957328572856781653782153781567567283572309697892346729");

          auto begin = std::chrono::steady_clock::now();
          thoth::Integer c = a * b;
          auto end = std::chrono::steady_clock::now();
          std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000.0 << "ms \n";

          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("132.123");
          thoth::Double b("987.821");

          auto c = a + b;

          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("987.821");
          thoth::Double b("132.123");

          auto c = a + b;

          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("987.821");
          thoth::Double b("132.1");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("132.1");
          thoth::Double b("987.821");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("1.2456454");
          thoth::Double b("987.821");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("987.821");
          thoth::Double b("1.2456454");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("0.0");
          thoth::Double b("1.2456454");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("1.2456454");
          thoth::Double b("0.0");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("1.821");
          thoth::Double b("987.821");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("987.821");
          thoth::Double b("1.821");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("-1.0");
          thoth::Double b("1.0");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     
     {
          thoth::Double a("1.0");
          thoth::Double b("-1.0");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("-1.123");
          thoth::Double b("1.123");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     
     {
          thoth::Double a("1.123");
          thoth::Double b("-1.123");

          //std::cout << "\n" << a.toString() << " + " << b.toString() << "\n";
          
          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }
     
     {
          thoth::Double a("0.9999");
          thoth::Double b("0.0001");

          auto c = a + b;
          
          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("1");

          std::cout << a.toString() << "\n";
     }

     {
          thoth::Double a("1.00003");
          std::cout << "\n";
          std::cout << a.toString() << "\n";
     }

     {
          thoth::Double a("1.0000");
          std::cout << "\n";
          std::cout << a.toString() << "\n";
     }

     {
          thoth::Double a("0.0000");
          std::cout << "\n";
          std::cout << a.toString() << "\n";
     }

     {
          thoth::Integer a("987821");
          thoth::Integer b("132100");
          
          std::cout << (a + b).toString() << " " << 1119921 << "\n";
     }

     {
          thoth::Double a("9.9999");
          thoth::Double b("0.0001");

          auto c = a + b;

          std::cout << c.toString();
     }
     */

     {
          thoth::Double a("0.5");
          thoth::Double b("-0.2");

          auto c = a + b;

          std::cout << c.toString() << "\n";
     }

     {
          thoth::Double a("100000000000000000000000.0");
          thoth::Double b("-0.1");

          auto c = a + b;

          std::cout << c.toString() << "\n";
     }
    
     {
          thoth::Double a("-100000000000000000000000.0");
          thoth::Double b("0.1");

          auto c = a + b;

          std::cout << c.toString() << "\n";
     }

    return 0;
}
