#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("1");

        a.plus(b);

        ensure(a.toString() == "2");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("1");

        a.plus(b);

        ensure(a.toString() == "3");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("2");

        a.plus(b);

        ensure(a.toString() == "4");
    }

    TEST_CASE {
        Integer a("9");
        Integer b("1");

        a.plus(b);

        ensure(a.toString() == "10");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("999");

        a.plus(b);

        ensure(a.toString() == "1998");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("1");

        a.plus(b);

        ensure(a.toString() == "1000");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("999");

        a.plus(b);

        ensure(a.toString() == "1000");
    }

    return 0;
}