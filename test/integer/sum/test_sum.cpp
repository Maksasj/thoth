#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "2");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "3");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("2");

        Integer c = a + b;

        ensure(c.toString() == "4");
    }

    TEST_CASE {
        Integer a("9");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "10");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("999");

        Integer c = a + b;

        ensure(c.toString() == "1998");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "1000");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("999");

        Integer c = a + b;

        ensure(c.toString() == "1000");
    }

    return 0;
}