#include <functional>
namespace js {
    template <typename R, typename ...Args>
    class Function<R(Args...)> : public Object {
        typedef R return_t;
        typedef R func_t(Args...);
        private:
            std::function<func_t> value;
        public:
            Function(func_t f){
                this->value = f;
            };
            return_t operator()(Args... args){
                return this->value(args...);
            };
            /*
            return_t call(Object thisArg, Args... args){
                return this->value(args...);
            }*/
    }
}