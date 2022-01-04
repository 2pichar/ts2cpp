#include <functional>
namespace js {
    class Function : public Object {
        private:
            std::function<> value;
        public:
            Function();
            auto operator()();
            
    }
}