#ifndef SSPP_HPP
#define SSPP_HPP

#include "PU.hpp"

template <typename T>
class SSPP {
    PU1<T> pu1;
    PU2<T> pu2;
    PU3<T> pu3;

    public:
        void execute(auto input) {
            auto result = pu3.execute(pu2.execute(pu1.execute(input)));
            std::cout << "SSPP Output: " << result << std::endl;
        }
};

#endif // SSPP_HPP
