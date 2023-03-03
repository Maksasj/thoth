#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("1");

        ensure(a.toString() == "1");
    }

    TEST_CASE {
        Double a("0");

        ensure(a.toString() == "0");
    }

    TEST_CASE {
        Double a("123");

        ensure(a.toString() == "123");
    }

    TEST_CASE {
        Double a("845698542698545698542698542698542696854269854");

        ensure(a.toString() == "845698542698545698542698542698542696854269854");
    }

    TEST_CASE {
        Double a("0.1");

        ensure(a.toString() == "0.1");
    }

    TEST_CASE {
        Double a("0.15848515684516847568471589545698471");

        ensure(a.toString() == "0.15848515684516847568471589545698471");
    }

    TEST_CASE {
        Double a("2345678765434567832758135713257091357913579105.451924717977175917591275715680802680235079479041");

        ensure(a.toString() == "2345678765434567832758135713257091357913579105.451924717977175917591275715680802680235079479041");
    }

    TEST_CASE {
        Double a("10000000000000000000000000000000000000.000000000000000000000000000000000000000000000000000001");

        ensure(a.toString() == "10000000000000000000000000000000000000.000000000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        Double a("0.000000000000000000000000000000000000000000000000000001");

        ensure(a.toString() == "0.000000000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        Double a("1.01");

        ensure(a.toString() == "1.01");
    }

    TEST_CASE {
        Double a("9.9");

        ensure(a.toString() == "9.9");
    }

    TEST_CASE {
        Double a("998.1");

        ensure(a.toString() == "998.1");
    }

    TEST_CASE {
        Double a("-1");

        ensure(a.toString() == "-1");
    }

    TEST_CASE {
        Double a("-123");

        ensure(a.toString() == "-123");
    }

    TEST_CASE {
        Double a("-845698542698545698542698542698542696854269854");

        ensure(a.toString() == "-845698542698545698542698542698542696854269854");
    }

    TEST_CASE {
        Double a("-0.1");

        ensure(a.toString() == "-0.1");
    }

    TEST_CASE {
        Double a("-0.15848515684516847568471589545698471");

        ensure(a.toString() == "-0.15848515684516847568471589545698471");
    }

    TEST_CASE {
        Double a("-2345678765434567832758135713257091357913579105.451924717977175917591275715680802680235079479041");

        ensure(a.toString() == "-2345678765434567832758135713257091357913579105.451924717977175917591275715680802680235079479041");
    }

    TEST_CASE {
        Double a("-10000000000000000000000000000000000000.000000000000000000000000000000000000000000000000000001");

        ensure(a.toString() == "-10000000000000000000000000000000000000.000000000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        Double a("-0.000000000000000000000000000000000000000000000000000001");

        ensure(a.toString() == "-0.000000000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        Double a("-1.01");

        ensure(a.toString() == "-1.01");
    }

    TEST_CASE {
        Double a("-9.9");

        ensure(a.toString() == "-9.9");
    }

    TEST_CASE {
        Double a("-998.1");

        ensure(a.toString() == "-998.1");
    }

    return 0;
}