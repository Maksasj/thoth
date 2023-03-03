#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("2");
        Integer b("5");

        Integer c = a + b;

        ensure(c.toString() == "7");
    }

    TEST_CASE {
        Integer a("7");
        Integer b("3");

        Integer c = a + b;

        ensure(c.toString() == "10");
    }

    TEST_CASE {
        Integer a("1999");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "2000");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("1");

        Integer c = a + b;

        ensure(c.toString() == "1000");
    }

    TEST_CASE {
        Integer a("5");
        Integer b("-3");

        Integer c = a + b;

        ensure(c.toString() == "2");
    }

    TEST_CASE {
        Integer a("5");
        Integer b("-6");

        Integer c = a + b;

        ensure(c.toString() == "-1");
    }

    TEST_CASE {
        Integer a("1354");
        Integer b("-6418");

        Integer c = a + b;

        ensure(c.toString() == "-5064");
    }

    TEST_CASE {
        Integer a("1354631452");
        Integer b("-641865");

        Integer c = a + b;

        ensure(c.toString() == "1353989587");
    }

    TEST_CASE {
        Integer a("-5");
        Integer b("6");

        Integer c = a + b;

        ensure(c.toString() == "1");
    }

    TEST_CASE {
        Integer a("-107");
        Integer b("2000");

        Integer c = a + b;

        ensure(c.toString() == "1893");
    }

    TEST_CASE {
        Integer a("-5");
        Integer b("-4");

        Integer c = a + b;

        ensure(c.toString() == "-9");
    }

    TEST_CASE {
        Integer a("-564");
        Integer b("-136");

        Integer c = a + b;

        ensure(c.toString() == "-700");
    }
    
    return 0;
}