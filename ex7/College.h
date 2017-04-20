#include "exercise7.h"

#ifndef COLLEGE_H
#define COLLEGE_H

class College {
    private:
        string name;
        int rank;
    public:
        College(string, int);
        void setRank(int);
        friend ostream& operator<<(ostream&, const College&);
};

#endif
