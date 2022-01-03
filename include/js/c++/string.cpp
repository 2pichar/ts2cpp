#include "../string.hpp"

typedef char16_t u16char;
typedef std::basic_string<u16char> string;

#define undefined void

namespace js {
    template <typename S>
    String::String(S str){
        this->value = str;
    }

    String::String(String s){
        this->value = s->value;
    }

    template <typename S>
    String& String::operator=(S right){
        this->value = right;
        return this;
    }

    template <typename S>
    String& String::operator+=(S right){
        this->value += right;
        return this;
    }
    
    String String::operator[](Number index){
        return String(this->value[index]);
    }

    Number String::length(){
        return this->value.length();
    }

    String charAt(Number index){
        return String(this->value[index]);
    }

    String String::substr(Number start, Number count) {
        return this->value.substr(start, count);
    }

    template <typename Args>
    String concat(Args... strs){
        return String(this->value + (... + strs));
    }

    Number String::charCodeAt(Number index){
        return Number(this->value[(int)index]);
    }

    Number String::codePointAt(Number){

    }

    String String::toString(){
        return String(*this);
    }

    string String::toStd(){
        return string(this->value);
    }

    String String::valueOf(){
        return String(this);
    }
}