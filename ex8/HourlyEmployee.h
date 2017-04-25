#include "exercise8.h"
#include "Employee.h"

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

class HourlyEmployee : public Employee {
    private:
        double wage_rate;
        double hours;
    public:
        HourlyEmployee();
        HourlyEmployee(string the_name, string the_ssn, double the_wage_rate, double the_hours);
        void set_rate(double);
        double get_rate() const;
        void set_hours(double hours_worked);
        double get_hours() const;
        void print_check() ;
};

#endif
