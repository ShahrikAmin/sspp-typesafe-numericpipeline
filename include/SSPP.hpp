#ifndef SSPP_HPP
#define SSPP_HPP

#include "PU.hpp"

template <typename T>
class SSPP {
    PU<T> pu;
    public:
        template <typename IT>
        void execute(IT begin, IT end) {
            auto output1 = pu.step1(begin, end);
            auto output2 = pu.step2(output1.begin(), output1.end());
            std::cout << "SSPP Output: " << pu.step3(output2) << std::endl;
        }
};

#endif // SSPP_HPP
