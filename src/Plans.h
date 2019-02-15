#ifndef PLANS_H
#define PLANS_H
#include <iostream>
#include <vector>

class ResidentialPlan {
    public:
        static ResidentialPlan readResidentialPlan(std::istream& in, int height, int width, int capacity);
        ~ResidentialPlan(){};

        void print() const { std::cout << "Residential: " << data.size() << " by " << data.front().size() << std::endl;}
    protected:
        ResidentialPlan(const std::vector<std::vector<bool>>& data, int capacity);

        const int capacity;
        std::vector<std::vector<bool>> data;
};

class UtilityPlan {
    public:
        static UtilityPlan readUtilityPlan(std::istream& in, int height, int width, int type);
        ~UtilityPlan(){};

        void print() const { std::cout << "Utility: " << data.size() << " by " << data.front().size() << std::endl;}

    protected:
        UtilityPlan(const std::vector<std::vector<bool>>& data, int type);

        const int type;
        std::vector<std::vector<bool>> data;
};

#endif
