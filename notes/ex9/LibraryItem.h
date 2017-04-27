#include "exercise9.h"

#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

class LibraryItem {
    protected:
        string title;
    public:
        LibraryItem(string title_) { title = title_; }

        string getTitle() const { return title; }
        void setTitle(string title_) { title = title_; }

        virtual string print() const = 0;
};

#endif
