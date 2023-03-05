#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("1.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("5.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("5.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "2.5");
    }
    TEST_CASE {
        Double a("5.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "1.0");
    }
    TEST_CASE {
        Double a("36.0");
        Double b("6.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("30.0");
        Double b("6.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "0.5");
    }

    return 0;
}