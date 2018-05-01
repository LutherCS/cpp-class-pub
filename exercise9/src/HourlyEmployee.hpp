#include "exercise9.hpp"
#include "Employee.hpp"

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

class HourlyEmployee : public Employee {
    private:
        double rate;
        double hours;
    public:
        HourlyEmployee(string name, string department, double rate, double hours);
        HourlyEmployee (const HourlyEmployee& he);
        double getRate() const;
        void setRate(double rate);
        double getHours() const;
        void setHours(double hours);
        friend ostream& operator<<(ostream&, const HourlyEmployee& he);
};

#endif
