#include "exercise10.hpp"
#include "Animal.hpp"

#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal: public Animal {
    protected:
        bool carnivore;
    public:
        Mammal(string name, int age, string habitat, bool carnivore);

        inline bool isCarnivore() const { return carnivore; }

        string move() const;

        friend ostream& operator<<(ostream&, const Mammal&);
};

#endif
