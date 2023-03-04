#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("8");
        Integer b("5");

        Integer c = a - b;

        ensure(c.toString() == "3");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("187");

        Integer c = a - b;

        ensure(c.toString() == "812");
    }

    TEST_CASE {
        Integer a("10");
        Integer b("2");

        Integer c = a - b;

        ensure(c.toString() == "8");
    }

    TEST_CASE {
        Integer a("1000");
        Integer b("1");

        Integer c = a - b;

        ensure(c.toString() == "999");
    }

    TEST_CASE {
        Integer a("132");
        Integer b("87");

        Integer c = a - b;

        ensure(c.toString() == "45");
    }

    TEST_CASE {
        Integer a("63545641");
        Integer b("600");

        Integer c = a - b;

        ensure(c.toString() == "63545041");
    }

    TEST_CASE {
        Integer a("5");
        Integer b("8");

        Integer c = a - b;

        ensure(c.toString() == "-3");
    }

    TEST_CASE {
        Integer a("72");
        Integer b("82");

        Integer c = a - b;

        ensure(c.toString() == "-10");
    }

    TEST_CASE {
        Integer a("72");
        Integer b("172");

        Integer c = a - b;

        ensure(c.toString() == "-100");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("99999");

        Integer c = a - b;

        ensure(c.toString() == "-99998");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("10");

        Integer c = a - b;

        ensure(c.toString() == "-9");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("10000");

        Integer c = a - b;

        ensure(c.toString() == "-9999");
    }

    TEST_CASE {
        Integer a("5");
        Integer b("5");

        Integer c = a - b;

        ensure(c.toString() == "0");
    }

    return 0;
}
