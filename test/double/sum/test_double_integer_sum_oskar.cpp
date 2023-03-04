#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("2");
        Double b("5");

        Double c = a + b;

        ensure(c.toString() == "7.0");
    }

    TEST_CASE {
        Double a("7");
        Double b("3");

        Double c = a + b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        Double a("1999");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "2000.0");
    }

    TEST_CASE {
        Double a("999");
        Double b("1");

        Double c = a + b;

        ensure(c.toString() == "1000.0");
    }

    TEST_CASE {
        Double a("5");
        Double b("-3");

        Double c = a + b;

        ensure(c.toString() == "2.0");
    }

    TEST_CASE {
        Double a("5");
        Double b("-6");

        Double c = a + b;

        ensure(c.toString() == "-1.0");
    }

    TEST_CASE {
        Double a("1354");
        Double b("-6418");

        Double c = a + b;

        ensure(c.toString() == "-5064.0");
    }

    TEST_CASE {
        Double a("1354631452");
        Double b("-641865");

        Double c = a + b;

        ensure(c.toString() == "1353989587.0");
    }

    TEST_CASE {
        Double a("-5");
        Double b("6");

        Double c = a + b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("-107");
        Double b("2000");

        Double c = a + b;

        ensure(c.toString() == "1893.0");
    }

    TEST_CASE {
        Double a("-5");
        Double b("-4");

        Double c = a + b;

        ensure(c.toString() == "-9.0");
    }

    TEST_CASE {
        Double a("-564");
        Double b("-136");

        Double c = a + b;

        ensure(c.toString() == "-700.0");
    }
    
    return 0;
}