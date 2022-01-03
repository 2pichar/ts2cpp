#include <vector>
#include "./object.hpp"
#include "./string.hpp"
#include "./number.hpp"

namespace js {
    class Array: public Object {
        private:
            std::vector<Object> value;
        public:
            Array();
            static from();
            
            String join(String);
    }
}