#ifndef IO_H
#define IO_H
#include <iostream>
#include <vector>
#include "Plans.h"

void readPlan(std::istream& in, std::vector<UtilityPlan>& utilityPlans, std::vector<ResidentialPlan>& residentialPlans)
{
    char t;
    int h, w, val;
    in >> t >> h >> w >> val;
    switch(t) {
        case 'R':
            residentialPlans.push_back(ResidentialPlan::readResidentialPlan(in, h, w, val));
            break;
        case 'U':
            utilityPlans.push_back(UtilityPlan::readUtilityPlan(in, h, w, val));
            break;
        default:
            throw std::runtime_error("Got invalid plan type: " + t);
    }
}

#endif
