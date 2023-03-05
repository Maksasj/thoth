#ifndef _THOTH_DOUBLE_H_
#define _THOTH_DOUBLE_H_

#include "integer.h"

namespace thoth {
    class Double : public Integer {
        private:
            int _power;

            void trimZerosFront();
                
            void trimZerosBack();
               
            void aproximateTo(int power) {
                while (!_data.empty() && _power < power)
                {
                    _data.pop_front();
                    ++_power;
                }

                if(_data.empty()) {
                    _data.push_back(0);
                    _power = 0;
                }
            }

            void aproximateClose() {
                if(_power > -100) return;

                char digit = *(_data.begin());
                
                if(*(_data.begin()) == 9) {
                    while(true) {
                        if(_data.begin() + 1 == _data.end()) break;
                        if(*(_data.begin() + 1) != 9) break;
                        _data.pop_front();
                        ++_power;
                    }
                    //do {
                    //    _data.pop_front();
                    //    ++_power;
                    //} while(!_data.empty() && *(_data.begin() + 1) == 9);
                } else {
                    char last = _data.front();

                    if(last >= 5) {
                        Double epsilon("1.0");
                        epsilon._power = epsilon._power + _power + 1;
                        epsilon.expandBack(Math::abs<int>(_power + 1));
                        epsilon.trimZerosFront();
                        
                        *this = *this + epsilon;
                    }

                    return;
                }

                Double epsilon("1.0");
                epsilon._power = epsilon._power + _power;
                epsilon.expandBack(Math::abs<int>(_power));
                epsilon.trimZerosFront();

                *this = *this + epsilon;
            }

            static bool closeToOne(Double value);
        public:
            Double();
            Double(std::string data);

            Double operator+(const Double &second);
            Double operator-(const Double &second) const;
            Double operator*(const Double &second) const;
            Double operator/(const Double &second);

            //Integer operator%(const Integer &second);

            bool operator<(const Double &second)   const;
            bool operator<=(const Double &second)  const;
            bool operator>(const Double &second)    const;
            bool operator>=(const Double &second)  const;
            bool operator==(const Double &second)   const;
            bool operator!=(const Double &second)  const;

            Double findInverse() const;
            
            std::string toString() const;
            std::string toString(bool) const; //no dot
    };
};

#endif