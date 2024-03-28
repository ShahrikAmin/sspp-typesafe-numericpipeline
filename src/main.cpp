#include "../include/SSPP.hpp"
#include <array>

int main()
{
    SSPP<int> sspp;

    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    std::array<int, 5> arr2 = {0, 0, 0, 0, 0};
    std::array<int, 5> arr3 = {3, 3, 4, 4, 5};
    std::array<int, 5> arr4 = {2, 2, 8, 8, 5};

    // Calls input data and also advance the pipeline
    sspp.execute(arr1.begin(), arr1.end());
    sspp.execute(arr2.begin(), arr2.end());
    sspp.execute(arr3.begin(), arr3.end());
    sspp.execute(arr4.begin(), arr4.end());

    return 0;
}
