#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("0");

        ensure((a >= b) == true);
        ensure((b <= a) == true);
    }
    TEST_CASE {
        Integer a("1");
        Integer b("1");

        ensure((a >= b) == true);
        ensure((a <= b) == true);
        ensure((b <= a) == true);
        ensure((b >= a) == true);
    }

    TEST_CASE {
        Integer a("2");
        Integer b("-1");

        ensure((a >= b) == true);
        ensure((a <= b) == false);
    }

    TEST_CASE {
        Integer a("999");
        Integer b("999");

        ensure(a >= b == true);
        ensure(a <= b == true);
    }

    TEST_CASE {
        Integer a("999");
        Integer b("998");

        ensure(a >= b == true);
        ensure(a <= b == false);
    }

    TEST_CASE {
        Integer a("998");
        Integer b("999");

        ensure(a >= b == false);
        ensure(a <= b == true);
    }

    TEST_CASE {
        Integer a("-416754567895982737589265893265832752375903275932758932753289573290573290570");
        Integer b("-316754567895982737589265893265832752375903275932758932753289573290573290570");

        ensure(a <= b);
    }

    return 0;
}