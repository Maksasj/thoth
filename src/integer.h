#ifndef _THOTH_INTEGER_H_
#define _THOTH_INTEGER_H_

#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <iomanip>

#include "arithmetics.h"

#define _THOTH_ASCII_SHIFT 48

namespace thoth {
    class Integer {
        protected:
            std::deque<char> _data;

            // true -> positive 
            // false -> negative 
            bool sign; 

            Integer _plus(const Integer &first, const Integer &second);
            Integer _minus(const Integer &first, const Integer &second);
            Integer abs() const;
        public:
            Integer();
            Integer(void*);
            Integer(std::string data);

            bool isPositive() const;

            Integer operator+(const Integer &second);
            Integer operator-(const Integer &second);
            //Integer operator*(const Integer &second);
            
            //Integer operator/(const Integer &second);
            //Integer operator%(const Integer &second);

            bool operator<(const Integer &second)   const;
            bool operator<=(const Integer &second)  const;
            bool operator>(const Integer &second)   const;
            bool operator>=(const Integer &second)  const;
            bool operator==(const Integer &second)  const;
            bool operator!=(const Integer &second)  const;

            std::string toString() const;
    };
};

#endif