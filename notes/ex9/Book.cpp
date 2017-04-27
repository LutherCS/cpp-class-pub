#include "Book.h"

Book::Book(string title_, string author_) : LibraryItem(title_), author(author_) { };

string Book::print() const { return title + " by " + author; };
