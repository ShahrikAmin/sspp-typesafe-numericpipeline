#ifndef SSPP_HPP
#define SSPP_HPP

#include "PU.hpp"
#include <array>
#include <optional>

template <typename IT>
class SSPP
{
public:
    PU1 pu1;
    PU2 pu2;
    PU3 pu3;

    std::optional<std::array<IT, 5>> stage1;
    std::optional<std::array<float, 3>> stage2;
    std::optional<float> stage3;

    void execute(const std::array<IT, 5> &arr);
    void execute(); // Helper function to advance the pipeline
};

#include "SSPP_impl.hpp"

#endif // SSPP_HPP
