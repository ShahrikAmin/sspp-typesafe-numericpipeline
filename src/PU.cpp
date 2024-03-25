#include "../include/PU.hpp"
#include <numeric>
#include <iostream>
#include <cmath>
#include <algorithm>

void PU3::input(float f)
{
    int output = static_cast<int>(std::floor(f));
    std::cout << "SSPP Output: " << output << std::endl;
}
