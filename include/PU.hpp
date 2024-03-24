#ifndef PU_HPP
#define PU_HPP

#include <array>
#include <optional>

class PU1
{
public:
    std::optional<std::array<float, 3>> input(const std::array<int, 5> &arr);
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
