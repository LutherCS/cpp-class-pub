#include "exercise10.hpp"
#include "Canine.hpp"

#ifndef DOG_H
#define DOG_H

class Dog: public Canine {
    public:
        Dog(string name, int age, string habitat);
        
        string sound() const { return "Woof"; }
};

#endif
