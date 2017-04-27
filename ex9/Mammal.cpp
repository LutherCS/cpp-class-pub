#include "Mammal.h"

//TODO: Task 4: implement the constructor of class Mammal
Mammal::Mammal(string name_, int age_, string habitat_, bool carnivore_);

string Mammal::movement() const {
    return "runs";
}

ostream& operator<<(ostream& os, const Mammal& m) {
    os << (const Animal&) m;
    //TODO: Task 5: pecify whether an animal eats grass or meat, depending on the value of the carnivore data member.

    return os;
}
