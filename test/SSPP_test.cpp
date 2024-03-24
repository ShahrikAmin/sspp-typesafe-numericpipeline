// TODO: add tests for SSPP, examples below of some tests

/*

#include <int_array.hpp>
#include <catch2/catch.hpp>

SCENARIO("Constructing arrays", "[int_array]")
{
    GIVEN("the construction of an array of 3 elements")
    {
        int_array a(3);
        THEN("the array size is 3")
        {
            REQUIRE(a.size() == 3);
        }
    }
    GIVEN("the construction of an array of 5 elements")
    {
        int_array a(5);
        WHEN("the array size is 5")
        {
            REQUIRE(a.size() == 5);
            THEN("5 elements can be added")
            {
                for (size_t i = 0; i < 5; ++i)
                {
                    a[i] = i;
                }
                for (size_t i = 0; i < 5; ++i)
                {
                    REQUIRE(a[i] == i);
                }
            }
        }
    }
    GIVEN("an array of 3 elements")
    {
        int_array a(3);
        WHEN("constructing a second array by copy")
        {
            REQUIRE(a.size() == 3);
            for (size_t i = 0; i < 3; ++i)
            {
                a[i] = i;
            }
            int_array b(a);
            THEN("the second array has the same size and has same elements")
            {
                REQUIRE(b.size() == 3);
                for (size_t i = 0; i < 3; ++i)
                {
                    REQUIRE(b[i] == i);
                }
            }
        }
        WHEN("constructing a second array by copy and modifying the original array")
        {
            REQUIRE(a.size() == 3);
            for (size_t i = 0; i < 3; ++i)
            {
                a[i] = i;
            }
            int_array b(a);
            a[0] = 10;
            THEN("the second array has the same size and has same elements")
            {
                REQUIRE(b.size() == 3);
                for (size_t i = 0; i < 3; ++i)
                {
                    REQUIRE(b[i] == i);
                }
            }
        }
        WHEN("constructing a second array by move")
        {
            REQUIRE(a.size() == 3);
            for (size_t i = 0; i < 3; ++i)
            {
                a[i] = i;
            }
            int_array b(std::move(a));
            b[0] = 10;
            THEN("the new array has the same size and has same elements")
            {
                REQUIRE(b.size() == 3);
                for (size_t i = 0; i < 3; ++i)
                {
                    REQUIRE(b[i] == i);
                }
            }
        }
        WHEN("constructing a second array of the same size and asigning to it")
        {
            int_array b(3);
            b = a;
            THEN("the second array has the same size and has same elements")
            {
                REQUIRE(b.size() == a.size());
                for (size_t i = 0; i < a.size(); ++i)
                {
                    REQUIRE(b[i] == a[i]);
                }
            }
            THEN("comparing both will result equal")
            {
                REQUIRE(b == a);
            }
        }
        WHEN("constructing a second array with different size")
        {
            int_array b(5);
            for (size_t i = 0; i < 5; i++)
            {
                b[i] = i;
            }
            THEN("comparing both will result different")
            {
                REQUIRE(b != a);
            }
        }
        WHEN("constructing a second array with same size but different elements")
        {
            int_array b(3);
            for (size_t i = 0; i < 5; i++)
            {
                b[i] = i + 1;
            }
            THEN("comparing both will result different")
            {
                REQUIRE(b != a);
            }
        }
    }
}


*/