#include "exercise9.h"
#include "Animal.h"

#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal: public Animal {
    protected:
        bool carnivore;
    public:
        Mammal(string name_, int age_, string habitat_, bool carnivore_);

        bool isCarnivore() const { return carnivore; }

        string movement() const;

        friend ostream& operator<<(ostream&, const Mammal&);
};

#endif
