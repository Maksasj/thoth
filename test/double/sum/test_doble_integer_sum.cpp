#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("1");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("2");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("2");
        Double b("2");

        Double c = a + b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("9");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        Double a("999");
        Double b("999");

        Double c = a + b;

        ensure(c.toString() == "1998.0");
    }

    TEST_CASE {
        Double a("999");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "1000.0");
    }

    TEST_CASE {
        Double a("1");
        Double b("999");

        Double c = a + b;

        ensure(c.toString() == "1000.0");
    }

    return 0;
}