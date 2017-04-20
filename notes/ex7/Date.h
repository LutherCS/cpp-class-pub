#include "exercise7.h"

#ifndef DATE_H
#define DATE_H

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int, int, int);
        ~Date();
        int getDay() const { return day; }
        int getMonth() const { return month; }
        int getYear() const { return year; }
        friend ostream& operator<<(ostream&, const Date&);
};

#endif