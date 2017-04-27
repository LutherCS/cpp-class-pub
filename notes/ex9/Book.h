#include "exercise9.h"
#include "LibraryItem.h"

#ifndef BOOK_H
#define BOOK_H

class Book: public LibraryItem {
    private:
        string author;
    public:
        Book(string title_, string author_);

        string getAuthor() const { return author; }
        void setAuthor(string author_) { author = author_; }

        string print() const;
};

#endif
