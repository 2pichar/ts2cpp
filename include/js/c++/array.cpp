#include <vector>
#include "../object.hpp"
#include "../array.hpp"
#include "../number.hpp"
#include "../string.hpp"

namespace js {
        Array::Array(){}
        String Array::join(String sep = ","){
            String result = "";
            for(Number i = 0; i < this->length(); i++){
                result += this[i];
                if( i != this->length() - 1) result += sep;
            }
            return result;
        }
}