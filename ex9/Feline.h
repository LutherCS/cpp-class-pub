#include "exercise9.h"
#include "Mammal.h"

#ifndef FELINE_H
#define FELINE_H

class Feline: public Mammal {
    public:
        Feline(string name_, int age_, string habitat_, bool carnivore_);

        string sound() const { return "Meow"; }
};

#endif
