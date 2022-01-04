#include "../number.hpp"
#include <cmath>

namespace js {
    Number Number::operator*(const Number& rhs){
        return Number(this->value * rhs.value);
    }

    Number* Number::operator*(){
        return (class Number*)(this)
    }

    Number Number::operator*(const Number*& rhs){
        return Number(std::pow(this->value, rhs.value));
    }

    friend std::ostream& Number::operator<<(std::ostream& os, const Number& n){
        return os << n.value;
    }
}