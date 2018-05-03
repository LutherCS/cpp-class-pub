#include "exercise10.hpp"
#include "Bird.hpp"

#ifndef PARROT_H
#define PARROT_H

class Parrot: public Bird {
    private:
        bool talking;
    public:
        Parrot(string name, int age, int eggs, bool talking);

        inline bool isTalking() const { return talking; }

        string move() const { return "flies"; }
        string sound() const;
};

#endif
