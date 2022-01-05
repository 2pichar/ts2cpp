#include "../globals.hpp"
#include <iostream>

namespace js {
        void Console::log(Object... args){
            class Array<Object> arr = {};
            (arr.push(args), ...);
            std::cout << (arr.join().std() + '\n');
        }
        void Console::error(Object... args){
            class Array<Object> arr = {};
            (arr.push(args), ...);
            std::cerr << (arr.join().std() + '\n');
        }
        void Console::warn(Object... args){
            error(args...);
        }
        void Console::info(Object... args){
            log(args...);
        }
        void Console::debug(Object... args){
            log(args...);
        }
        void Console::trace(Object... args){
            log(args...);
        }
        void Console::assert(Boolean condition, Object... args){
            if(!condition){
                error(args...);
            }
        }

        String typeof(Object obj){
            return Object.__type__;
        }
}