#include "Bird.h"

//TODO: Task 2: implement the constructor of class Bird
Bird::Bird(string name_, int age_, string habitat_, int eggs_);

ostream& operator<<(ostream& os, const Bird& b) {
    os << (const Animal&) b;
    //TODO: Task 3: print number of eggs laid by a bird
    
    return os;
}
