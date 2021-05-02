#pragma once
#include <iostream>
#include "Clinic.h"
#include <utility>

Clinic::Clinic(std::string name, int numOfPatients) : Facility("Clinic"), name(std::move(name)),
num_of_patients(numOfPatients) {}

Clinic::Clinic() : Facility("Clinic"), name("Default name"),num_of_patients(-1) {}

void Clinic::print() {
    std::cout << "I'm a Clinic\n";

}
