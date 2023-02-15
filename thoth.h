#ifndef _THOTH_H_
#define _THOTH_H_

#include <deque>
#include <string>
#include <sstream>
#include <iostream>

#define _THOTH_ASCII_SHIFT 48

namespace thoth {
    class integer {
        std::deque<char> _data;

        public:
            integer(std::string data) {
                for(auto l : data) {
                    _data.push_front(l - _THOTH_ASCII_SHIFT);
                }
            }

            void plus(integer second) {
                int aLength = _data.size();
                int bLength = second._data.size();
                int maxLength = std::max(aLength, bLength);
                int overflow = 0;

                for(int i = 0; i < maxLength; ++i) {
                    int aDigit = i < aLength ? _data[i] : 0;
                    int bDigit = i < bLength ? second._data[i] : 0;
                    int tmp = aDigit + bDigit + overflow;

                    if(tmp > 9) {
                        _data[i] = tmp % 10;
                        overflow = tmp / 10;
                    } else {
                        _data[i] = tmp;
                        overflow = 0;
                    }
                }
                if(overflow != 0) {
                    _data.push_back(overflow);
                }
            };

            std::string toString() {
                std::stringstream ss;
                for(int i = _data.size() - 1; i >= 0; --i) {
                    ss << (char)(_data[i] + _THOTH_ASCII_SHIFT);
                }
                return ss.str();
            }
    };
};

#endif