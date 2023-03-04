#ifndef _THOTH_DOUBLE_H_
#define _THOTH_DOUBLE_H_

#include "integer.h"

namespace thoth {
    class Double : public Integer {
        private:
            int power;

            void trimZeros() {
                if(power == 0) return;
                
                while (!_data.empty() && _data.front() == 0) {
                    _data.pop_front();
                    ++power;

                    if(power == 0) {
                        break;
                    }
                }

                if(_data.empty()) {
                    _data.push_back(0);
                    power = 0;
                }
            }
        public:
            Double();
            Double(std::string data);

            Double operator+(const Double &second);
            //Integer operator-(const Integer &second);
            //Integer operator*(const Integer &second);
            
            //Integer operator/(const Integer &second);
            //Integer operator%(const Integer &second);

            bool operator<(const Double &second)   const;
            bool operator<=(const Double &second)  const;
            bool operator>(const Double &second)    const;
            bool operator>=(const Double &second)  const;
            bool operator==(const Double &second)   const;
            bool operator!=(const Double &second)  const;

            std::string toString() const;
            std::string toString(bool) const; //no dot
    };
};

#endif