#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("0.5");
        Double b("0.3");

        auto c = a - b;

        ensure(c.toString() == "0.2");
    }

    TEST_CASE {
        Double a("0.537");
        Double b("0.121");

        auto c = a - b;

        ensure(c.toString() == "0.416");
    }

    TEST_CASE {
        Double a("0.47");
        Double b("0.18");

        auto c = a - b;

        ensure(c.toString() == "0.29");
    }

    TEST_CASE {
        Double a("0.501");
        Double b("0.002");

        auto c = a - b;

        ensure(c.toString() == "0.499");
    }

    TEST_CASE {
        Double a("0.101");
        Double b("0.0001");

        auto c = a - b;

        ensure(c.toString() == "0.1009");
    }

    TEST_CASE {
        Double a("0.973");
        Double b("0.4");

        auto c = a - b;

        ensure(c.toString() == "0.573");
    }

    TEST_CASE {
        Double a("1.5");
        Double b("0.6");

        auto c = a - b;

        ensure(c.toString() == "0.9");
    }

    TEST_CASE {
        Double a("1000.001");
        Double b("0.002");

        auto c = a - b;

        ensure(c.toString() == "999.999");
    }

    TEST_CASE {
        Double a("0.3");
        Double b("0.7");

        auto c = a - b;

        ensure(c.toString() == "-0.4");
    }

    TEST_CASE {
        Double a("0.01");
        Double b("0.02");

        auto c = a - b;

        ensure(c.toString() == "-0.01");
    }

    TEST_CASE {
        Double a("0.001");
        Double b("0.01");

        auto c = a - b;

        ensure(c.toString() == "-0.009");
    }

    TEST_CASE {
        Double a("7.7");
        Double b("8.8");

        auto c = a - b;

        ensure(c.toString() == "-1.1");
    }

    TEST_CASE {
        Double a("177.7");
        Double b("188.8");

        auto c = a - b;

        ensure(c.toString() == "-11.1");
    }

    TEST_CASE {
        Double a("5.7");
        Double b("5.7");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("10000.1");

        auto c = a - b;

        ensure(c.toString() == "-9999.1");
    }

    return 0;
}