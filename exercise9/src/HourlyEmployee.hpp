/**
 * @file HourlyEmployee.hpp
 * @author Roman Yasinovskyy
 * @brief Class HourlyEmployee implementation
 * @version 2022.3
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.hpp"
#include "exercise9.hpp"

class HourlyEmployee : public Employee {
private:
  double rate;
  double hours;

public:
  /**
   * @brief Construct a new Hourly Employee object
   *
   * @param name
   * @param department
   * @param rate
   * @param hours
   */
  HourlyEmployee(string name, string department, double rate, double hours);
  /**
   * @brief Clone an existing Hourly Employee object
   *
   * @param he
   */
  HourlyEmployee(const HourlyEmployee &he);
  /**
   * @brief Get the hourly rate
   *
   * @return double
   */
  double getRate() const;
  /**
   * @brief Set/change the hourly rate
   *
   * @param rate
   */
  void setRate(double rate);
  /**
   * @brief Get the hours
   *
   * @return double
   */
  double getHours() const;
  /**
   * @brief Set/change the hours
   *
   * @param hours
   */
  void setHours(double hours);
  /**
   * @brief Override operator <<
   *
   * @param he
   * @return ostream&
   */
  friend ostream &operator<<(ostream &, const HourlyEmployee &he);
};

#endif
