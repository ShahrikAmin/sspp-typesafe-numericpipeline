#ifndef SSPP_IMPL_HPP
#define SSPP_IMPL_HPP

#include "SSPP.hpp"

template <typename IT>
void SSPP<IT>::execute(const std::array<IT, 5> &arr)
{
    // Advance existing data in the pipeline
    execute();

    // Load new data into stage1
    stage1 = arr;
}

template <typename IT>
void SSPP<IT>::execute()
{
    // Advance data from stage3 to PU3 and output if available
    if (stage3)
    {
        pu3.input(stage3.value());
        stage3.reset();
    }

    // Advance data from stage2 to stage3 and process with PU2 if available
    if (stage2)
    {
        stage3 = pu2.input(stage2.value());
        stage2.reset();
    }

    // Advance data from stage1 to stage2 and process with PU1 if available
    if (stage1)
    {
        stage2 = pu1.input(stage1.value());
        stage1.reset();
    }
}

#endif // SSPP_IMPL_HPP
