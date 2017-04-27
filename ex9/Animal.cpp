#include "Animal.h"

Animal::Animal(string name_, int age_, string habitat_) {
    className = __FUNCTION__;
    name = name_;
    age = age_;
    habitat = habitat_;
}

ostream& operator<<(ostream& os, const Animal& a) {
    //TODO: Task 1: print an animal info: age, species (className), name, the sound and the movement it makes, and its habitat
    return os;
}
