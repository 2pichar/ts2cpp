#include <vector>
#include "./object.hpp"
#include "./function.hpp"
#include "./string.hpp"
#include "./number.hpp"
#include "./boolean.hpp"
#include "./globals.hpp"

namespace js {
    typedef class Boolean filter_f(class Object, class Number, class Array);
    typedef class Object reduce_f(class Object, class Object, class Number, class Array);
    template <typename V> class Array;

    template <typename V>
    class Array<V>: public Object {
        typedef V value_t;
        private:
            class std::vector<V> value;
        public:
            Array();
            static Array from(Object);
            static Boolean isArray(Object);
            
            String join(String = ",");
            Array filter(Function<filter_f>);
            value_t reduce(Function<reduce_f>);
            value_t at(Number);


            static constexpr class String __type__ = "object";
            friend String typeof(Object);
    }
}