#include "Employee.hpp"

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

class SalariedEmployee : public Employee {
    private:
        double salary;
    public:
        SalariedEmployee (string name, string department, double salary);
        SalariedEmployee (const SalariedEmployee& se);
        double getSalary() const;
        void setSalary(double salary);
        friend ostream& operator<<(ostream&, const SalariedEmployee& se);
};

#endif
