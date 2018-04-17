#include "structures.hpp"

int main() {
    cout << "Hello and welcome to Structures" << endl;
    Book book1;
    cout << book1.title << " by " << book1.author << " has " << book1.pages << " pages and costs "  << book1.price << endl;

    book1.title = "C++ today";
    book1.author = "Bjarne Stroustrup";
    book1.pages = 1000;
    book1.price = 2.53999;

    cout << book1.title << " by " << book1.author << " has " << book1.pages << " pages and costs " << fixed << setprecision(2) << book1.price << endl;

    cout << "My Library" << endl;
    vector<Book> library = vector<Book>();
    library.push_back(book1);
    for (Book b: library) {
        cout << b.title << " by " << b.author << " has " << b.pages << " pages and costs " << fixed << setprecision(2) << b.price << endl;
    }

    Book *book2 = new Book;
    (*book2).title = "C++ tomorrow";
    book2->author = "Roman Yasinovskyy";
    book2->pages = 2;
    book2->price = 253;

    cout << book2->title << " by " << book2->author << " has " << book2->pages << " pages and costs " << fixed << setprecision(2) << book2->price << endl;

    delete book2;

    Book book3 = Book{"C++ the day after tomorrow", "Unknown", 100, .99};
    cout << book3.title << " by " << book3.author << " has " << book3.pages << " pages and costs " << fixed << setprecision(2) << book3.price << endl;

    Book *book4 = new Book{"Python forever!", "Students", 10000, 10.99};
    cout << (*book4).title << " by " << (*book4).author << " has " << (*book4).pages << " pages and costs " << fixed << setprecision(2) << (*book4).price << endl;

    return 0;
}
