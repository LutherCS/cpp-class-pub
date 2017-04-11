#include "exercise4.h"

typedef int* ptrInt;

using namespace std;

struct Date {
    int year;
    string month;
    int day;
};

struct Color {
    int red;
    int green;
    int blue;
};

struct Cat {
    string name;
    Date dob;
    Color color;

    string sound() {return "meow";}
};

int main() {
    cout << "# Exercise 4" << endl;
    srand(time(0));
    cout << "\n# Structures" << endl;
    int a = 10;
    int b = 20;
    ptrInt ptr_a = &a;
    ptrInt *ptr2ptr = &ptr_a;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;
    *ptr_a = 15;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;
    ptr_a = &b;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;

    Cat *myCat = new Cat;
    myCat->name = "Bandit";
    (*myCat).name = "Charlie";

    cout << myCat->name << endl;

    myCat->dob.year = 2017;
    (*myCat).dob.month = "April";
    myCat->dob.day = 11;

    Cat aCat;
    aCat.name = "Gus";
    cout << aCat.name << endl;
    aCat.dob.year = 2017;
    cout << aCat.dob.year << endl;
    cout << aCat.sound() << endl;

    Book *boo = new Book;
    boo->title = "C++ today";
    boo->author = "Bjarne Stroustrup";
    boo->price = 99.50;

    cout << boo->title << " written by " << (*boo).author << " costs " << boo->price << endl;
   
    Book boo2;
    boo2.title = "C++ today";
    boo2.author = "Bjarne Stroustrup";
    boo2.price = 99.50;

    cout << boo2.title << " written by " << boo2.author << " costs " << boo2.price << endl;

    vector<Book> library;
    library.push_back(boo2);
    cout << library.front().title << endl;

    return 0;
}
