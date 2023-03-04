#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("0");
        Integer b("0");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("0");
        Integer b("1");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("0");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("1");

        auto c = a * b;

        ensure(c.toString() == "1");
    }

    TEST_CASE {
        Integer a("2");
        Integer b("2");

        auto c = a * b;

        ensure(c.toString() == "4");
    }

    TEST_CASE {
        Integer a("3");
        Integer b("3");

        auto c = a * b;

        ensure(c.toString() == "9");
    }
    
    TEST_CASE {
        Integer a("4");
        Integer b("4");

        auto c = a * b;

        ensure(c.toString() == "16");
    }

    TEST_CASE {
        Integer a("5");
        Integer b("5");

        auto c = a * b;

        ensure(c.toString() == "25");
    }

    TEST_CASE {
        Integer a("6");
        Integer b("6");

        auto c = a * b;

        ensure(c.toString() == "36");
    }

    TEST_CASE {
        Integer a("7");
        Integer b("7");

        auto c = a * b;

        ensure(c.toString() == "49");
    }

    TEST_CASE {
        Integer a("8");
        Integer b("8");

        auto c = a * b;

        ensure(c.toString() == "64");
    }

    TEST_CASE {
        Integer a("9");
        Integer b("9");

        auto c = a * b;

        ensure(c.toString() == "81");
    }

    TEST_CASE {
        Integer a("-1");
        Integer b("0");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("0");
        Integer b("-1");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("-1");
        Integer b("-1");

        auto c = a * b;

        ensure(c.toString() == "1");
    }

    TEST_CASE {
        Integer a("-2");
        Integer b("-2");

        auto c = a * b;

        ensure(c.toString() == "4");
    }

    TEST_CASE {
        Integer a("-3");
        Integer b("-3");

        auto c = a * b;

        ensure(c.toString() == "9");
    }
    
    TEST_CASE {
        Integer a("-4");
        Integer b("-4");

        auto c = a * b;

        ensure(c.toString() == "16");
    }

    TEST_CASE {
        Integer a("-5");
        Integer b("-5");

        auto c = a * b;

        ensure(c.toString() == "25");
    }

    TEST_CASE {
        Integer a("-6");
        Integer b("-6");

        auto c = a * b;

        ensure(c.toString() == "36");
    }

    TEST_CASE {
        Integer a("-7");
        Integer b("-7");

        auto c = a * b;

        ensure(c.toString() == "49");
    }

    TEST_CASE {
        Integer a("-8");
        Integer b("-8");

        auto c = a * b;

        ensure(c.toString() == "64");
    }

    TEST_CASE {
        Integer a("-9");
        Integer b("-9");

        auto c = a * b;

        ensure(c.toString() == "81");
    }

    TEST_CASE {
        Integer a("123456789");
        Integer b("987654321");

        auto c = a * b;

        ensure(c.toString() == "121932631112635269");
    }

    TEST_CASE {
        Integer a("-123456789");
        Integer b("987654321");

        auto c = a * b;

        ensure(c.toString() == "-121932631112635269");
    }

    TEST_CASE {
        Integer a("-123456789");
        Integer b("-987654321");

        auto c = a * b;

        ensure(c.toString() == "121932631112635269");
    }
    
    TEST_CASE {
        Integer a("123456789");
        Integer b("-987654321");

        auto c = a * b;

        ensure(c.toString() == "-121932631112635269");
    }

    TEST_CASE {
        Integer a("1000000");
        Integer b("0");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("0");
        Integer b("1000000");

        auto c = a * b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("1000000");
        Integer b("1");

        auto c = a * b;

        ensure(c.toString() == "1000000");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("1000000");

        auto c = a * b;

        ensure(c.toString() == "1000000");
    }

    TEST_CASE {
        Integer a("999999");
        Integer b("999999");

        auto c = a * b;

        ensure(c.toString() == "999998000001");
    }

    TEST_CASE {
        Integer a("-999999");
        Integer b("999999");

        auto c = a * b;

        ensure(c.toString() == "-999998000001");
    }

    TEST_CASE {
        Integer b("-999999");
        Integer a("999999");

        auto c = a * b;

        ensure(c.toString() == "-999998000001");
    }

    TEST_CASE {
        Integer b("-999999");
        Integer a("-999999");

        auto c = a * b;

        ensure(c.toString() == "999998000001");
    }

    
    TEST_CASE {
        Integer b("2147483647");
        Integer a("2147483647");

        auto c = a * b;

        ensure(c.toString() == "4611686014132420609");
    }

    TEST_CASE {
        Integer b("-2147483647");
        Integer a("-2147483647");

        auto c = a * b;

        ensure(c.toString() == "4611686014132420609");
    }

    TEST_CASE {
        Integer b("2147483647");
        Integer a("-2147483647");

        auto c = a * b;

        ensure(c.toString() == "-4611686014132420609");
    }

    TEST_CASE {
        Integer a("2147483647");
        Integer b("-2147483647");

        auto c = a * b;

        ensure(c.toString() == "-4611686014132420609");
    }

    return 0;
}