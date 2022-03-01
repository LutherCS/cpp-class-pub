/**
 * @file Employee.cpp
 * @author
 * @brief Class Employee implementation
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Employee.hpp"

Employee::Employee(string name, string department)
    : name(name), department(department), weeklyPayment(0) {}

Employee::Employee(const Employee &e)
    : name(e.name), department(e.department), weeklyPayment(0) {}

string Employee::getName() const { /* TODO: Implement this method */
}

string Employee::getDepartment() const { /* TODO: Implement this method */
}

void Employee::setDepartment(
    string department) { /* TODO: Implement this method */
}

double Employee::getWeeklyPayment() const { /* TODO: Implement this method */
}

void Employee::setWeeklyPayment(
    double weeklyPayment) { /* TODO: Implement this method */
}

ostream &operator<<(ostream &os, const Employee &e) {
  /* TODO: Implement this method */
}
