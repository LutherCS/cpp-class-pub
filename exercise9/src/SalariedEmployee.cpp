/**
 * @file SalariedEmployee.cpp
 * @author
 * @brief Class SalariedEmployee implementation
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "SalariedEmployee.hpp"

SalariedEmployee::SalariedEmployee(string name, string department,
                                   double salary)
    : Employee(name, department), salary(salary) {
  /*TODO: Implement this method*/
}

SalariedEmployee::SalariedEmployee(const SalariedEmployee &se)
    : Employee(se), salary(se.salary) {
  /*TODO: Implement this method*/
}

double SalariedEmployee::getSalary() const { /*TODO: Implement this method*/
}

void SalariedEmployee::setSalary(double salary) {
  /*TODO: Implement this method*/
}

ostream &operator<<(ostream &os, const SalariedEmployee &se) {
  /*TODO: Implement this method*/
}
