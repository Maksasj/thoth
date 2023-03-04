#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        thoth::Double a("0.2");
        thoth::Double b("0.5");

        auto c = a + b;

        ensure(c.toString() == "0.7");
    }

    TEST_CASE {
        thoth::Double a("0.031");
        thoth::Double b("0.071");

        auto c = a + b;

        ensure(c.toString() == "0.102");
    }

    TEST_CASE {
        thoth::Double a("0.93");
        thoth::Double b("0.12");

        auto c = a + b;

        ensure(c.toString() == "1.05");
    }


    TEST_CASE {
        thoth::Double a("0.99999");
        thoth::Double b("0.00001");

        auto c = a + b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        thoth::Double a("999.99999");
        thoth::Double b("0.00001");

        auto c = a + b;

        ensure(c.toString() == "1000.0");
    }

    TEST_CASE {
        thoth::Double a("0.5");
        thoth::Double b("-0.2");

        auto c = a + b;

        ensure(c.toString() == "0.3");
    }

    TEST_CASE {
        thoth::Double a("0.5");
        thoth::Double b("-0.6");

        auto c = a + b;

        ensure(c.toString() == "-0.1");
    }

    TEST_CASE {
        thoth::Double a("0.5");
        thoth::Double b("0.2");

        auto c = a + b;

        ensure(c.toString() == "0.7");
    }

    TEST_CASE {
        thoth::Double a("0.4");
        thoth::Double b("0.2");

        auto c = a + b;

        ensure(c.toString() == "0.6");
    }

    TEST_CASE {
        thoth::Double a("0.27");
        thoth::Double b("0.42");

        auto c = a + b;

        ensure(c.toString() == "0.69");
    }

    TEST_CASE {
        thoth::Double a("0.39");
        thoth::Double b("0.02");

        auto c = a + b;

        ensure(c.toString() == "0.41");
    }

    TEST_CASE {
        thoth::Double a("0.48");
        thoth::Double b("0.02");

        auto c = a + b;

        ensure(c.toString() == "0.5");
    }

    TEST_CASE {
        thoth::Double a("0.4897");
        thoth::Double b("0.02");

        auto c = a + b;

        ensure(c.toString() == "0.5097");
    }

    TEST_CASE {
        thoth::Double a("0.0999");
        thoth::Double b("0.0001");

        auto c = a + b;

        ensure(c.toString() == "0.1");
    }

    TEST_CASE {
        thoth::Double a("0.02");
        thoth::Double b("0.39");

        auto c = a + b;

        ensure(c.toString() == "0.41");
    }

    TEST_CASE {
        thoth::Double a("0.02");
        thoth::Double b("0.48");

        auto c = a + b;

        ensure(c.toString() == "0.5");
    }

    TEST_CASE {
        thoth::Double a("0.02");
        thoth::Double b("0.4897");

        auto c = a + b;

        ensure(c.toString() == "0.5097");
    }

    TEST_CASE {
        thoth::Double a("0.0001");
        thoth::Double b("0.0999");

        auto c = a + b;

        ensure(c.toString() == "0.1");
    }

    TEST_CASE {
        thoth::Double a("0.93");
        thoth::Double b("0.12");

        auto c = a + b;

        ensure(c.toString() == "1.05");
    }

    TEST_CASE {
        thoth::Double a("0.99999");
        thoth::Double b("0.00001");

        auto c = a + b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        thoth::Double a("0.12");
        thoth::Double b("0.93");

        auto c = a + b;

        ensure(c.toString() == "1.05");
    }

    TEST_CASE {
        thoth::Double a("999.99999");
        thoth::Double b("0.00001");

        auto c = a + b;

        ensure(c.toString() == "1000.0");
    }

    TEST_CASE {
        thoth::Double a("0.00001");
        thoth::Double b("999.99999");

        auto c = a + b;

        ensure(c.toString() == "1000.0");
    }

    TEST_CASE {
        thoth::Double a("75.25");
        thoth::Double b("100.25");

        auto c = a + b;

        ensure(c.toString() == "175.5");
    }

    return 0;
}