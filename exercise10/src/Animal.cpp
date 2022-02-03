#include "Animal.hpp"

Animal::Animal(string name, int age, string habitat) {
    className = __FUNCTION__;
    this->name = name;
    this->age = age;
    this->habitat = habitat;
}

ostream& operator<<(ostream& os, const Animal& a) {
    // TODO: implement the operator overload
    return os;
}
