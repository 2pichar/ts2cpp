#include <string>
#include "./object.hpp"
#include "./number.hpp"

typedef char16_t u16char;
typedef std::basic_string<u16char> string;

namespace js {
    class String: public Object {
        private:
            std::u16string value;
        public:
            template <typename S>
            String(S);

            static String fromCodePoint(Number);
            static String fromCharCode(Number);
            static operator()();

            template <typename S>
            String& operator=(S);

            template <typename S>
            String& operator+=(S);

            String& operator[](Number);

            Number length();

            String charAt(Number);

            String substr(Number, Number);

            Number charCodeAt(Number);

            Number codePointAt(Number);

            template <typename args>
            String concat(args...);

            String toString();
            
            string toStd();

            String valueOf();
    }
}