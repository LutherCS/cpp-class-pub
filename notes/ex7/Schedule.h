#include "exercise7.h"
#include "Course.h"

#ifndef SCHEDULE_H
#define SCHEDULE_H

class Schedule {
    private:
        vector<Course> schedule;
    public:
        Schedule(char*);
        ~Schedule();
        friend ostream& operator<<(ostream&, const Schedule&);
};

#endif