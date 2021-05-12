#include <iostream>
#include <utility>
#include "VetClinic.h"

VetClinic::~VetClinic() {

}

VetClinic::VetClinic(const VetClinic &cpy) {
    this->pet_type = cpy.pet_type;
}

std::string &VetClinic::get_owner() {
    return pet_type;
}

void VetClinic::set_pet_type(const std::string &pet_type) {
    VetClinic::pet_type = pet_type;
}

void VetClinic::print() const {
    std::cout << this->pet_type << '\n';
}

const std::string &VetClinic::get_pet_type() const {
    return pet_type;
}

VetClinic::VetClinic(const std::string &name, int numOfPatients, std::string petType) : Clinic(name,
                                                                                                      numOfPatients),
                                                                                               pet_type(std::move(petType)) {}

//VetClinic::VetClinic() = default;

VetClinic::VetClinic(const std::string &name, int numOfPatients) : Clinic(name, numOfPatients) {}

void VetClinic::print() {
    if(this->pet_type =="_")
        std::cout<< "I'm a vet clinic!\n";
    else
        std::cout<< "I'm a vet clinic for " + pet_type +'\n';

}

VetClinic::VetClinic() {}
