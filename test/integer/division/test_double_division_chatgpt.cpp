#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("10.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("-10.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "-5.0");
    }

    TEST_CASE {
        Double a("10.0");
        Double b("-2.0");

        auto c = a / b;

        ensure(c.toString() == "-5.0");
    }

    TEST_CASE {
        Double a("-10.0");
        Double b("-2.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("0.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "0.3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("-3.0");

        auto c = a / b;

        ensure(c.toString() == "-0.3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "-0.3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("-3.0");

        auto c = a / b;

        ensure(c.toString() == "0.3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    }

    TEST_CASE {
        Double a("3.14159265358979323846");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "1.57079632679489661923");
    }
    TEST_CASE {
        Double a("2.0");
        Double b("3.14159265358979323846");

        auto c = a / b;

        ensure(c.toString() == "0.636619772367581343076070714935456641745033243616476212082318099520465051195786694631663078907070622");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.5");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.1");

        auto c = a / b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.01");

        auto c = a / b;

        ensure(c.toString() == "100.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.001");

        auto c = a / b;

        ensure(c.toString() == "1000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.0001");

        auto c = a / b;

        ensure(c.toString() == "10000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.00001");

        auto c = a / b;

        ensure(c.toString() == "100000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.00001");

        auto c = a / b;

        ensure(c.toString() == "100000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.000001");

        auto c = a / b;

        ensure(c.toString() == "1000000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.0000001");

        auto c = a / b;

        ensure(c.toString() == "10000000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.00000001");

        auto c = a / b;

        ensure(c.toString() == "100000000.0");
    }
    return 0;
}