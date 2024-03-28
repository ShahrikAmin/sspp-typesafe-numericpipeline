#ifndef PU_HPP
#define PU_HPP

#include <numeric>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>

template <typename T>
class PU {
    T maxNum = std::numeric_limits<T>::min();   // Store the maximum number encountered by the processing unit
    public:
        template <typename IT>
        std::vector<T> step1(IT begin, IT end) {
            T average = std::reduce(begin, end) / (end - begin);
            return std::vector<T>(3, average);
        }

        template <typename IT>
        T step2(IT begin, IT end) {
            maxNum = std::max(maxNum, *std::max_element(begin, end));
            return maxNum;
        }

        T step3(T num) {
            return std::floor(num);
        }
};

#endif // PU_HPP
