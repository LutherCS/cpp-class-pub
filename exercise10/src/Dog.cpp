#include "Dog.hpp"

Dog::Dog(string name, int age, string habitat):
    Canine(name, age, habitat, true) {
        className = __FUNCTION__;
    };
