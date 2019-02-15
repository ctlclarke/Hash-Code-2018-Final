#include <iostream>
#include "IO.h"
#include "Plans.h"

int main(int argc, char *argv[])
{
    unsigned H, W, D, B;
    std::cin >> H >> W >> D >> B;
    std::vector<UtilityPlan> utilityPlans;
    std::vector<ResidentialPlan> residentialPlans;

    while(B--) {
        readPlan(std::cin, utilityPlans, residentialPlans);
    }
    for(const auto& plan : utilityPlans) {
        plan.print();
    }
    for(const auto& plan : residentialPlans) {
        plan.print();
    }
    return 0;
}
