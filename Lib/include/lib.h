//
// Created by Apostol on 04.02.2024.
//

#ifndef ARH_1_LIB_H
#define ARH_1_LIB_H

#include <vector>


class lib
        {
public:
    template<typename Ta,typename Tb,typename Tc>
    std::vector<double> Solve(Ta a, Tb b, Tc c);
};


#endif //ARH_1_LIB_H
