#include "Course.h"

Course::Course(Section section_, string title_, Date startDate_, Date endDate_, string instructor_, double credits_) {
    section = section_;
    title = title_;
    startDate = startDate_;
    endDate = endDate_;
    instructor = instructor_;
    credits = credits_;
}

Course::~Course() {
    //cout << "Class Course destructor has been called" << endl;
}

ostream& operator<<(ostream& os, const Course& c) {
    os << c.section << " (" << c.credits << ")" << " is taught by " << c.instructor << " between " << c.startDate << " and " << c.endDate;
    return os;
}

