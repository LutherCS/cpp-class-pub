#include "exercise7.h"
#include "Section.h"
#include "Date.h"

#ifndef COURSE_H
#define COURSE_H

class Course {
    private:
        Section section;
        string title;
        Date startDate;
        Date endDate;
        string instructor;
        double credits;
    public:
        static int counter;
        Course(Section, string, Date, Date, string, double);
        ~Course();
        Section getSection() const { return section; }
        string getTitle() const { return title; }
        Date getStartDate() { return startDate; }
        Date getEndDate() const { return endDate; }
        double getCredits() const { return credits; }
        void print();
        friend ostream& operator<<(ostream&, const Course&);
};

#endif
