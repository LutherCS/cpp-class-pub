#include "exercise10.hpp"
#include "Mammal.hpp"

#ifndef FELINE_H
#define FELINE_H

class Feline: public Mammal {
    public:
        Feline(string name, int age, string habitat, bool carnivore);

        string sound() const { return "Meow"; }
};

#endif
