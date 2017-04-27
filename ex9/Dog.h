#include "exercise9.h"
#include "Canine.h"

#ifndef DOG_H
#define DOG_H

class Dog: public Canine {
    public:
        Dog(string name_, int age_, string habitat_);
        
        string sound() const { return "Woof"; }
};

#endif
