#include "exercise9.h"
#include "Bird.h"

#ifndef PARROT_H
#define PARROT_H

class Parrot: public Bird {
    private:
        bool talking;
    public:
        Parrot(string name_, int age_, int eggs_, bool talking_);

        bool isTalking() const { return talking; }

        string movement() const { return "flies"; }
        string sound() const;
};

#endif
