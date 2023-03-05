#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("36.0");
        Double b("6.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("0.0001");
        Double b("10000.0");

        auto c = a / b;

        ensure(c.toString() == "0.00000001");
    }

    TEST_CASE {
        Double a("6.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("8.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }
    
    TEST_CASE {
        Double a("24.0");
        Double b("6.0");

        auto c = a / b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("3.0");
        Double b("7.0");

        auto c = a / b;

        ensure(c.toString() == "0.4285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714286");
    }

    TEST_CASE {
        Double a("7.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "2.3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    }


    return 0;
}