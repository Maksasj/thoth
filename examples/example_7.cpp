#include "thoth.h"

int main() {
     {    //1.0
          thoth::Double a("2.0");
          thoth::Double b("0.5");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.01
          thoth::Double a("2.0");
          thoth::Double b("0.005");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.01
          thoth::Double a("0.005");
          thoth::Double b("2.0");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.00000000005
          thoth::Double a("0.005");
          thoth::Double b("0.00000001");
          
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }


     {    //0.00000000005
          thoth::Double a("0.00000001");
          thoth::Double b("0.005");
          
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.615615
          thoth::Double a("123.123");
          thoth::Double b("0.005");
          
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //4809201023814296104800879450164.8568490188916090045886280654749145987365297497433233505770010262056569038490072728264057954101302967822925614568365803447725038735598712585610222625926936721455220747513553
          thoth::Double a("83957209573290750932672903672903804891782184018250185601286.65823579237639207693267290672390673296723906");
          thoth::Double b("0.000000000000000000000000000057281572937653276930262869030632626000603602306023060234274923789048329054832580923589032568932686005");
          
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.0
          thoth::Double a("0.0");
          thoth::Double b("0.0");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.0
          thoth::Double a("123.0");
          thoth::Double b("0.0");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //1.9999999999999999999999999999999999999999999999999771656080961606813043742880457326381198582670837636
          thoth::Double a("1.41421356237309504880168872420969807856967187537694");
          thoth::Double b("1.41421356237309504880168872420969807856967187537694");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //1.0000000000000000000000000000000000000000000000000200000000000000000000000000000000000000000000000001
          thoth::Double a("1.00000000000000000000000000000000000000000000000001");
          thoth::Double b("1.00000000000000000000000000000000000000000000000001");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.0000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000001
          thoth::Double a("1.00000000000000000000000000000000000000000000000001");
          thoth::Double b("0.00000000000000000000000000000000000000000000000001");

          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("5");
          thoth::Double b("6");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("6");
          thoth::Double b("5");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("6.0");
          thoth::Double b("5.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("5.0");
          thoth::Double b("6.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("-5");
          thoth::Double b("-6");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("-6");
          thoth::Double b("-5");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("-6.0");
          thoth::Double b("-5.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //30.0
          thoth::Double a("-5.0");
          thoth::Double b("-6.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //-30.0
          thoth::Double a("5.0");
          thoth::Double b("-6.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }


     {    //-30.0
          thoth::Double a("-5.0");
          thoth::Double b("6.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //4.2
          thoth::Double a("2.0");
          thoth::Double b("2.1");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //4.02
          thoth::Double a("2.0");
          thoth::Double b("2.01");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //4.02
          thoth::Double a("2.01");
          thoth::Double b("2.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //40.0
          thoth::Double a("20.0");
          thoth::Double b("2.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //40.0
          thoth::Double a("2.0");
          thoth::Double b("20.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //40.246
          thoth::Double a("20.123");
          thoth::Double b("2.0");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //42.46
          thoth::Double a("20.0");
          thoth::Double b("2.123");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //56.30543209562
          thoth::Double a("20.123456789");
          thoth::Double b("2.798");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //56.13977734662032428994
          thoth::Double a("20.1232346");
          thoth::Double b("2.7897988798789");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

          {    //42.46
          thoth::Double a("20.0");
          thoth::Double b("2.123");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.896518517622
          thoth::Double a("1.123456789");
          thoth::Double b("0.798");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.88712942892122428994
          thoth::Double a("1.1232346");
          thoth::Double b("0.7897988798789");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }


     {    //10.00000000000000000000000000000000000000000000000089999999999999999999999999999999999999999999999999
          thoth::Double a("9.9999999999999999999999999999999999999999999999999");
          thoth::Double b("1.0000000000000000000000000000000000000000000000001");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

     {    //0.0000000000000000000000000000000000000000000000009
          thoth::Double a("9.0");
          thoth::Double b("0.0000000000000000000000000000000000000000000000001");
     
          auto c = a * b;
          std::cout << a.toString() << " * " << b.toString() << " = " << c.toString() <<"\n";
     }

    return 0;
}
