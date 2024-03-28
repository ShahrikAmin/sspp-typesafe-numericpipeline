#ifndef PU_HPP
#define PU_HPP

#include <numeric>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>

template <typename T>
class PU1 {
    public:
        auto execute(auto input) {
            T average = std::reduce(input.begin(), input.end()) / (input.end() - input.begin());
            return std::vector<T>(3, average);
        }
};

template <typename T>
class PU2 {
    T maxNum = std::numeric_limits<T>::min();   // Store the maximum number encountered by the processing unit
    public:
        auto execute(auto input) {
            maxNum = std::max(maxNum, *std::max_element(input.begin(), input.end()));
            return maxNum;
        }
};

template <typename T>
class PU3 {
    public:
        auto execute(auto input) {
            return std::floor(input);
        }
};

#endif // PU_HPP
