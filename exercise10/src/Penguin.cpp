#include "Penguin.hpp"

Penguin::Penguin(string name, int age, bool swimming):
    Bird(name, age, "Antarctica", 1), swimming(swimming) {
        className = __FUNCTION__;
    };

string Penguin::move() const {
    // TODO: implement the function
    return "Implement me";
}

string Penguin::sound() const {
    return "Heyyy";
}
