#ifndef PU_HPP
#define PU_HPP

#include <numeric>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>

template <typename T>
class PU1
{
public:
    auto execute(auto input)
    {
        auto size = input.end() - input.begin();
        if (size <= 0)
        {
            throw std::length_error("Input range is empty or invalid.");
        }

        T average;
        try
        {
            average = std::reduce(input.begin(), input.end()) / size;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error calculating average for input" << '\n';
            throw;
        }

        try
        {
            return std::vector<T>(3, average);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error creating vector for average of input" << '\n';
            throw;
        }
    }
};

template <typename T>
class PU2
{
    T maxNum = std::numeric_limits<T>::min(); // Store the maximum number encountered by the processing unit
public:
    auto execute(auto input)
    {
        T temp = std::max(maxNum, *std::max_element(input.begin(), input.end()));
        std::swap(maxNum, temp);
        return maxNum;
    }
};

template <typename T>
class PU3
{
public:
    auto execute(auto input)
    {
        try
        {
            return std::floor(input);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error calculating floor for input" << '\n';
            throw;
        }
    }
};

#endif // PU_HPP
