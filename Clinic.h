#pragma once
#include "Facility.h"
#include <string>
#include <utility>

class Clinic : Facility {
    std::string name;
    int num_of_patients;
public:
    Clinic(std::string name, int numOfPatients);
    Clinic();

    void print() override;
};
