#include "../include/PU.hpp"
#include <numeric>
#include <iostream>
#include <cmath>
#include <algorithm>

std::optional<std::array<float, 3>> PU1::input(const std::array<int, 5> &arr)
{
    float average = std::accumulate(arr.begin(), arr.end(), 0.0f) / arr.size();
    return {{average, average, average}};
}

std::optional<float> PU2::input(const std::array<float, 3> &arr)
{
    return *std::max_element(arr.begin(), arr.end());
}

void PU3::input(float f)
{
    int output = static_cast<int>(std::floor(f));
    std::cout << "SSPP Output: " << output << std::endl;
}
