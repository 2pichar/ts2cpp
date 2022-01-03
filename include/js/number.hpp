#include "./object.hpp"
#include "./string.hpp"

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
            static class String __type__ = "number";
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