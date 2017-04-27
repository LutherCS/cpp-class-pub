#include "exercise9.h"
#include "Feline.h"

#ifndef HOUSECAT_H
#define HOUSECAT_H

class HouseCat: public Feline {
    public:
        HouseCat(string name_, int age_, bool carnivore_);
};

#endif
