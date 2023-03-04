#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("1");
        Double b("-1");

        Double c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("2");
        Double b("-1");

        Double c = a + b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("2");
        Double b("-2");

        Double c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("9");
        Double b("-1");

        Double c = a + b;

        ensure(c.toString() == "8.0");
    }

    TEST_CASE {
        Double a("999");
        Double b("-999");

        Double c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("-999");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "-998.0");
    }

    TEST_CASE {
        Double a("-1");
        Double b("999");

        Double c = a + b;

        ensure(c.toString() == "998.0");
    }

    TEST_CASE {
        Double a("-999");
        Double b("999");

        Double c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("-5198465126841256841265412");
        Double b("4155984512489156294981564895149815664589152489415");

        Double c = a + b;

        ensure(c.toString() == "4155984512489156294981559696684688823332311224003.0");
    }

    TEST_CASE {
        Double a("4155984512489156294981564895149815664589152489415");
        Double b("-5198465126841256841265412");

        Double c = a + b;

        ensure(c.toString() == "4155984512489156294981559696684688823332311224003.0");
    }

    TEST_CASE {
        Double a("-4155984512489156294981564895149815664589152489415");
        Double b("-5198465126841256841265412");

        Double c = a + b;

        ensure(c.toString() == "-4155984512489156294981570093614942505845993754827.0");
    }

    TEST_CASE {
        Double a("-5198465126841256841265412");
        Double b("-4155984512489156294981564895149815664589152489415");

        Double c = a + b;

        ensure(c.toString() == "-4155984512489156294981570093614942505845993754827.0");
    }

    TEST_CASE {
        Double a("5198465126841256841265412");
        Double b("-4155984512489156294981564895149815664589152489415");

        Double c = a + b;

        ensure(c.toString() == "-4155984512489156294981559696684688823332311224003.0");
    }

    TEST_CASE {
        Double a("-4155984512489156294981564895149815664589152489415");
        Double b("5198465126841256841265412");

        Double c = a + b;

        ensure(c.toString() == "-4155984512489156294981559696684688823332311224003.0");
    }

    TEST_CASE {
        Double a("8");
        Double b("5");

        Double c = a - b;

        ensure(c.toString() == "3.0");
    }
    
    TEST_CASE {
        Double a("-8");
        Double b("5");

        Double c = a - b;

        ensure(c.toString() == "-13.0");
    }

    TEST_CASE {
        Double a("8");
        Double b("-5");

        Double c = a - b;

        ensure(c.toString() == "13.0");
    }

    TEST_CASE {
        Double a("-8");
        Double b("-5");

        Double c = a - b;

        ensure(c.toString() == "-3.0");
    }

    TEST_CASE {
        Double a("9999999999999999999999");
        Double b("-1");

        Double c = a - b;

        ensure(c.toString() == "10000000000000000000000.0");
    }

    return 0;
}