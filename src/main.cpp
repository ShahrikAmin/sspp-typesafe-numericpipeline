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
    sspp.execute(arr1);
    sspp.execute(arr2);
    sspp.execute(arr3);
    sspp.execute(arr4);

    return 0;
}
