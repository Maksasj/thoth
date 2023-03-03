#include "integer.h"

/* Constructors */
thoth::Integer::Integer() {
    _data.push_front(0);
    sign = true;
}

thoth::Integer::Integer(void*) { }

thoth::Integer::Integer(std::string data) {
    sign = true;

    if(data[0] == '-')
        sign = false;

    for(auto l : data) {
        if((l > 57 || l < 48) && l != 45) throw std::invalid_argument("Integer expected only numbers but goth somethink other");

        if(l != 45)
            _data.push_front(l - _THOTH_ASCII_SHIFT);
    }
}

thoth::Integer thoth::Integer::_plus(const Integer &first, const thoth::Integer &second) {
    Integer out = first;

    int aLength = _data.size();
    int bLength = second._data.size();
    
    int maxLength = std::max(aLength, bLength);
    int overflow = 0;

    for(int i = 0; i < maxLength; ++i) {
        int aDigit = i < aLength ? first._data[i] : 0;
        int bDigit = i < bLength ? second._data[i] : 0;
        int tmp = aDigit + bDigit + overflow;

        if(i < aLength) {
            out._data[i] = tmp % 10;
        } else {
            out._data.push_back(tmp % 10);
        }

        overflow = tmp / 10;
    }

    if(overflow != 0)
        out._data.push_back(overflow);

    return out;
};

thoth::Integer thoth::Integer::_minus(const Integer &first, const thoth::Integer &second) {

    Integer out;
    out._data.clear();

    int aLength = first._data.size();
    int bLength = second._data.size();
    
    int maxLength = std::max(aLength, bLength);
    int overflow = 0;

    for(int i = 0; i < maxLength; ++i) {
        int aDigit = i < aLength ? first._data[i] : 0;
        int bDigit = i < bLength ? second._data[i] : 0;

        int delta = aDigit - bDigit - overflow;

        if(delta < 0) {
            overflow = 1;
            out._data.push_back(10 + delta);
        } else {
            overflow = 0;
            out._data.push_back(delta);
        }
    }

    while ((out._data.size() > 1) && (out._data[out._data.size() - 1] == 0))
        out._data.pop_back();

    return out;
};

/* Operations methods */
thoth::Integer thoth::Integer::operator+(const Integer &second) {
    /*
    (+) + (+)
    (-) + (-)
    (-) + (+)
    (+) + (-)

    (+) - (+)
    (-) - (-)
    (-) - (+)
    (+) - (-)
    */
    Integer &self = *this;

    Integer out;

    if(this->isPositive() && second.isPositive()) {
        out = _plus(self, second);
    } else if(!this->isPositive() && !second.isPositive()) {
        out = _plus(self, second);
        out.sign = false;
    } else if(  (!this->isPositive() && second.isPositive()) ||
                (this->isPositive() && !second.isPositive())) {
        if(second > self) {
            Integer selfAbs = self.abs(); 
            Integer secondAbs = second.abs(); 
            
            if(selfAbs > secondAbs) {
                out = _minus(selfAbs, secondAbs);
                out.sign = false;
            } else {
                out = _minus(second, self);
            }
        } else if (second < self){
            Integer selfAbs = self.abs(); 
            Integer secondAbs = second.abs(); 
            
            if(secondAbs > selfAbs) {
                out = _minus(secondAbs, selfAbs);
                out.sign = false;
            } else 
                out = _minus(self, second);
        } else {
            return out;
        }
    }

    return out;
};

thoth::Integer thoth::Integer::operator-(const Integer &second) {
    /*
    (+) - (+) = ..
    (-) - (-) = ..
    (-) - (+) = ..
    (+) - (-) = ..
    */
    Integer &self = *this;

    Integer out;

    if(this->isPositive() && second.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer secondAbs = second.abs(); 

        if(selfAbs > secondAbs) {
            out = _minus(selfAbs, secondAbs);
        } else if(secondAbs > selfAbs) {
            out = _minus(secondAbs, selfAbs);
            out.sign = false;
        } else {
            return out;
        }
    } else if(!this->isPositive() && !second.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer secondAbs = second.abs(); 

        if(selfAbs > secondAbs) {
            out = _minus(selfAbs, secondAbs);
            out.sign = false;
        } else if(secondAbs > selfAbs) {
            out = _minus(secondAbs, selfAbs);
        } else {
            return out;
        } 
    } else if(!this->isPositive() && second.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer secondAbs = second.abs(); 

        out = _plus(selfAbs, secondAbs);
        out.sign = false;
    } else if(this->isPositive() && !second.isPositive()) {
        Integer selfAbs = self.abs(); 
        Integer secondAbs = second.abs(); 

        out = _plus(selfAbs, secondAbs);
    }

    return out;
};

/* Helper methods */
std::string thoth::Integer::toString() const {
    std::stringstream ss;

    if(!sign)
        ss << '-';

    for(int i = _data.size() - 1; i >= 0; --i)
        ss << (char)(_data[i] + _THOTH_ASCII_SHIFT);

    return ss.str();
}

bool thoth::Integer::operator<(const Integer &second) const {
    return second > *this;
}

bool thoth::Integer::operator>(const Integer &second) const {
    if(!sign) {
        if(second.sign) return false;
    } else {
        if(!second.sign) return true;
    }

    bool inverse = false;
    if(sign == false && second.sign == false) {
        inverse = true;
    }

    if(_data.size() < second._data.size()) {
        if(inverse) {
            return true;
        } else
            return false;
    } else if(_data.size() > second._data.size()) {        
        if(inverse) {
            return false;
        } else
            return true;
    } else {
        if(_data.size() > 1) {
            for(int i = _data.size() - 1; i >= 0; --i) {
                if(inverse == false) {
                    if(_data[i] > second._data[i]) {
                        return true;
                    } else if(_data[i] < second._data[i]) {
                        return false;
                    }
                } else {
                    if(_data[i] < second._data[i]) {
                        return true;
                    } else if(_data[i] > second._data[i]) {
                        return false;
                    }
                }
            }
        } else {
            if(inverse == false) {
                return _data[0] > second._data[0];
            } else {
                return _data[0] < second._data[0];
            }
        }
    }

    return false;
}

bool thoth::Integer::operator==(const Integer &second) const {
    if(sign != second.sign) return false;
    if(_data.size() != second._data.size()) return false;

    for(int i = 0; i < _data.size(); ++i) {
        if(_data[i] != second._data[i]) return false;
    }

    return true;
}

bool thoth::Integer::operator<=(const Integer &second) const {
    return (*this == second) || (*this < second);
}

bool thoth::Integer::operator>=(const Integer &second) const {
    return (*this == second) || (*this > second);
}

bool thoth::Integer::operator!=(const Integer &second) const {
    return !(*this == second);
}

bool thoth::Integer::isPositive() const {
    return sign;
}

thoth::Integer thoth::Integer::abs() const {
    Integer out = *this;
    out.sign = true;
    return out;
}
