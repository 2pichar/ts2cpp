#include "./number.hpp"
#include "./string.hpp"
#include "./array.hpp"
#include "./object.hpp"
#include "./boolean.hpp"

#include <iostream>


namespace js{
    class Console {
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

    class NULL : public Object{
        public:
            static class String __type__;
    }

    class Undefined : public Object {
        public:
            static class String __type__;
    }

    class NaN NaN;
    class NULL null;
    class UNDEFINED undefined;

    String typeof(Object);
}

