#include <iostream>
#include "./object.hpp"
#include "./string.hpp"

namespace js {
    class Number : public Object {
        private:
            double value;
            typedef Number* half;
        public:
            Number();
            class NaN NaN;
            bool isNaN(Object x);
            bool operator==(const Object& x);
            Number operator/(const Object& x);
            Number operator*(const Object& x);
            Number operator+(const Object& x);
            Number operator-(const Object& x);
            Number operator*(const Object& x);
            Number* operator*() const;
            Number operator*(const Number*&);

            friend std::ostream& operator<<(std::ostream& os, const Number& n);
            
            static class String __type__ = "number";
            static Number parseInt(String);
            static Number parseFloat(String);
    }

    class BigInt : public Object {
        private:
            long long value;
        public:
            BigInt();
    }

    class NaN : public Number {
    public:
        NaN();
        bool operator==(Object x);
    private:
     bool isNaN(Object x);
}
}