#include "exercise7.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    private:
        double loan;
        int term;
    public:
        Customer(double,int);
        double getLoan();
        int getTerm();
        friend ostream& operator<<(ostream&, const Customer&);
};

#endif
