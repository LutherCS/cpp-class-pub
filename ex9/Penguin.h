#include "exercise9.h"
#include "Bird.h"

#ifndef PENGUIN_H
#define PENGUIN_H

class Penguin: public Bird {
    private:
        bool swimming;
    public:
        Penguin(string name_, int age_, bool swimming_);

        string movement() const;
        string sound() const;
};

#endif
