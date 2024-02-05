//
// Created by Apostol on 03.02.2024.
//
#include "gtest/gtest.h"
#include "lib.h"
#include <fstream>
#include <algorithm>

TEST(lib, Solve1)
{
    lib L;
    auto r = L.Solve(1,0,1);
    ASSERT_TRUE(r.empty());
}

TEST(lib, Solve2)
{
    lib L;
    auto r = L.Solve(1,0,-1);
    decltype(r) r1 ={1,-1};
    ASSERT_TRUE(std::is_permutation(r.begin(), r.end(),r1.begin(), r1.end()));
}

TEST(lib, Solve3)
{
    lib L;
    auto r = L.Solve(1,0,-1);
    decltype(r) r1 ={1,-1};
    ASSERT_TRUE(std::is_permutation(r.begin(), r.end(),r1.begin(), r1.end()));
}