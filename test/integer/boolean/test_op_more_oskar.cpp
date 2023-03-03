#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("-1");

        ensure(a > b == true);
    }

    TEST_CASE {
        Integer a("-4");
        Integer b("-8");

        ensure(a > b == true);
    }

    TEST_CASE {
        Integer a("-4");
        Integer b("-3");

        ensure(a > b == false);
    }

    TEST_CASE {
        Integer a("-208");
        Integer b("-3");

        ensure(a > b == false);
    }

    TEST_CASE {
        Integer a("-200978");
        Integer b("-200979");

        ensure(a > b == true);
    }

    TEST_CASE {
        Integer a("-1001");
        Integer b("-1001");

        ensure(a > b == false);
    }

    TEST_CASE {
        Integer a("51145");
        Integer b("51644");

        ensure(a > b == false);
    }

    return 0;
}