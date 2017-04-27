#include "Parrot.h"

Parrot::Parrot(string name_, int age_, int eggs_, bool talking_): Bird(name_, age_, "Tropics", eggs_), talking(talking_) { className = __FUNCTION__; };

string Parrot::sound() const {
    //TODO: Task 6: return a string (see output.txt for an example) based on the value of talking data member.
}
