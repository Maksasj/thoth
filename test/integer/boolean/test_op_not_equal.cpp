#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("0");
        Integer b("1");

        ensure(a != b);
        ensure(b != a);
    }

    TEST_CASE {
        Integer a("-1");
        Integer b("1");

        ensure(a != b);
        ensure(b != a);
    }

    TEST_CASE {
        Integer a("999");
        Integer b("998");

        ensure(a != b);
        ensure(b != a);
    }

    TEST_CASE {
        Integer a("1");
        Integer b("122");

        ensure(a != b);
        ensure(b != a);
    }

    return 0;
}