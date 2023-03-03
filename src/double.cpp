#include "double.h"

thoth::Double::Double() : thoth::Integer() {
    power = 0;
}

thoth::Double::Double(std::string data) : thoth::Integer(NULL) {
    sign = true;
    power = 0;

    if(data[0] == '-')
        sign = false;

    for(int i = data.size() - 1; i >= 0; --i) {
        auto l = data[i];
        //if((l > 57 || l < 48) && l != 45) throw std::invalid_argument("Integer expected only numbers but goth somethink other");

        if((l != '-') && l != '.') {
            _data.push_back(l - _THOTH_ASCII_SHIFT);
        }
    }

    int tmpPower = 0;
    for(int i = data.size() - 1; i > 0; --i) {
        if(data[i] == '.') {
            power = tmpPower;
            break;
        } else {
            --tmpPower;
        }
    }
}

std::string thoth::Double::toString() const {
    std::stringstream ss;

    if(!sign)
        ss << '-';

    for(int i = _data.size() - 1; i >= 0; --i) {
        if(power <= 0) {
            if(-power == i + 1) {
            ss << '.';
            }
        }

        ss << (char)(_data[i] + _THOTH_ASCII_SHIFT);
    }

    return ss.str();
}

bool thoth::Double::operator>(const Double &second) const {
    //std::cout << this->toString() << " > " << second.toString() << "\n";
    //std::cout << this->toString() << " " << this->power << "\n";
    //std::cout << second.toString() << " " << second.power << "\n";

    if(!sign) {
        if(second.sign) return false;
    } else {
        if(!second.sign) return true;
    }

    bool inverse = false;
    if(sign == false && second.sign == false) {
        inverse = true;
    }

    //if(power < second.power) return false;
    //if(power > second.power) return true;

    Double self = *this; 
    Double another = second; 

    if(self._data.size() < second._data.size()) {
        self.expandFront(second._data.size() -  self._data.size());
    } else if(self._data.size() > second._data.size()) {
        another.expandFront(self._data.size() - second._data.size());
    }

    std::cout << self.toString() << "\n";
    std::cout << another.toString() << "\n";

    if(self._data.size() > 1) {
        for(int i = self._data.size() - 1; i >= 0; --i) {
            if(inverse == false) {
                if(self._data[i] > another._data[i]) {
                    return true;
                } else if(self._data[i] < another._data[i]) {
                    return false;
                }
            } else {
                if(self._data[i] < another._data[i]) {
                    return true;
                } else if(self._data[i] > another._data[i]) {
                    return false;
                }
            }
        }
    } else {
        if(inverse == false) {
            return self._data[0] > another._data[0];
        } else {
            return self._data[0] < another._data[0];
        }
    }

    return false;
}


bool thoth::Double::operator<(const Double &second) const {
    return second > *this;
}

bool thoth::Double::operator==(const Double &second) const {
    if(sign != second.sign) return false;
    if(_data.size() != second._data.size()) return false;

    for(int i = 0; i < _data.size(); ++i) {
        if(_data[i] != second._data[i]) return false;
    }

    return true;
}

bool thoth::Double::operator!=(const Double &second) const {
    return !(*this == second);
}

bool thoth::Double::operator<=(const Double &second) const {
    return (*this == second) || (*this < second);
}

bool thoth::Double::operator>=(const Double &second) const {
    return (*this == second) || (*this > second);
}
