#ifndef _THOTH_INTEGER_H_
#define _THOTH_INTEGER_H_

#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>

#include "arithmetics.h"

#define _THOTH_ASCII_SHIFT 48

namespace thoth {
    class Integer {
        protected:
            std::deque<char> _data;

            // true -> positive 
            // false -> negative 
            bool sign; 
            
            int len() const;

            void expandFront(unsigned int howMuch);
            void expandBack(unsigned int howMuch);
            void trimZerosBack();

            static std::deque<char> _plus(const Integer &first, const Integer &second);
            static std::deque<char> _minus(const Integer &first, const Integer &second, const bool popZeros = true);
            static std::deque<char> _multy(const Integer &first, const Integer &second);
            Integer abs() const;
        public:
            Integer();
            Integer(void*);
            Integer(std::string data);

            bool isPositive() const;

            Integer operator+(const Integer &second);
            Integer operator-(const Integer &second);
            Integer operator*(const Integer &second);
            
            //Integer operator/(const Integer &second);
            //Integer operator%(const Integer &second);

            bool operator<(const Integer &second)   const;
            bool operator<=(const Integer &second)  const;
            bool operator>(const Integer &second)   const;
            bool operator>=(const Integer &second)  const;
            bool operator==(const Integer &second)  const;
            bool operator!=(const Integer &second)  const;

            std::string toString();
            std::string toString() const;
    };
};

#endif