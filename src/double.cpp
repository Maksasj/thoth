#include "double.h"

thoth::Double::Double() : thoth::Integer() {
    _power = 0;
}

thoth::Double::Double(std::string data) : thoth::Integer(NULL) {
    sign = true;
    _power = 0;

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
            _power = tmpPower;
            break;
        } else {
            --tmpPower;
        }
    }
}

std::string thoth::Double::toString() const {
    std::stringstream ss;

    Double self = *this;

    self.trimZerosFront();
    self.trimZerosBack();

    if(self._data.size() == 1) {
        if(self._data[0] == 0) {
            return "0.0";
        }
    }

    if(!self.sign)
        ss << '-';

    for(int i = self._data.size() - 1; i >= 0; --i) {
        if(self._power <= 0) {
            if(-self._power == i + 1) {
            ss << '.';
            }
        }

        ss << (char)(self._data[i] + _THOTH_ASCII_SHIFT);
    }

    if(self._power == 0) {
        ss << ".0";
    }

    return ss.str();
}

std::string thoth::Double::toString(bool noDot) const {
    std::stringstream ss;

    for(int i = _data.size() - 1; i >= 0; --i) {
        ss << (char)(_data[i] + _THOTH_ASCII_SHIFT);
    }

    return ss.str();
}

void thoth::Double::trimZerosFront() {
    if(_power == 0) return;
    
    while (!_data.empty() && _data.front() == 0) {
        _data.pop_front();
        ++_power;

        if(_power == 0) {
            break;
        }
    }

    if(_data.empty()) {
        _data.push_back(0);
        _power = 0;
    }
}

void thoth::Double::trimZerosBack() {
    while (!_data.empty() && _data.back() == 0) {

        if(_data.size() <= thoth::Math::abs(_power) + 1) {
            break;
        }

        _data.pop_back();
    }

    if(_data.empty()) {
        _data.push_front(0);
        _power = 0;
    }
}

thoth::Double thoth::Double::operator+(const Double &second) {
    Double out;

    Double self = *this;
    Double another = second;

    bool inverse = false;
    if((self._power == false) && (another._power == false)) {
        inverse = true;
    }

    int integralPartSelfDigitCount = self.len() + self._power;
    int integralPartAnotherDigitCount = another.len() + another._power;

    int decimalPartSelfDigitCount = self.len() - integralPartSelfDigitCount;
    int decimalPartAnotherDigitCount = another.len() - integralPartAnotherDigitCount;

    if(decimalPartSelfDigitCount < decimalPartAnotherDigitCount) {
        self.expandFront(decimalPartAnotherDigitCount - decimalPartSelfDigitCount);
    }

    if(decimalPartSelfDigitCount > decimalPartAnotherDigitCount) {
        another.expandFront(decimalPartSelfDigitCount - decimalPartAnotherDigitCount);
    }
    
    out._power = std::min(self._power, another._power);

    if(self.isPositive() && another.isPositive()) {
        out._data = Integer::_plus(self, another);
    } else if(!self.isPositive() && !another.isPositive()) {
        out._data = _plus(self, another);
        out.sign = false;
    } else if(  (!self.isPositive() && another.isPositive()) ||
                (self.isPositive() && !another.isPositive())) {
        if(another > self) {
            Integer selfAbs = self.abs(); 
            Integer anotherAbs = another.abs(); 
            
            if(selfAbs > anotherAbs) {
                out._data = _minus(selfAbs, anotherAbs);
                out.sign = false;
            } else {
                out._data = _minus(another, self);
            }
        } else if (another < self){
            Integer selfAbs = self.abs(); 
            Integer anotherAbs = another.abs(); 
            
            if(anotherAbs > selfAbs) {
                out._data = _minus(anotherAbs, selfAbs);
                out.sign = false;
            } else 
                out._data = _minus(self, another);
        } else {
            out.trimZerosFront();
            return out;
        }

        if(out.len() + out._power == 0) {
            out._data.push_back(0);
        }
    }

    return out;
};

thoth::Double thoth::Double::operator-(const Double &second) const {
    Double out;

    Double self = *this;
    Double another = second;

    bool inverse = false;
    if((self._power == false) && (another._power == false)) {
        inverse = true;
    }

    int integralPartSelfDigitCount = self.len() + self._power;
    int integralPartAnotherDigitCount = another.len() + another._power;

    int decimalPartSelfDigitCount = self.len() - integralPartSelfDigitCount;
    int decimalPartAnotherDigitCount = another.len() - integralPartAnotherDigitCount;

    if(decimalPartSelfDigitCount < decimalPartAnotherDigitCount) {
        self.expandFront(decimalPartAnotherDigitCount - decimalPartSelfDigitCount);
    }

    if(decimalPartSelfDigitCount > decimalPartAnotherDigitCount) {
        another.expandFront(decimalPartSelfDigitCount - decimalPartAnotherDigitCount);
    }

    out._power = std::min(self._power, another._power);

    if(self.isPositive() && another.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer anotherAbs = another.abs(); 

        if(selfAbs > anotherAbs) {
            out._data = _minus(selfAbs, anotherAbs, false);
        } else if(anotherAbs > selfAbs) {
            out._data = _minus(anotherAbs, selfAbs, false);
            out.sign = false;
        } else {
            return out;
        }

        if(out.len() + out._power == 0) {
            out._data.push_back(0);
        }
    } else if(!self.isPositive() && !another.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer anotherAbs = another.abs(); 

        if(selfAbs > anotherAbs) {
            out._data = _minus(selfAbs, anotherAbs);
            out.sign = false;
        } else if(anotherAbs > selfAbs) {
            out._data = _minus(anotherAbs, selfAbs);
        } else {
            return out;
        } 

        if(out.len() + out._power == 0) {
            out._data.push_back(0);
        }
    } else if(!self.isPositive() && another.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer anotherAbs = another.abs(); 

        out._data = _plus(selfAbs, anotherAbs);
        out.sign = false;
    } else if(self.isPositive() && !another.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer anotherAbs = another.abs(); 

        out._data = _plus(selfAbs, anotherAbs);
    }

    return out;
};

