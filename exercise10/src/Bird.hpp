#include "exercise10.hpp"
#include "Animal.hpp"

#ifndef BIRD_H
#define BIRD_H

class Bird: public Animal {
    protected:
        int eggs;
    public:
        Bird(string name, int age, string habitat, int eggs);

        inline int getEggs() const { return eggs; }

        friend ostream& operator<<(ostream&, const Bird&);
};

#endif
