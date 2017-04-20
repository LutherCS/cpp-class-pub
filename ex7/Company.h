#include "exercise7.h"

#ifndef COMPANY_H
#define COMPANY_H

class Company {
    private:
        string name;
        double stockPrice;
    public:
        Company(string, double);
        double getStockPrice();
        void setStockPrice(double);
        friend ostream& operator<<(ostream&, const Company&);
};

#endif
