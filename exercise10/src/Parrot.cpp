#include "Parrot.hpp"

Parrot::Parrot(string name, int age, int eggs, bool talking):
    Bird(name, age, "Tropics", eggs), talking(talking) {
        className = __FUNCTION__;
    };

string Parrot::sound() const {
    // TODO: implement the function
    return "Implement me";
}
