#include <iostream>
#include "VetClinic.h"

using namespace std;

template <class Facility>
class Array {
    Facility* arr;
    int _n;

public:
    class Iterator;
    Array(int n = 1) : _n(n) {
        arr = new Facility[n];
    }

    Facility& operator[] (const int& n) {
        if (n > 0 && n < _n) {
            return arr[n];
        }
        return arr[0];
    }

    Iterator begin() { return arr; }
    Iterator end() { return arr + _n; }

    class Iterator {
        Facility* cur;

    public:
        Iterator(Facility* first) : cur(first) {}
        Facility& operator+ (int n) { return *(cur + n); }
        Facility& operator- (int n) { return *(cur - n); }
        Facility& operator++ (int) { return *cur++; }
        Facility& operator-- (int) { return *cur--; }

        bool operator!= (const Iterator& it) { return cur != it.cur; }
        bool operator== (const Iterator& it) { return cur == it.cur; }

        VetClinic& operator* () {return *cur; }
    };
};

template <class Facility>
std::ostream & operator<< (std::ostream& ost, const Array<Facility>& n) {
    ost << Array<Facility>::arr[n];
    return ost;
}

void show_iterator_work(Array<Facility*>& arr) {
    std::cout << "Enter index of member you want to see: ";
    int ind;
    std::cin >> ind;
    std::cout << "\nOn " << ind << " position this item:\n";
    auto it = Array<Facility*>::Iterator(arr.begin());
    (it + ind)->print();
    std::cout << std::endl;
    std::cout << "Showing has been finished\n";
}

void input(int n, int m, Array<Facility*>& arr) {
    string name, pet_type;
    int num_of_patients, price, cnt_pgs;
    cout << "Enter your " << n << " objects of Clinic(name, num_of_patients):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        cin >> name >> num_of_patients;
        auto* bs = new Clinic(name, num_of_patients);
        arr[i] = bs;
    }
    cout << "Enter your " << m << " VetClinic(name, num_of_patients, pet_type):\n";
    for (int i = 0; i < m; i++) {
        cout << i + 1 << ". ";
        cin >> name >> num_of_patients >> pet_type;
        auto* nb = new VetClinic(name, num_of_patients, pet_type);
        arr[i + n] = nb;
    }
    cout << "Input has been finished\n";
}

void output(int n, Array<Facility*> arr) {го
    for (int i = 0; i < n; i++) {
        arr[i]->print();
    }
    cout << "Output has been finished\n";
}

using namespace std;

int main() {
    int n, m;
    cout << "Enter count of Clinic you want to create: ";
    cin >> n;
    cout << "Enter count of VetClinics: ";
    cin >> m;
    Array<Facility*> arr(n + m);

    input(n, m, arr);
    cout << "list of Clinics:\n";
    output(n + m, arr);

    show_iterator_work(arr);

    VetClinic my_vet_clinic = VetClinic();
    VetClinic my_explicit_vet_clinic = VetClinic("Happy Cats",5,"Cats");
    Clinic just_clinic = Clinic();
    just_clinic.print();
    my_vet_clinic.print();
    my_explicit_vet_clinic.print();

    return 0;
}
