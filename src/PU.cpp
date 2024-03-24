#include <iostream>
#include <SSPP.hpp>
#include <array>

using namespace std;

template <typename IT>
void SSPP<IT>::execute(array<IT, 5> &a)
{
    PU1::input(1);
};

template <typename IT>
void SSPP<IT>::execute()
{
    PU1::input();
};

struct PU1
{
    void input(int i){

    };

    float output()
    {
        PU2 pu2;
        pu2.input(3.14f);
    };
};

struct PU2
{
    void input(float f){

    };
    int output()
    {
        PU3 pu3;
        pu3.input(1);
    };
};

struct PU3
{
    void input(int a){

    };
    int output()
    {
        cout << "output" << endl;
    };
};

int main()
{
    return 0;
}
