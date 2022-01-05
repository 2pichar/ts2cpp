#include <vector>
#include "../object.hpp"
#include "../array.hpp"
#include "../number.hpp"
#include "../string.hpp"
#include "../boolean.hpp"
#include "../globals.hpp"

namespace js {
    typedef class Boolean Callback(class Object, class Number, class Array);
    Array::Array(){}
    String Array::join(String sep = ","){
        class String result = "";
        class Number i = 0;
        for(i = 0; i < this->length(); i++){
            result += this[i];
            if( i != this->length() - 1) result += sep;
        }
        return result;
    }

    Array Array::filter(Callback callback){
        class Number i;
        class Object el;
        class Array arr = {};
        for(i = 0; i < this->length(); i++){
            el = this[i];
            if(callback(el, i, this->value)){
               arr.push(el); 
            }
        }
        return arr;
    }

    Object Array::at(Number i){
        // Allow for negative indices
        if(i < 0) i += this->length();
        
        // OOB (Out-of-Bounds) access returns undefined
        if(n < 0 || n > this->length()) return undefined;

        // Normal access
        return this[i];
    }
}