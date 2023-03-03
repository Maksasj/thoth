#ifndef _THOTH_DOUBLE_H_
#define _THOTH_DOUBLE_H_

#include "integer.h"

namespace thoth {
    class Double : public Integer {
        int power;

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

        public:
            Double();
            Double(std::string data);

            bool operator<(const Double &second)   const;
            bool operator<=(const Double &second)  const;
            bool operator>(const Double &second)    const;
            bool operator>=(const Double &second)  const;
            bool operator==(const Double &second)   const;
            bool operator!=(const Double &second)  const;

            std::string toString() const;
    };
};

#endif