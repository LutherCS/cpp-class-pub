#include "exercise9.hpp"

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
    private:
        string name;
        string department;
        double weeklyPayment;
    public:
        Employee(string name, string department);
        Employee(const Employee& e);
        string getName() const;
        string getDepartment() const;
        void setDepartment(string department);
        double getWeeklyPayment() const;
        void setWeeklyPayment(double weeklyPayment);
        friend ostream& operator<<(ostream&, const Employee& e);
};

#endif
