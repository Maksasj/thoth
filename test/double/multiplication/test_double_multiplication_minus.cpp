#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("-2.0");
        Double b("-0.5");

        auto c = a * b;

        ensure(c.toString() == "1.0");
    }

    TEST_CASE {
        Double a("-2.0");
        Double b("-0.005");

        auto c = a * b;

        ensure(c.toString() == "0.01");
    }

    TEST_CASE {
        Double a("-0.005");
        Double b("-2.0");

        auto c = a * b;

        ensure(c.toString() == "0.01");
    }

    TEST_CASE {
        Double a("-0.005");
        Double b("-0.00000001");

        auto c = a * b;

        ensure(c.toString() == "0.00000000005");
    }
    
    TEST_CASE {
        Double a("-0.00000001");
        Double b("-0.005");

        auto c = a * b;

        ensure(c.toString() == "0.00000000005");
    }

    TEST_CASE {
        Double a("-123.123");
        Double b("-0.005");

        auto c = a * b;

        ensure(c.toString() == "0.615615");
    }

    TEST_CASE {
        Double a("-83957209573290750932672903672903804891782184018250185601286.65823579237639207693267290672390673296723906");
        Double b("-0.000000000000000000000000000057281572937653276930262869030632626000603602306023060234274923789048329054832580923589032568932686005");

        auto c = a * b;

        ensure(c.toString() == "4809201023814296104800879450164.8568490188916090045886280654749145987365297497433233505770010262056569038490072728264057954101302967822925614568365803447725038735598712585610222625926936721455220747513553");
    }

    TEST_CASE {
        Double a("-123.0");
        Double b("0.0");

        auto c = a * b;

        ensure(c.toString() == "0.0");
    }

    TEST_CASE {
        Double a("-1.41421356237309504880168872420969807856967187537694");
        Double b("-1.41421356237309504880168872420969807856967187537694");

        auto c = a * b;

        ensure(c.toString() == "1.9999999999999999999999999999999999999999999999999771656080961606813043742880457326381198582670837636");
    }

    TEST_CASE {
        Double a("-1.00000000000000000000000000000000000000000000000001");
        Double b("-1.00000000000000000000000000000000000000000000000001");

        auto c = a * b;

        ensure(c.toString() == "1.0000000000000000000000000000000000000000000000000200000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        Double a("-1.00000000000000000000000000000000000000000000000001");
        Double b("-0.00000000000000000000000000000000000000000000000001");

        auto c = a * b;

        ensure(c.toString() == "0.0000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000001");
    }

    TEST_CASE {
        Double a("-5");
        Double b("-6");

        auto c = a * b;

        ensure(c.toString() == "30.0");
    }

    TEST_CASE {
        Double a("-6");
        Double b("-5");

        auto c = a * b;

        ensure(c.toString() == "30.0");
    }

    TEST_CASE {
        Double a("-6.0");
        Double b("-5.0");

        auto c = a * b;

        ensure(c.toString() == "30.0");
    }

    TEST_CASE {
        Double a("-5.0");
        Double b("-6.0");

        auto c = a * b;

        ensure(c.toString() == "30.0");
    }

    TEST_CASE {
        Double a("-2.0");
        Double b("-2.01");

        auto c = a * b;

        ensure(c.toString() == "4.02");
    }

    TEST_CASE {
        Double a("-2.01");
        Double b("-2.0");

        auto c = a * b;

        ensure(c.toString() == "4.02");
    }

    TEST_CASE {
        Double a("-20.0");
        Double b("-2.0");

        auto c = a * b;

        ensure(c.toString() == "40.0");
    }

    TEST_CASE {
        Double a("-2.0");
        Double b("-20.0");

        auto c = a * b;

        ensure(c.toString() == "40.0");
    }

    TEST_CASE {
        Double a("-20.123");
        Double b("-2.0");

        auto c = a * b;

        ensure(c.toString() == "40.246");
    }

    TEST_CASE {
        Double a("-2.0");
        Double b("-20.123");

        auto c = a * b;

        ensure(c.toString() == "40.246");
    }

    TEST_CASE {
        Double a("-20.0");
        Double b("-2.123");

        auto c = a * b;

        ensure(c.toString() == "42.46");
    }

    TEST_CASE {
        Double a("-2.123");
        Double b("-20.0");

        auto c = a * b;

        ensure(c.toString() == "42.46");
    }

    TEST_CASE {
        Double a("-20.123456789");
        Double b("-2.798");

        auto c = a * b;

        ensure(c.toString() == "56.305432095622");
    }

    TEST_CASE {
        Double a("-20.1232346");
        Double b("-2.7897988798789");

        auto c = a * b;

        ensure(c.toString() == "56.13977734662032428994");
    }

    TEST_CASE {
        Double a("-20.0");
        Double b("-2.123");

        auto c = a * b;

        ensure(c.toString() == "42.46");
    }

    TEST_CASE {
        Double a("-1.123456789");
        Double b("-0.798");

        auto c = a * b;

        ensure(c.toString() == "0.896518517622");
    }

    TEST_CASE {
        Double a("-1.1232346");
        Double b("-0.7897988798789");

        auto c = a * b;

        ensure(c.toString() == "0.88712942892122428994");
    }

    TEST_CASE {
        Double a("-9.9999999999999999999999999999999999999999999999999");
        Double b("-1.0000000000000000000000000000000000000000000000001");

        auto c = a * b;

        ensure(c.toString() == "10.00000000000000000000000000000000000000000000000089999999999999999999999999999999999999999999999999");
    }

    TEST_CASE {
        Double a("-9.0");
        Double b("-0.0000000000000000000000000000000000000000000000001");

        auto c = a * b;

        ensure(c.toString() == "0.0000000000000000000000000000000000000000000000009");
    }

    return 0;
}