#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        thoth::Double a("132.123");
        thoth::Double b("987.821");

        auto c = a + b;

        ensure(c.toString() == "1119.944");
    }

    TEST_CASE {
        thoth::Double a("987.821");
        thoth::Double b("132.123");

        auto c = a + b;

        ensure(c.toString() == "1119.944");
    }

    TEST_CASE {
        thoth::Double a("987.821");
        thoth::Double b("132.1");

        auto c = a + b;

        ensure(c.toString() == "1119.921");
    }

    TEST_CASE {
        thoth::Double a("132.1");
        thoth::Double b("987.821");

        auto c = a + b;

        ensure(c.toString() == "1119.921");
    }

    TEST_CASE {
        thoth::Double a("1.2456454");
        thoth::Double b("987.821");

        auto c = a + b;

        ensure(c.toString() == "989.0666454");
    }

    TEST_CASE {
        thoth::Double a("987.821");
        thoth::Double b("1.2456454");

        auto c = a + b;

        ensure(c.toString() == "989.0666454");
    }

    TEST_CASE {
        thoth::Double a("0.0");
        thoth::Double b("1.2456454");

        auto c = a + b;

        ensure(c.toString() == "1.2456454");
    }

    TEST_CASE {
        thoth::Double a("1.2456454");
        thoth::Double b("0.0");

        auto c = a + b;

        ensure(c.toString() == "1.2456454");
    }

    TEST_CASE {
        thoth::Double a("1.821");
        thoth::Double b("987.821");

        auto c = a + b;

        ensure(c.toString() == "989.642");
    }

    TEST_CASE {
        thoth::Double a("987.821");
        thoth::Double b("1.821");

        auto c = a + b;

        ensure(c.toString() == "989.642");
    }
    TEST_CASE {
        thoth::Double a("-1.0");
        thoth::Double b("1.0");

        auto c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        thoth::Double a("1.0");
        thoth::Double b("-1.0");

        auto c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        thoth::Double a("-1.123");
        thoth::Double b("1.123");

        auto c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        thoth::Double a("1.123");
        thoth::Double b("-1.123");

        auto c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        thoth::Double a("0.123");
        thoth::Double b("-0.123");

        auto c = a + b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        thoth::Double a("0.9999");
        thoth::Double b("0.0001");

        auto c = a + b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        thoth::Double a("0.0001");
        thoth::Double b("0.9999");

        auto c = a + b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        thoth::Double a("0.9998");
        thoth::Double b("0.0001");

        auto c = a + b;

        ensure(c.toString() == "0.9999");
    }

    TEST_CASE {
        thoth::Double a("0.0001");
        thoth::Double b("0.9998");

        auto c = a + b;

        ensure(c.toString() == "0.9999");
    }

    TEST_CASE {
        thoth::Double a("9.9999");
        thoth::Double b("0.0001");

        auto c = a + b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        thoth::Double a("0.0001");
        thoth::Double b("9.9999");

        auto c = a + b;

        ensure(c.toString() == "10.0");
    }

    TEST_CASE {
        thoth::Double a("0.00000000000000000000000000000000000000000000000000000000000001");
        thoth::Double b("9999999999999999999999999999999999999.99999999999999999999999999999999999999999999999999999999999999");

        auto c = a + b;

        ensure(c.toString() == "10000000000000000000000000000000000000.0");
    }

    TEST_CASE {
        thoth::Double a("9999999999999999999999999999999999999.99999999999999999999999999999999999999999999999999999999999999");
        thoth::Double b("0.00000000000000000000000000000000000000000000000000000000000001");

        auto c = a + b;

        ensure(c.toString() == "10000000000000000000000000000000000000.0");
    }

    TEST_CASE {
        thoth::Double a("0.00000000000000000000000000000000000000000000000000000000000001");
        thoth::Double b("0.00000000000000000000000000000000000000000000000000000000000001");

        auto c = a + b;

        ensure(c.toString() == "0.00000000000000000000000000000000000000000000000000000000000002");
    }

    TEST_CASE {
        thoth::Double a("0.00000000000000000000000000000000000000000000000000000000000001");
        thoth::Double b("0.000000000000000000000000000000000000000000000000000000000000001");

        auto c = a + b;

        ensure(c.toString() == "0.000000000000000000000000000000000000000000000000000000000000011");
    }

    TEST_CASE {
        thoth::Double a("0.000000000000000000000000000000000000000000000000000000000000001");
        thoth::Double b("0.00000000000000000000000000000000000000000000000000000000000001");

        auto c = a + b;

        ensure(c.toString() == "0.000000000000000000000000000000000000000000000000000000000000011");
    }

    TEST_CASE {
        thoth::Double a("1.0");
        thoth::Double b("0.000000000000000000000000000000000000000000000000000000000000001");

        auto c = a + b;

        ensure(c.toString() == "1.000000000000000000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        thoth::Double a("0.000000000000000000000000000000000000000000000000000000000000001");
        thoth::Double b("1.0");

        auto c = a + b;

        ensure(c.toString() == "1.000000000000000000000000000000000000000000000000000000000000001");
    }

    {
        thoth::Double a("0.5");
        thoth::Double b("-0.2");

        auto c = a + b;

        ensure(c.toString() == "0.3");
    }

    {
        thoth::Double a("100000000000000000000000.0");
        thoth::Double b("-0.1");

        auto c = a + b;

        ensure(c.toString() == "99999999999999999999999.9");
    }

    {
        thoth::Double a("-100000000000000000000000.0");
        thoth::Double b("0.1");

        auto c = a + b;

        ensure(c.toString() == "-99999999999999999999999.9");
    }

    return 0;
}