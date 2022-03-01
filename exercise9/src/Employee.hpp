/**
 * @file Employee.hpp
 * @author Roman Yasinovskyy
 * @brief Class Employee
 * @version 2022.3
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "exercise9.hpp"

class Employee {
private:
  string name;
  string department;
  double weeklyPayment;

public:
  /**
   * @brief Construct a new Employee object
   *
   * @param name
   * @param department
   */
  Employee(string name, string department);
  /**
   * @brief Clone an existing Employee:: Employee object
   *
   * @param e
   */
  Employee(const Employee &e);
  /**
   * @brief Get Employee name
   *
   * @return string
   */
  string getName() const;
  /**
   * @brief Get Employee department
   *
   * @return string
   */
  string getDepartment() const;
  /**
   * @brief Set/change Employee department
   *
   * @param department
   */
  void setDepartment(string department);
  /**
   * @brief Get Employee weekly pay
   *
   * @return double
   */
  double getWeeklyPayment() const;
  /**
   * @brief Set/change Employee weekly pay
   *
   * @param weeklyPayment
   */
  void setWeeklyPayment(double weeklyPayment);
  /**
   * @brief Override operator <<
   *
   * @param os
   * @param e
   * @return ostream&
   */
  friend ostream &operator<<(ostream &, const Employee &e);
};

#endif
