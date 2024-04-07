#ifndef SSPP_HPP
#define SSPP_HPP

#include "PU.hpp"
#include <vector>

template <typename PU, typename... PUs>
class SSPP<PU, PUs>
{
    PU pu;
    sspp<PUs...> s;

public:
    template <typename IT>
    void execute(IT begin, IT end)
    {
        // auto result = s.execute();
        pu.execute(begin, end);
        std::cout << "SSPP Output: " << result << std::endl;
    }
    template <typename T>
    void execute(T input)
    {

    }
};

#endif // SSPP_HPP
