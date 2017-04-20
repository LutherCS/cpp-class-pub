#include "exercise7.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
        string name;
        string major;
        double gpa;
    public:
        Student(string, string, double);
        friend ostream& operator<<(ostream&, const Student&);
};

#endif
