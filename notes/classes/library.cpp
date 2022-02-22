#include "bits/stdc++.h"

using namespace std;

class Book {
private:
  string author;
  string title;
  double price;

public:
  inline string getAuthor() const { return author; }
  inline string getTitle() const { return title; }
  inline double getPrice() const { return price; }
  inline void setPrice(double newPrice) { price = newPrice; }
  Book() {
    title = "";
    author = "";
    price = 0.0;
  };
  Book(string, string, double);
  ~Book();

  friend ostream &operator<<(ostream &, const Book &book);
};

Book::Book(string title_, string author_, double price_) {
  this->title = title_;
  this->author = author_;
  this->price = price_;
};

Book::~Book() { cout << "A book is gone" << endl; }

ostream &operator<<(ostream &os, const Book &book) {
  os << book.title << " by " << book.author << " at " << book.price;
  return os;
}

int main() {
  cout << "Library" << endl;
  Book aBook = Book();
  Book bBook = Book("Learn more C++", "Jane", 4.99);
  Book cBook = Book("Learn even more C++", "Jack", 10.99);
  //   cout << aBook.getTitle() << " by " << aBook.getAuthor() << endl;
  //   cout << bBook.getTitle() << " by " << bBook.getAuthor() << endl;
  //   cout << cBook.getTitle() << " by " << cBook.getAuthor() << " at "
  //    << cBook.getPrice() << endl;
  //   cBook.setPrice(1.99);
  //   cout << cBook.getTitle() << " by " << cBook.getAuthor() << " at "
  //        << cBook.getPrice() << endl;
  //   cout << cBook << endl;

  Book *dBook = new Book("Learn Python", "Guido", .99);
  //   cout << *dBook << endl;

  vector<Book> library;
  library.push_back(aBook);
  library.push_back(bBook);
  library.push_back(cBook);
  library.push_back(*dBook);
  for (auto someBook : library) {
    cout << someBook << endl;
  }

  delete dBook;

  return 0;
}