thoth::Double thoth::Double::operator*(const Double &second) const {
    Double out;

    Double self = *this;
    Double another = second;
    
    int integralPartSelfDigitCount = self.len() + self._power;
    int integralPartAnotherDigitCount = another.len() + another._power;

    int decimalPartSelfDigitCount = self.len() - integralPartSelfDigitCount;
    int decimalPartAnotherDigitCount = another.len() - integralPartAnotherDigitCount;

    if(decimalPartSelfDigitCount < decimalPartAnotherDigitCount) {
        self.expandBack(decimalPartAnotherDigitCount - decimalPartSelfDigitCount);
    }

    if(decimalPartSelfDigitCount > decimalPartAnotherDigitCount) {
        another.expandBack(decimalPartSelfDigitCount - decimalPartAnotherDigitCount);
    }

    if(self.isPositive() == another.isPositive()) {
    } else { 
        out.sign = false;
    }

    if(self.abs() > another.abs()) {
        out._data = _multy(self, another);
    } else
        out._data = _multy(another, self);

    out._power = self._power + another._power;

    for (auto i = out.len(); i <= thoth::Math::abs<int>(out._power); ++i) {
        out._data.push_back(0);
    }

    out.trimZerosBack();
    out.trimZerosFront();

    return out;
};

bool thoth::Double::closeToOne(thoth::Double value) {
    static const thoth::Double one("1.0");
    static const thoth::Double epsilon("0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");

    auto delta = one - value;
    delta.sign = true;

    return delta < epsilon;
}

thoth::Double thoth::Double::findInverse() const {
    /* Newton raphson method */
    const thoth::Double x = *this;

    static const unsigned int max_iterations = 100;

    static const thoth::Double two("2.0");
    static const thoth::Double one("1.0");
    thoth::Double prev = x;
    
    if(prev < one) {
        prev._power -= prev._power;
        prev.expandFront(-x._power);
    } else {
        int integralPartSelfDigitCount = prev.len() + prev._power;

        prev._power = -(integralPartSelfDigitCount * 2 + 1);
        prev.expandBack(integralPartSelfDigitCount * 2 + 1);

        prev.trimZerosFront();
    }
    
    for(unsigned int i = 0; i < max_iterations; ++i) {
        auto closeOne = (two - (x * prev));
        closeOne.aproximateTo(-150);
        prev = prev * closeOne;
        
        if(closeToOne(closeOne)) {
            break;
        }
        prev.aproximateTo(-101);
        
        prev.sign = true;
    }

    return prev;
}

thoth::Double thoth::Double::operator/(const Double &second) {
    Double out = *this;
    Double another = second;

    if((another * another).toString() == out.toString()) {
        return another;
    }

    if(out.sign == another.sign) {
        out.sign = true;
        another.sign = true;
        
        out = out * another.findInverse();
        
        out.aproximateTo(-101);
        out.aproximateClose();
        out.aproximateTo(-100);
    } else {
        out.sign = true;
        another.sign = true;

        out = out * another.findInverse();

        out.aproximateTo(-101);
        out.aproximateClose();
        out.aproximateTo(-100);

        out.sign = false;
    }

    return out;
};

bool thoth::Double::operator>(const Double &second) const {
    if(!sign) {
        if(second.sign) return false;
    } else {
        if(!second.sign) return true;
    }

    bool inverse = false;
    if(sign == false && second.sign == false) {
        inverse = true;
    }

    Double self = *this; 
    Double another = second; 
    
    if(_power != second._power) {
        if(inverse) {
            int integralPartSelfDigitCount = self.len() + self._power;
            int integralPartAnotherDigitCount = another.len() + another._power;

            if(integralPartSelfDigitCount > integralPartAnotherDigitCount) {
                return false;
            } else if(integralPartSelfDigitCount < integralPartAnotherDigitCount) {
                return true;
            }

            if(self.len() < another.len()) {
                if(self._power > another._power) {
                    self.expandFront(another.len() - self.len());
                } else 
                    self.expandBack(another.len() - self.len());
            } else {
                if(another._power > self._power) {
                    another.expandFront(self.len() - another.len());
                } else
                    another.expandBack(self.len() - another.len());
            }
        } else {
            if(self.len() < another.len()) {
                self.expandFront(another.len() - self.len());
            } else {
                if(another._power > self._power) {
                    another.expandBack(self.len() - another.len());
                } else 
                    another.expandFront(self.len() - another.len());
            }
        }
    } else {
        int integralPartSelfDigitCount = self.len() + self._power;
        int integralPartAnotherDigitCount = another.len() + another._power;

        if(integralPartSelfDigitCount > integralPartAnotherDigitCount) {
            return true;
        } else if(integralPartSelfDigitCount < integralPartAnotherDigitCount) {
            return false;
        }

        if(self.len() < second.len()) {
            self.expandFront(second.len() -  self.len());
        } else if(self.len() > second.len()) {
            another.expandBack(self.len() - second.len());
        }
    }

    if(self.len() > 1) {
        for(int i = self.len() - 1; i >= 0; --i) {
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
    return (second > *this);
}

bool thoth::Double::operator==(const Double &second) const {
    if(sign != second.sign) return false;
    if(_data.size() != second.len()) return false;

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
