#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("5.0");
        Double b("3.0");

        auto c = a - b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("10.0");
        Double b("5.5");

        auto c = a - b;

        ensure(c.toString() == "4.5");
    }

    TEST_CASE {
        Double a("7.5");
        Double b("1.2");

        auto c = a - b;

        ensure(c.toString() == "6.3");
    }

    TEST_CASE {
        Double a("100.0");
        Double b("99.99");

        auto c = a - b;

        ensure(c.toString() == "0.01");
    }

    
    TEST_CASE {
        Double a("0.0");
        Double b("0.0");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("-5.0");
        Double b("3.0");

        auto c = a - b;

        ensure(c.toString() == "-8.0");
    }

    TEST_CASE {
        Double a("3.14159");
        Double b("2.71828");

        auto c = a - b;

        ensure(c.toString() == "0.42331");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("1.0");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("2.0");
        Double b("4.0");

        auto c = a - b;

        ensure(c.toString() == "-2.0");
    }

    TEST_CASE {
        Double a("1.1");
        Double b("1.1");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("10.0");
        Double b("9.999");

        auto c = a - b;

        ensure(c.toString() == "0.001");
    }

    TEST_CASE {
        Double a("-3.5");
        Double b("2.5");

        auto c = a - b;

        ensure(c.toString() == "-6.0");
    }

    TEST_CASE {
        Double a("1.23456");
        Double b("0.12345");

        auto c = a - b;

        ensure(c.toString() == "1.11111");
    }

    TEST_CASE {
        Double a("-10.0");
        Double b("-5.0");

        auto c = a - b;

        ensure(c.toString() == "-5.0");
    }

    TEST_CASE {
        Double a("0.00001");
        Double b("0.00002");

        auto c = a - b;

        ensure(c.toString() == "-0.00001");
    }

    TEST_CASE {
        Double a("123456.789");
        Double b("987654.321");

        auto c = a - b;

        ensure(c.toString() == "-864197.532");
    }

    TEST_CASE {
        Double a("-5.5");
        Double b("-2.5");

        auto c = a - b;

        ensure(c.toString() == "-3.0");
    }

    TEST_CASE {
        Double a("1000000.0");
        Double b("0.1");

        auto c = a - b;

        ensure(c.toString() == "999999.9");
    }

    TEST_CASE {
        Double a("999999.999");
        Double b("0.001");

        auto c = a - b;

        ensure(c.toString() == "999999.998");
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("-1.0");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("2.5");
        Double b("2.5");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1.234567890");
        Double b("0.987654321");

        auto c = a - b;

        ensure(c.toString() == "0.246913569");
    }

    TEST_CASE {
        Double a("-100.0");
        Double b("-100.0");

        auto c = a - b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("1000000000.0");
        Double b("0.0000001");

        auto c = a - b;

        ensure(c.toString() == "999999999.9999999");
    }

    TEST_CASE {
        Double a("0.0");
        Double b("1000000000.0");

        auto c = a - b;

        ensure(c.toString() == "-1000000000.0");
    }

    TEST_CASE {
        Double a("-999999999.9999999");
        Double b("0.0000001");

        auto c = a - b;

        ensure(c.toString() == "-1000000000.0");
    }

    TEST_CASE {
        Double a("1.0");
        Double b("1.0000000000000001");

        auto c = a - b;

        ensure(c.toString() == "-0.0000000000000001");
    }

    TEST_CASE {
        Double a("2.0");
        Double b("1.9999999999999998");

        auto c = a - b;

        ensure(c.toString() == "0.0000000000000002");
    }

    TEST_CASE {
        Double a("2.0");
        Double b("1.9999999999999998");

        auto c = a - b;

        ensure(c.toString() == "0.0000000000000002");
    }

    return 0;
}