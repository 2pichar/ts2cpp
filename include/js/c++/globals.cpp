#include "../globals.hpp"

namespace js {
        static void console::log(Object... args){
            class Array<Object> arr = {};
            (arr.push(args), ...);
            std::cout << (arr.join().std() + '\n');
        }
        static void console::error(Object... args){
            class Array<Object> arr = {};
            (arr.push(args), ...);
            std::cerr << (arr.join().std() + '\n');
        }
        static void console::warn(Object... args){
            error(args...);
        }
        static void console::info(Object... args){
            log(args...);
        }
        static void console::debug(Object... args){
            log(args...);
        }
        static void console::trace(Object... args){
            log(args...);
        }
        static void console::assert(Boolean condition, Object... args){
            if(!condition){
                error(args...);
            }
        }

        String typeof(Object obj){
            return Object.__type__;
        }
}