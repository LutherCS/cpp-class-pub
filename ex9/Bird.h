#include "exercise9.h"
#include "Animal.h"

#ifndef BIRD_H
#define BIRD_H

class Bird: public Animal {
    protected:
        int eggs;
    public:
        Bird(string name_, int age_, string habitat_, int eggs_);

        int getEggs() const { return eggs; }
        void setEggs(int eggs_) { eggs = eggs_; }

        friend ostream& operator<<(ostream&, const Bird&);
};

#endif
