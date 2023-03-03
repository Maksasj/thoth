#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("2.0");
        Double b("5.6");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("7.2");
        Double b("5.6");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("777.2");
        Double b("777.6");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("1.8468");
        Double b("1.84681");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("1.8468");
        Double b("1.845");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("1.8468");
        Double b("1.846");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("0.001");
        Double b("0.01");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("0.47");
        Double b("0.18");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("-0.5");
        Double b("0.0");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("1.0");
        Double b("-0.5");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("-145865.0");
        Double b("145865.0");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("0.0");
        Double b("0.0");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("0.16784068463455");
        Double b("0.10784168463451");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("0.16784068463455");
        Double b("0.16784168463451");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("1.0");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("-2.0");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("-1970.0");
        Double b("-1969.0");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("-1.5");
        Double b("-1.0");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("-1.5578");
        Double b("-1.55781");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("-1.00001");
        Double b("-1.0001");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("-1.00001");
        Double b("-1.000001");

        ensure(a < b == true);
    }

    TEST_CASE {
        Double a("0.47");
        Double b("-0.18");

        ensure(a < b == false);
    }

    TEST_CASE {
        Double a("0.0");
        Double b("0.0");

        ensure(a < b == false);
    }
    return 0;
}