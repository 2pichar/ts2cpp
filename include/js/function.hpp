#include <functional>
#include <vector>
#include "./object.hpp"
#include "./symbol.hpp"

namespace js {
    template <typename R, typename ...Args>
    class Function<R(Args...)> : public Object {
        typedef R return_t;
        typedef R func_t(Args...);
        private:
            class std::function<func_t> value;
        public:
            class Object& prototype;
            Function(func_t f){
                this->value = f;
            };
            return_t operator()(Args... args){
                return this->value(args...);
            };

            /*
            return_t call(Object& thisArg, Args... args){
                return this->value(args...);
            }*/

            /*
            return_t apply(Object& thisArg, Array<Object> args){

            }
            */

            /*
            return_t bind(Object& thisArg, Args... args){

            }
            */
    }
    template <typename arg_t> class Arguments;
    template <typename arg_t>
    class Arguments<arg_t> : public Object {
        private:
            class std::vector<arg_t> value;
        public:
            template <typename ...Args>
            Arguments(Args... args);
            arg_t& operator[](Number);
            arg_t& operator[](Symbol);
    };
}