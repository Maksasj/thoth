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

    Double self = *this;

    self.trimZeros();

    if(self._data.size() == 1) {
        if(self._data[0] == 0) {
            return "0.0";
        }
    }

    if(!self.sign)
        ss << '-';

    for(int i = self._data.size() - 1; i >= 0; --i) {
        if(self.power <= 0) {
            if(-self.power == i + 1) {
            ss << '.';
            }
        }

        ss << (char)(self._data[i] + _THOTH_ASCII_SHIFT);
    }

    if(self.power == 0) {
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

thoth::Double thoth::Double::operator+(const Double &second) {
    Double out;

    Double self = *this;
    Double another = second;

    bool inverse = false;
    if((self.power == false) && (another.power == false)) {
        inverse = true;
    }

    int integralPartSelfDigitCount = self.len() + self.power;
    int integralPartAnotherDigitCount = another.len() + another.power;

    int decimalPartSelfDigitCount = self.len() - integralPartSelfDigitCount;
    int decimalPartAnotherDigitCount = another.len() - integralPartAnotherDigitCount;

    std::cout << integralPartSelfDigitCount << " " << decimalPartSelfDigitCount << "\n";
    std::cout << integralPartAnotherDigitCount << " " << decimalPartAnotherDigitCount << "\n";

    if(decimalPartSelfDigitCount < decimalPartAnotherDigitCount) {
        self.expandFront(decimalPartAnotherDigitCount - decimalPartSelfDigitCount);
    }

    if(decimalPartSelfDigitCount > decimalPartAnotherDigitCount) {
        another.expandFront(decimalPartSelfDigitCount - decimalPartAnotherDigitCount);
    }
    
    out.power = std::min(self.power, another.power);

    std::cout << self.toString(true) << "\n";
    std::cout << another.toString(true) << "\n";

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
            out.trimZeros();
            return out;
        }

        if(out.len() + out.power == 0) {
            out._data.push_back(0);
        }
    }

    std::cout << out.toString(true) << " "<< out.power << " " << out.toString() <<  "\n";

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
    
    if(power != second.power) {
        if(inverse) {
            int integralPartSelfDigitCount = self.len() + self.power;
            int integralPartAnotherDigitCount = another.len() + another.power;

            if(integralPartSelfDigitCount > integralPartAnotherDigitCount) {
                return false;
            } else if(integralPartSelfDigitCount < integralPartAnotherDigitCount) {
                return true;
            }

            if(self.len() < another.len()) {
                if(self.power > another.power) {
                    self.expandFront(another.len() - self.len());
                } else 
                    self.expandBack(another.len() - self.len());
            } else {
                if(another.power > self.power) {
                    another.expandFront(self.len() - another.len());
                } else
                    another.expandBack(self.len() - another.len());
            }
        } else {
            if(self.len() < another.len()) {
                self.expandFront(another.len() - self.len());
            } else {
                if(another.power > self.power) {
                    another.expandBack(self.len() - another.len());
                } else 
                    another.expandFront(self.len() - another.len());
            }
        }
    } else {
        int integralPartSelfDigitCount = self.len() + self.power;
        int integralPartAnotherDigitCount = another.len() + another.power;

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
