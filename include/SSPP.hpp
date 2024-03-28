#ifndef SSPP_HPP
#define SSPP_HPP

#include "PU.hpp"

template <typename T>
class SSPP {
    PU1<T> pu1;
    PU2<T> pu2;
    PU3<T> pu3;

    public:
        template <typename IT>
        void execute(IT begin, IT end) {
            auto output1 = pu1.execute(begin, end);
            auto output2 = pu2.execute(output1.begin(), output1.end());
            std::cout << "SSPP Output: " << pu3.execute(output2) << std::endl;
        }
};

#endif // SSPP_HPP
