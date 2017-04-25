#include "Employee.h"

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

class SalariedEmployee : public Employee {
    private:
        double salary;
    public:
        SalariedEmployee();
        SalariedEmployee (string the_name, string the_ssn, double the_weekly_salary);
        double get_salary() const;
        void set_salary(double);
        void print_check();
};

#endif
