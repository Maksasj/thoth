#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("2.0");
        Double b("3.0");

        auto c = a * b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("0.0");
        Double b("3.14");

        auto c = a * b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("-1.0");

        auto c = a * b;

        ensure(c.toString() == "-1.0");
    }

    TEST_CASE {
        Double a("-2.0");
        Double b("-2.0");

        auto c = a * b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("1.1");
        Double b("2.2");

        auto c = a * b;

        ensure(c.toString() == "2.42");
    }

    TEST_CASE {
        Double a("3.3");
        Double b("-4.4");

        auto c = a * b;

        ensure(c.toString() == "-14.52");
    }

    TEST_CASE {
        Double a("-5.5");
        Double b("-6.6");

        auto c = a * b;

        ensure(c.toString() == "36.3");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("1.0");

        auto c = a * b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("0.0");
        Double b("0.0");

        auto c = a * b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.0");

        auto c = a * b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("0.0");

        auto c = a * b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.23456789012345678901234567890");
        Double b("9.87654321098765432109876543210");

        auto c = a * b;

        ensure(c.toString() == "12.19326311370217952261850327336229233322374638011112635269");
    }

    TEST_CASE {
        Double a("-3.14159265358979323846264338328");
        Double b("2.71828182845904523536028747135");

        auto c = a * b;

        ensure(c.toString() == "-8.539734222673567065463550869539561312493996016798760069028");
    }

    TEST_CASE {
        Double a("999999999999999.0");
        Double b("999999999999999.0");

        auto c = a * b;

        ensure(c.toString() == "999999999999998000000000000001.0");
    }

    return 0;
}