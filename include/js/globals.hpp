#include "./number.hpp"
#include "./string.hpp"
#include "./array.hpp"
#include "./object.hpp"

#include <iostream>


namespace js{
    /*Console.log:
    template <typename ...Args>
    void print(Args... args){
        Array<Object> arr = {};
        (arr.push(args), ...);
        printf(arr.join().std() + '\n');
    }
    */
    
    class console {
        private:
            console();
        public:
            static void log(Object... args){
                Array<Object> arr = {};
                (arr.push(args), ...);
                std::cout << (arr.join().std() + '\n');
            }
            static void error(Object... args){
                Array<Object> arr = {};
                (arr.push(args), ...);
                std::cerr << (arr.join().std() + '\n');
            }
            static void warn(Object... args){
                error(args...);
            }
            static void info(Object... args){
                log(args...);
            }
            static void debug(Object... args){
                log(args...);
            }
            static void trace(Object... args){
                log(args...);
            }
            static void assert(bool condition, Object... args){
                if(!condition){
                    error(args...);
                }
            }
    }

    class null {

    }

    class undefined {

    }

    class NaN NaN;
}