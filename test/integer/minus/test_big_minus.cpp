#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Integer a("1");
        Integer b("1");

        Integer c = a - b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("999");
        Integer b("999");

        Integer c = a - b;

        ensure(c.toString() == "0");
    }

    TEST_CASE {
        Integer a("5198465126841256841265412");
        Integer b("4155984512489156294981564895149815664589152489415");

        Integer c = a - b;

        ensure(c.toString() == "-4155984512489156294981559696684688823332311224003");
    }

    TEST_CASE {
        Integer a("4155984512489156294981564895149815664589152489415");
        Integer b("5198465126841256841265412");

        Integer c = a - b;

        ensure(c.toString() == "4155984512489156294981559696684688823332311224003");
    }

    TEST_CASE {
        Integer a("1000000000000000000000000000000000000000000");
        Integer b("1");

        Integer c = a - b;

        ensure(c.toString() == "999999999999999999999999999999999999999999");
    }

    TEST_CASE {
        Integer a("1000000000000000000000000000000000000000001");
        Integer b("1");

        Integer c = a - b;

        ensure(c.toString() == "1000000000000000000000000000000000000000000");
    }

    TEST_CASE {
        Integer a("-4155984512489156294981564895149815664589152489415");
        Integer b("-519846512684125684126541");

        Integer c = a - b;

        ensure(c.toString() == "-4155984512489156294981564375303302980463468362874");
    }
    
    TEST_CASE {
        Integer a("-4155984512489156294981564895149815664589152489415");
        Integer b("-1");

        Integer c = a - b;

        ensure(c.toString() == "-4155984512489156294981564895149815664589152489414");
    }

    TEST_CASE {
        Integer a("-1");
        Integer b("-4155984512489156294981564895149815664589152489415");

        Integer c = a - b;

        ensure(c.toString() == "4155984512489156294981564895149815664589152489414");
    }

    return 0;
}