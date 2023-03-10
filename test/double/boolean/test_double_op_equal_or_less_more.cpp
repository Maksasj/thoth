#include <iostream>

#include "test.h"

using namespace thoth;

int main() {
    TEST_CASE {
        Double a("1");
        Double b("-1");

        ensure(a >= b == true);
        ensure(a <= b == false);
        ensure(b <= a == true);
        ensure(b >= a == false);
    }

    TEST_CASE {
        Double a("1");
        Double b("0");

        ensure((b <= a) == true);
    }

    TEST_CASE {
        Double a("0");
        Double b("1");

        ensure((b >= a) == true);
    }

    TEST_CASE {
        Double a("1");
        Double b("1");

        ensure(a >= b == true);
        ensure(a <= b == true);
        ensure(b <= a == true);
        ensure(b >= a == true);
    }

    TEST_CASE {
        Double a("2");
        Double b("-1");

        ensure(a >= b == true);
        ensure(a <= b == false);
        ensure(b <= a == true);
        ensure(b >= a == false);
    }

    TEST_CASE {
        Double a("999");
        Double b("998");

        ensure(a >= b == true);
        ensure(a <= b == false);
        ensure(b <= a == true);
        ensure(b >= a == false);
    }

    TEST_CASE {
        Double a("1");
        Double b("0.1");

        ensure(a > b == true);
        ensure(a >= b == true);
    }
    TEST_CASE {
        Double a("1.0");
        Double b("0.1");

        ensure(a >= b == true);
    }

    TEST_CASE {
        Double a("0.1");
        Double b("0.01");

        ensure(a >= b == true);
    }

    TEST_CASE {
        Double a("100000000000000000000000000000.00000000000000000000000001");
        Double b("0.01");

        ensure(a >= b == true);
    }

    TEST_CASE {
        Double a("100000000000000000000000000000.00000000000000000000000001");
        Double b("100000000000000000000000000000.00000000000000000000000000");

        ensure(a >= b == true);
    }

    TEST_CASE {
        Double a("579805237589328573290568329068320628608620328062860286032806825496172894618946789.579805237589328573290568329068320628608620328062860286032806825496172894618946789");
        Double b("579805237589328573290568329068320628608620328062860286032806825496172894618946789.579805237589328573290568329068320628608620328062860286032806825496172894618946788");

        ensure(a >= b == true);
    }

    TEST_CASE {
        Double a("100.00000000000000000000000001");
        Double b("0.00000000000000001");

        ensure(a >= b == true);
    }

    TEST_CASE {
        Double a("0.1");
        Double b("1");

        ensure(a <= b == true);
    }

    TEST_CASE {
        Double a("0.1");
        Double b("1.0");

        ensure(a <= b == true);
    }

    TEST_CASE {
        Double a("0.01");
        Double b("0.1");

        ensure(a <= b == true);
    }
    TEST_CASE {
        Double a("0.01");
        Double b("100000000000000000000000000000.00000000000000000000000001");

        ensure(a <= b == true);
    }

    TEST_CASE {
        Double a("100000000000000000000000000000.00000000000000000000000000");
        Double b("100000000000000000000000000000.00000000000000000000000001");

        ensure(a <= b == true);
    }

    TEST_CASE {
        Double a("579805237589328573290568329068320628608620328062860286032806825496172894618946789.579805237589328573290568329068320628608620328062860286032806825496172894618946788");
        Double b("579805237589328573290568329068320628608620328062860286032806825496172894618946789.579805237589328573290568329068320628608620328062860286032806825496172894618946789");

        ensure(a <= b == true);
    }

    TEST_CASE {
        Double a("0.00000000000000001");
        Double b("100.00000000000000000000000001");

        ensure(a <= b == true);
    }

    TEST_CASE {
        Double a("1");
        Double b("1");

        ensure(a >= b);
        ensure(a <= b);
    }

    TEST_CASE {
        Double a("1.0");
        Double b("1.0");

        ensure(a >= b);
        ensure(a <= b);
    }

    TEST_CASE {
        Double a("0.1");
        Double b("0.1");

        ensure(a >= b);
        ensure(a <= b);
    }

    TEST_CASE {
        Double a("0.123456789");
        Double b("0.123456789");

        ensure(a >= b);
        ensure(a <= b);
    }
    
    TEST_CASE {
        Double a("123456789.123456789");
        Double b("123456789.123456789");

        ensure(a >= b);
        ensure(a <= b);
    }

    TEST_CASE {
        Double a("456754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");
        Double b("456754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");

        ensure(a >= b);
        ensure(a <= b);
    }

    TEST_CASE {
        Double a("416754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");
        Double b("456754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");

        ensure(a <= b);
    }

    TEST_CASE {
        Double a("-1");
        Double b("-1");

        ensure(a <= b);
        ensure(a >= b);
    }

    TEST_CASE {
        Double a("-1.0");
        Double b("-1.0");

        ensure(a <= b);
        ensure(a >= b);
    }

    TEST_CASE {
        Double a("-0.1");
        Double b("-0.1");

        ensure(a <= b);
        ensure(a >= b);
    }

    TEST_CASE {
        Double a("-0.123456789");
        Double b("-0.123456789");

        ensure(a <= b);
        ensure(a >= b);
    }
    
    TEST_CASE {
        Double a("-123456789.123456789");
        Double b("-123456789.123456789");

        ensure(a <= b);
        ensure(a >= b);
    }

    TEST_CASE {
        Double a("-456754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");
        Double b("-456754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");

        ensure(a <= b);
        ensure(a >= b);
    }

    TEST_CASE {
        Double a("-416754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");
        Double b("-316754567895982737589265893265832752375903275932758932753289573290573290570.56827598237589327583276329602067290367029378692375901789571095761975102756129067192671296");

        ensure(a <= b);
    }

    return 0;
}