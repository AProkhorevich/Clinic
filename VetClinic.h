#pragma once
#include <string>
#include "Clinic.h"

class VetClinic : public Clinic{
public:
    //Конструкторы
    VetClinic(const std::string &name, int numOfPatients, std::string petType);

//    VetClinic();
    VetClinic();

    VetClinic(const std::string &name, int numOfPatients);

    VetClinic(const VetClinic &cpy);

    void print() const;

    //Компоненты-функции для просмотра и установки полей данных.
    std::string &get_owner();
    void set_pet_type(const std::string &pet_type);
    const std::string &get_pet_type() const;

    void print() override;

public:
    ~VetClinic();

private:
   std::string pet_type = "_";

};



