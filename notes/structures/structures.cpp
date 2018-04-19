#include "structures.hpp"

double Book::getPrice() {
    return price;
}

void Book::setPrice(double newPrice) {
    price = newPrice;
}

void printBook(Book book) {
    cout << book.title << " by " << book.author << " costs " << book.getPrice() <<endl;
}