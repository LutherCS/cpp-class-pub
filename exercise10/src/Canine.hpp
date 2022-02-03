#include "exercise10.hpp"
#include "Mammal.hpp"

#ifndef CANINE_H
#define CANINE_H

class Canine: public Mammal {
    public:
        Canine(string name, int age, string habitat, int carnivore);
};

#endif
