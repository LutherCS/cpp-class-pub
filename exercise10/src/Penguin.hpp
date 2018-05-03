#include "exercise10.hpp"
#include "Bird.hpp"

#ifndef PENGUIN_H
#define PENGUIN_H

class Penguin: public Bird {
    private:
        bool swimming;
    public:
        Penguin(string name, int age, bool swimming);

        inline bool isSwimming() const { return swimming; }

        string move() const;
        string sound() const;
};

#endif
