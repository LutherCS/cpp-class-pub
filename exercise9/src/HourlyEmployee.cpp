/**
 * @file HourlyEmployee.cpp
 * @author 
 * @brief Class HourlyEmployee implementation
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "HourlyEmployee.hpp"

HourlyEmployee::HourlyEmployee(string name, string department, double rate,
                               double hours)
    : Employee(name, department), rate(rate), hours(hours) {
  /* TODO: Implement this method */
}

HourlyEmployee::HourlyEmployee(const HourlyEmployee &he)
    : Employee(he), rate(he.rate), hours(he.hours) {
  /* TODO: Implement this method */
}

void HourlyEmployee::setRate(double rate) { /* TODO: Implement this method */
}

double HourlyEmployee::getRate() const { /* TODO: Implement this method */
}

void HourlyEmployee::setHours(double hours) {
  /* TODO: Implement this method */
}

double HourlyEmployee::getHours() const { /* TODO: Implement this method */
}

ostream &operator<<(ostream &os, const HourlyEmployee &he) {
  /* TODO: Implement this method */
}
