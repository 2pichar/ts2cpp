#include <vector>
#include "./object.hpp"
#include "./string.hpp"
#include "./number.hpp"
#include "./boolean.hpp"
#include "./globals.hpp"

namespace js {
    typedef class Boolean Callback(class Object, class Number, class Array);
    class Array: public Object {
        private:
            std::vector<Object> value;
        public:
            Array();
            static Array from(Object);
            static Boolean isArray(Object);
            
            String join(String = ",");
            Array filter(Callback);
            Object at(Number);


            static constexpr class String __type__ = "object";
            friend String typeof(Object);
    }
}