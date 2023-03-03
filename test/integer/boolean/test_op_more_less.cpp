#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("-1");

        ensure(a > b == true);
        ensure(a < b == false);
        ensure(b < a == true);
        ensure(b > a == false);
    }

    TEST_CASE {
        Integer a("1");
        Integer b("0");

        ensure((b < a) == true);
    }

    TEST_CASE {
        Integer a("0");
        Integer b("1");

        ensure((b > a) == true);
    }

    TEST_CASE {
        Integer a("1");
        Integer b("1");

        ensure(a > b == false);
        ensure(a < b == false);
        ensure(b < a == false);
        ensure(b > a == false);
    }

    TEST_CASE {
        Integer a("2");
        Integer b("-1");

        ensure(a > b == true);
        ensure(a < b == false);
        ensure(b < a == true);
        ensure(b > a == false);
    }

    TEST_CASE {
        Integer a("999");
        Integer b("998");

        ensure(a > b == true);
        ensure(a < b == false);
        ensure(b < a == true);
        ensure(b > a == false);
    }

    return 0;
}