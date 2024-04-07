
#include <type_traits>

#ifndef SSPP_HPP
#define SSPP_HPP

#include "PU.hpp"

template<typename T>
concept Numeric = std::is_arithmetic_v<T> && !std::is_same_v<T, bool> && !std::is_same_v<T, char>; // Guarantee that type is numeric (exclude boolean and char)

template<Numeric T>
class SSPP {
    PU1<T> pu1;
    PU2<T> pu2;
    PU3<T> pu3;

    public:
        template <typename IT>
        void execute(IT begin, IT end) {
            auto output1 = pu1.execute(begin, end);
            auto output2 = pu2.execute(output1);
            auto output3 = pu3.execute(output2);
            std::cout << "SSPP Output: " << output3 << std::endl;
        }
};

#endif // SSPP_HPP