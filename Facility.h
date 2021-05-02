#pragma once

#include <string>

class Facility {
    std::string facility_type;
public:
    Facility(std::string facilityType);
    virtual void print() = 0;
};
