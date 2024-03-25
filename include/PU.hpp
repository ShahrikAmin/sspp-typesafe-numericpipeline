#ifndef PU_HPP
#define PU_HPP

#include <array>
#include <optional>
#include <numeric>

class PU1
{
public:
    template <typename IT>
    std::optional<std::array<float, 3>> input(IT begin, IT end) {
        float average = std::reduce(begin, end) / (end - begin);
        return {{average, average, average}};
    }
};

class PU2
{
public:
    std::optional<float> input(const std::array<float, 3> &arr);
};

class PU3
{
public:
    void input(float f);
};

#endif // PU_HPP
