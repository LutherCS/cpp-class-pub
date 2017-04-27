#include "exercise9.h"
#include "Mammal.h"

#ifndef CANINE_H
#define CANINE_H

class Canine: public Mammal {
    public:
        Canine(string name_, int age_, string habitat_, int carnivore_);
};

#endif
