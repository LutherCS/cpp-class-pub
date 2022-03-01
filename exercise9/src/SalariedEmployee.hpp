/**
 * @file SalariedEmployee.hpp
 * @author Roman Yasinovskyy
 * @brief Class SalariedEmployee header
 * @version 2022.3
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.hpp"

class SalariedEmployee : public Employee {
private:
  double salary;

public:
  /**
   * @brief Construct a new Salaried Employee object
   *
   * @param name
   * @param department
   * @param salary
   */
  SalariedEmployee(string name, string department, double salary);
  /**
   * @brief Clone an existing Salaried Employee object
   *
   * @param se
   */
  SalariedEmployee(const SalariedEmployee &se);
  /**
   * @brief Get the salary
   *
   * @return double
   */
  double getSalary() const;
  /**
   * @brief Set/change the salary
   *
   * @param salary
   */
  void setSalary(double salary);
  /**
   * @brief Override operator <<
   *
   * @param se
   * @return ostream&
   */
  friend ostream &operator<<(ostream &, const SalariedEmployee &se);
};

#endif
