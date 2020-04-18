#include "7.5.h"
#include <iostream>

std::istream &read(std::istream &in, Person &ref){
    in >> ref.name >> ref.address;
    return in;
}

std::ostream &print(std::ostream &out, const Person &ref2C){
    out << ref2C.name << ' '
        << ref2C.address;
    return out;
}