#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("2.0");
        Double b("5.6");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("5.0");
        Double b("2.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("2.0");
        Double b("5.0");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("2700.0");
        Double b("72.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("72.0");
        Double b("2700.0");

        ensure(a > b == false);
    }
    
    TEST_CASE {
        Double a("7200.0");
        Double b("2700.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("0.0");
        Double b("0.0");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("0.1");
        Double b("0.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("0.0");
        Double b("0.1");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("0.15");
        Double b("0.1");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("0.15");
        Double b("0.27");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("0.15");
        Double b("0.156");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("0.001");
        Double b("0.00001");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("0.7854");
        Double b("0.7854");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("1.0");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("1.0");
        Double b("-1.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("-1.0");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-5.0");
        Double b("-3.0");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-3.0");
        Double b("-5.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-34186.0");
        Double b("-34187.0");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-0.1");
        Double b("-0.2");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-0.102");
        Double b("-0.103");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-0.802");
        Double b("-0.103");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-0.001");
        Double b("-0.1");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-0.1");
        Double b("-0.001");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-1.157412");
        Double b("-10.4165841");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-10.0001");
        Double b("-10.00001");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-1.0001");
        Double b("-1.00001");

        ensure(a > b == false);
    }

    TEST_CASE {
        Double a("-1.0001");
        Double b("-10.00001");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("10.00001");
        Double b("1.0001");

        ensure(a > b == true);
    }

    TEST_CASE {
        Double a("-10.00001");
        Double b("-10.0001");

        ensure(a > b == true);
    }

    return 0;
}