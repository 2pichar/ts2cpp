#include <map> // Include header for maps/dictionaries

namespace js {
    template <class K, class V>
    class Object {
        private:
            std::map<K, V> dict;
        public:
            Object();
    }
}