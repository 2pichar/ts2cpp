#include "./number.hpp"
#include "./string.hpp"
#include "./array.hpp"
#include "./object.hpp"
#include "./boolean.hpp"

#include <iostream>


namespace js{
    class Console : public Object {
        private:
            Console();
        public:
            static void log(Object...);
            static void error(Object...);
            static void warn(Object...);
            static void debug(Object...);
            static void trace(Object...);
            static void assert(Boolean, Object...);
    }
    
    class Console console;

    class Null : public Object {
        public:
            static class String __type__;
    }

    class Undefined : public Object {
        public:
            static class String __type__;
    }

    class NaN NaN;
    class Null null;
    class Undefined undefined;

    String typeof(Object);
}

