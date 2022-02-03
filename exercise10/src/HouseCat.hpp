#include "exercise10.hpp"
#include "Feline.hpp"

#ifndef HOUSECAT_H
#define HOUSECAT_H

class HouseCat: public Feline {
    public:
        HouseCat(string name, int age, bool carnivore);
};

#endif
