#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("-1");

        Integer c = a + b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("-1");

        Integer c = a + b;

        ensure(c.toString() == "1");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("-2");

        Integer c = a + b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("9");
        Integer b("-1");

        Integer c = a + b;

        ensure(c.toString() == "8");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("-999");

        Integer c = a + b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("-999");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "-998");
    }

    TEST_CASE {
        Integer a("-1");
        Integer b("999");

        Integer c = a + b;

        ensure(c.toString() == "998");
    }

    TEST_CASE {
        Integer a("-999");
        Integer b("999");

        Integer c = a + b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("-5198465126841256841265412");
        Integer b("4155984512489156294981564895149815664589152489415");

        Integer c = a + b;

        ensure(c.toString() == "4155984512489156294981559696684688823332311224003");
    }

    TEST_CASE {
        Integer a("4155984512489156294981564895149815664589152489415");
        Integer b("-5198465126841256841265412");

        Integer c = a + b;

        ensure(c.toString() == "4155984512489156294981559696684688823332311224003");
    }

    TEST_CASE {
        Integer a("-4155984512489156294981564895149815664589152489415");
        Integer b("-5198465126841256841265412");

        Integer c = a + b;

        ensure(c.toString() == "-4155984512489156294981570093614942505845993754827");
    }

    TEST_CASE {
        Integer a("-5198465126841256841265412");
        Integer b("-4155984512489156294981564895149815664589152489415");

        Integer c = a + b;

        ensure(c.toString() == "-4155984512489156294981570093614942505845993754827");
    }

    TEST_CASE {
        Integer a("5198465126841256841265412");
        Integer b("-4155984512489156294981564895149815664589152489415");

        Integer c = a + b;

        ensure(c.toString() == "-4155984512489156294981559696684688823332311224003");
    }

    TEST_CASE {
        Integer a("-4155984512489156294981564895149815664589152489415");
        Integer b("5198465126841256841265412");

        Integer c = a + b;

        ensure(c.toString() == "-4155984512489156294981559696684688823332311224003");
    }

    TEST_CASE {
        Integer a("8");
        Integer b("5");

        Integer c = a - b;

        ensure(c.toString() == "3");
    }
    
    TEST_CASE {
        Integer a("-8");
        Integer b("5");

        Integer c = a - b;

        ensure(c.toString() == "-13");
    }

    TEST_CASE {
        Integer a("8");
        Integer b("-5");

        Integer c = a - b;

        ensure(c.toString() == "13");
    }

    TEST_CASE {
        Integer a("-8");
        Integer b("-5");

        Integer c = a - b;

        ensure(c.toString() == "-3");
    }

    TEST_CASE {
        Integer a("9999999999999999999999");
        Integer b("-1");

        Integer c = a - b;

        ensure(c.toString() == "10000000000000000000000");
    }

    return 0;
}