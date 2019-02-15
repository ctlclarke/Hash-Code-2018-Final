#include <iostream>
#include "Plans.h"

std::vector<bool> createRow(const std::string& line)
{
    std::vector<bool> row;
    row.reserve(line.size());
    for(const auto& c : line)
        row.push_back(c == '#');
    return row;
}

ResidentialPlan ResidentialPlan::readResidentialPlan(std::istream& in, int height, int width, int capacity)
{
    std::vector<std::vector<bool>> data;
    data.reserve(height);
    for(std::size_t i = 0; i < height; ++i) {
        std::string line;
        in >> line;
        data.push_back(createRow(line));
    }
    return ResidentialPlan(std::move(data), capacity);
}

ResidentialPlan::ResidentialPlan(const std::vector<std::vector<bool>>& data, int capacity) :
    data(data),
    capacity(capacity)
{
}


UtilityPlan UtilityPlan::readUtilityPlan(std::istream& in, int height, int width, int type)
{
    std::vector<std::vector<bool>> data;
    data.reserve(height);
    for(std::size_t i = 0; i < height; ++i) {
        std::string line;
        in >> line;
        data.push_back(createRow(line));
    }
    return UtilityPlan(std::move(data), type);
}

UtilityPlan::UtilityPlan(const std::vector<std::vector<bool>>& data, int type) :
    data(data),
    type(type)
{
}
