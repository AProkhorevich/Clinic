#include <iostream>
#include "VetClinic.h"

using namespace std;

int main() {

    VetClinic my_vet_clinic = VetClinic();
    VetClinic my_explicit_vet_clinic = VetClinic("Happy Cats",5,"Cats");
    Clinic just_clinic = Clinic();
    just_clinic.print();
    my_vet_clinic.print();
    my_explicit_vet_clinic.print();

//    VetClinic empty = VetClinic();
//    empty.print();
//    VetClinic Jack = VetClinic("Alex","Jack", 4);
//    Jack.print();
//    VetClinic cpy = VetClinic(Jack);
//    cpy.print();
//
//    cpy.set_age(6);
//    cpy.set_name("Mike");
//    cpy.set_owner("Roger");
//    std::cout << "Changed copied classroom:\n";
//    cpy.print();
//
//    //Создадим указатель на компонет-функцию get_age().
//    int (VetClinic:: * ptr) ();
//    ptr = &VetClinic::get_age;
//    std::cout << (Jack.*ptr)() << '\n';
//
//    //Создадим указатель на экземпляр класса
//    VetClinic* ptr1 = &cpy;
//    ptr1->print();
//    cin.get();
    return 0;
}