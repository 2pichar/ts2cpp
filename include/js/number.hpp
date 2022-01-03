#include "./object.hpp"
namespace js {
    class Number : public Object {
        private:
            double value;
        public:
            Number();
            class NaN NaN;
            bool isNaN(Object x);
            bool operator==(Object x);
            Number operator/(Object x);
        
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