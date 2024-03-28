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
        template <typename IT>
        std::vector<T> execute(IT begin, IT end) {
            T average = std::reduce(begin, end) / (end - begin);
            return std::vector<T>(3, average);
        }
};

template <typename T>
class PU2 {
    T maxNum = std::numeric_limits<T>::min();   // Store the maximum number encountered by the processing unit
    public:
        template <typename IT>
        T execute(IT begin, IT end) {
            maxNum = std::max(maxNum, *std::max_element(begin, end));
            return maxNum;
        }
};

template <typename T>
class PU3 {
    public:
        T execute(T num) {
            return std::floor(num);
        }
};

#endif // PU_HPP
