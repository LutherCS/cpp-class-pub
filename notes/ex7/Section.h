#include "exercise7.h"

#ifndef SECTION_H
#define SECTION_H

class Section {
    private:
        string department;
        int number;
        char letter;
    public:
        Section();
        Section(string, int, char);
        //Section(Section&);
        ~Section();
        string getDepartment() const { return department; }
        int getNumber() const { return number; }
        char getLetter() const { return letter; }
        friend ostream& operator<<(ostream&, const Section&);
};

#endif