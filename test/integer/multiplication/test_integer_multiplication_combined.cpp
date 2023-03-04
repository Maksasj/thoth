#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("-4894165461654616541616541165416131351651668041861246842244814924");
        Integer b("4985849648568456489654895684851111641598415641562845162984629846295");

        Integer c = a * b;

        ensure(c.toString() == "-24401573147026547499716224412241146720473463194100597664831915577717538183908582481871941080950015844555300687555363919378842106580");
    }
    TEST_CASE {
        Integer a("-4985849648568456489654895684851111641598415641562845162984629846295");
        Integer b("4894165461654616541616541165416131351651668041861246842244814924");

        Integer c = a * b;

        ensure(c.toString() == "-24401573147026547499716224412241146720473463194100597664831915577717538183908582481871941080950015844555300687555363919378842106580");
    }

    TEST_CASE {
        Integer a("1");
        Integer b("-1");

        Integer c = a * b;

        ensure(c.toString() == "-1");
    }

    TEST_CASE {
        Integer a("-100");
        Integer b("1");

        Integer c = a * b;

        ensure(c.toString() == "-100");
    }
    
    TEST_CASE {
        Integer a("-1");
        Integer b("100");

        Integer c = a * b;

        ensure(c.toString() == "-100");
    }

    TEST_CASE {
        Integer a("-5");
        Integer b("6");

        Integer c = a * b;

        ensure(c.toString() == "-30");
    }

    TEST_CASE {
        Integer a("-50");
        Integer b("60");

        Integer c = a * b;

        ensure(c.toString() == "-3000");
    }

    TEST_CASE {
        Integer a("-123");
        Integer b("321");

        Integer c = a * b;

        ensure(c.toString() == "-39483");
    }

    TEST_CASE {
        Integer a("-2");
        Integer b("2");

        Integer c = a * b;

        ensure(c.toString() == "-4");
    }
    
    return 0;
}