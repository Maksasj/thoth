#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("0");
        Integer b("1");

        for(int i = 0; i < 2000; ++i) {
            ensure(a.toString() == std::to_string(i));
            
            a.plus(b);
        }
    }

    return 0;
}