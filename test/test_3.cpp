#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("0");
        Integer b("1");
        Integer c("0");

        for(int i = 0; i < 2000; ++i) {
            ensure(c.toString() == std::to_string(i));

            c = a + b;
        }
    }

    return 0;
}