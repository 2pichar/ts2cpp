#include <map> // Include header for maps/dictionaries
#include <iostream>

namespace js {
    template <class K, class V> class Object;

    template <class K, class V>
    class Object<K, V> {
        private:
            std::map<K, V> dict;
        public:
            Object();
            friend std::ostream& operator<<(std::ostream&, Object&);
    }
}