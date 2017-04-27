#include "exercise9.h"
#include "LibraryItem.h"

#ifndef DISC_H
#define DISC_H

class Disc: public LibraryItem {
    protected:
        string type; //CD/DVD
    public:
        Disc(string title_, string type_) : LibraryItem(title_), type(type_) { };

        string getType() const { return type; }
        void setType(string type_) { type = type_; }

        virtual string print() { return type; }
};

#endif
