#include "./number.hpp"
#include "./string.hpp"
#include "./array.hpp"
#include "./object.hpp"
#include "./boolean.hpp"

#include <iostream>


namespace js{
    class Console : public Object {
        public:
            Console();
            void log(Object...);
            void error(Object...);
            void warn(Object...);
            void debug(Object...);
            void trace(Object...);
            void assert(Boolean, Object...);
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

