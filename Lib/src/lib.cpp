//
// Created by Apostol on 04.02.2024.
//

#include "lib.h"
#include <vector>
#include <stdexcept>
#include "lib.h"

std::vector<double> lib::Solve(double a, double b, double c){

    if(std::abs(a) < std::numeric_limits<double>::epsilon())
        throw  std::runtime_error("It is not a");

    std::vector<double > result;

    double D = b*b - 4 * a * c;

    if(D > 0) {
        result.emplace_back((-b + sqrt(D))/(2*a));
        result.emplace_back((-b - sqrt(D))/(2*a));
    }
    else if (std::abs(D) < std::numeric_limits<double>::epsilon())
    {
        result.emplace_back(-b /(2*a));
    }

    return result;
}
