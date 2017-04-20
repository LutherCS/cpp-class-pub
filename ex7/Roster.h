#include "exercise7.h"
#include "Student.h"

#ifndef ROSTER_H
#define ROSTER_H

class Roster {
    private:
        vector<Student> studentList;
    public:
        Roster(const char*);
        vector<Student> getStudentList();
        friend ostream& operator<<(ostream&, const Roster&);
};

#endif
