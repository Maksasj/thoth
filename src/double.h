#ifndef _THOTH_DOUBLE_H_
#define _THOTH_DOUBLE_H_

#include "integer.h"

namespace thoth {
    class Double : public Integer {
        private:
            int _power;

            void trimZerosFront();
            void trimZerosBack();
               
            void aproximateTo(int power);
            void aproximateClose();

            static bool closeToOne(Double value);

            Double mod() const;
        public:
            Double();
            Double(std::string data);

            Double operator+(const Double &second) const;
            Double operator-(const Double &second) const;
            Double operator*(const Double &second) const;
            Double operator/(const Double &second) const;
            Double operator%(const Double &second) const;

            bool operator<(const Double &second)    const;
            bool operator<=(const Double &second)   const;
            bool operator>(const Double &second)    const;
            bool operator>=(const Double &second)   const;
            bool operator==(const Double &second)   const;
            bool operator!=(const Double &second)   const;

            Double findInverse() const;
            
            std::string toString() const;
            //std::string toString(bool) const; debug
    };
};

#endif