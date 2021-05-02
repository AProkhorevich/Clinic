#pragma once
#include <string>
#include "Clinic.h"

class VetClinic : Clinic{
public:
    //Конструкторы
    VetClinic(const std::string &name, int numOfPatients, std::string petType);

    VetClinic();

    VetClinic(const std::string &name, int numOfPatients);

    VetClinic(const VetClinic &cpy);

    void print() const;

    //Компоненты-функции для просмотра и установки полей данных.
    std::string &get_owner();
    void set_owner(const std::string &pet_type);
    const std::string &getPetType() const;

    void print() override;

public:
    ~VetClinic();

private:
   std::string pet_type = "_";

};



