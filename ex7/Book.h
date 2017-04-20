#include "exercise7.h"

#ifndef BOOK_H
#define BOOK_H

class Book {
    private:
        string title;
        string author;
        double price;
    public:
        Book(string, string, double);
        friend ostream& operator<<(ostream&, const Book&);
};

#endif
