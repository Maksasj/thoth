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
            
            int len() const {
                return _data.size();   
            }

            void expandFront(unsigned int howMuch) {
                while (howMuch > 0) {
                    _data.push_front(0);
                    --howMuch;
                }
            }

            void expandBack(unsigned int howMuch) {
                while (howMuch > 0) {
                    _data.push_back(0);
                    --howMuch;
                }
            }

            static std::deque<char> _plus(const Integer &first, const Integer &second);
            static std::deque<char> _minus(const Integer &first, const Integer &second);
            Integer _multy(const Integer &first, const Integer &second);
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

            std::string toString() const;
    };
};

#endif