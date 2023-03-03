#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("152");
        Integer b("372");

        ensure(a < b == true);
    }

    TEST_CASE {
        Integer a("1");
        Integer b("0");

        ensure(a < b == false);
    }

    TEST_CASE {
        Integer a("25");
        Integer b("1");

        ensure(a < b == false);
    }

    TEST_CASE {
        Integer a("48");
        Integer b("4014158");

        ensure(a < b == true);
    }

    TEST_CASE {
        Integer a("4014157");
        Integer b("4014158");

        ensure(a < b == true);
    }

    TEST_CASE {
        Integer a("99999");
        Integer b("99999");

        ensure(a < b == false);
    }

    return 0;
}