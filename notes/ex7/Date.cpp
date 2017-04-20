#include "Date.h"

Date::Date() {
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int dd, int mm, int yy) {
    day = dd;
    month = mm;
    year = yy;
}

Date::~Date() {
    //cout << "Class Date destructor has been called" << endl;
}

ostream& operator<<(ostream& os, const Date& d) {
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
}