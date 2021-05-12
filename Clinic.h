#pragma once
#include "Facility.h"
#include <string>
#include <utility>

class Clinic : public Facility {
    std::string name;
    int num_of_patients;
public:
    Clinic(std::string name, int numOfPatients);
    Clinic();


    virtual ~Clinic();

    void print() override;
};
