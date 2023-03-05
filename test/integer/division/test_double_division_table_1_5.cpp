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
        Double a("2.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("3.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("4.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("5.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("6.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("7.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "7.0");
    }

    TEST_CASE {
        Double a("8.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "8.0");
    }

    TEST_CASE {
        Double a("9.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "9.0");
    }

    TEST_CASE {
        Double a("10.0");
        Double b("1.0");

        auto c = a / b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        Double a("2.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("4.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("6.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("8.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("10.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("12.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("14.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "7.0");
    }

    TEST_CASE {
        Double a("16.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "8.0");
    }

    TEST_CASE {
        Double a("18.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "9.0");
    }

    TEST_CASE {
        Double a("20.0");
        Double b("2.0");

        auto c = a / b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        Double a("3.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("6.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("9.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("12.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("15.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("18.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("21.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "7.0");
    }

    TEST_CASE {
        Double a("24.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "8.0");
    }

    TEST_CASE {
        Double a("27.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "9.0");
    }

    TEST_CASE {
        Double a("30.0");
        Double b("3.0");

        auto c = a / b;

        ensure(c.toString() == "10.0");
    }
    
        TEST_CASE {
        Double a("4.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("8.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("12.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("16.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("20.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("24.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("28.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "7.0");
    }

    TEST_CASE {
        Double a("32.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "8.0");
    }

    TEST_CASE {
        Double a("36.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "9.0");
    }

    TEST_CASE {
        Double a("40.0");
        Double b("4.0");

        auto c = a / b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        Double a("5.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("10.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("15.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "3.0");
    }

    TEST_CASE {
        Double a("20.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "4.0");
    }

    TEST_CASE {
        Double a("25.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "5.0");
    }

    TEST_CASE {
        Double a("30.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "6.0");
    }

    TEST_CASE {
        Double a("35.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "7.0");
    }

    TEST_CASE {
        Double a("40.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "8.0");
    }

    TEST_CASE {
        Double a("45.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "9.0");
    }

    TEST_CASE {
        Double a("50.0");
        Double b("5.0");

        auto c = a / b;

        ensure(c.toString() == "10.0");
    }
      
    return 0;
}