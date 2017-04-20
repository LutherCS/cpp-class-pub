#include "exercise7.h"

#ifndef LAPTOP_H
#define LAPTOP_H

class Laptop {
    private:
        string manufacturer;
        double price;
        string color;
    public:
        Laptop(string, double, string);
        string getManufacturer();
        void setManufacturer(string);
        double getPrice();
        void setPrice(double);
        string getColor();
        void setColor(string);
        friend ostream& operator<<(ostream&, const Laptop&);
};

#endif
