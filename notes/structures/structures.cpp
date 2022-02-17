#include "structures.hpp"

Book::Book() {}

Book::Book(string title_, string author_, int pages_, double price_) {
    title = title_;
    author = author_;
    pages = pages_;
    price = price_;
}

double Book::getPrice() {
    return price;
}

void Book::setPrice(double newPrice) {
    price = newPrice;
}

void printBook(Book book) {
    cout << book.title << " by " << book.author << " costs " << book.getPrice() <<endl;
}