#include "Section.h"

Section::Section() {
    department = "";
    number = 0;
    letter = '\0';
}

Section::Section(string department_, int number_, char letter_) {
    department = department_;
    number = number_;
    letter = letter_;
}
/*
Section::Section(Section& otherSection) {
    department = otherSection.getDepartment();
    number = otherSection.getNumber();
    letter = otherSection.getLetter();
}
*/
Section::~Section() {
    //cout << "Class Section destructor has been called" << endl;
}

ostream& operator<<(ostream& os, const Section& s) {
    os << s.department << "-" << s.number << "-" << s.letter;
    return os;
}