/**
 * @file Company.hpp
 * @author Roman Yasinovskyy
 * @brief Class Company header
 * @version 2022.3
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef COMPANY_H
#define COMPANY_H

#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"
#include "exercise9.hpp"

class Company {
private:
  string name;
  int size;
  vector<SalariedEmployee> se_vec;
  vector<HourlyEmployee> he_vec;
  /**
   * @brief Read company date from file
   *
   * @param filename
   */
  void readCompanyFromFile(string filename);

public:
  /**
   * @brief Construct a new Company object
   *
   * @param name
   * @param filename
   */
  Company(string name, string filename);
  /**
   * @brief Get the Company name
   *
   * @return string
   */
  inline string getName() const { return name; };
  /**
   * @brief Get the Company size
   *
   * @return int
   */
  inline int getSize() const { return size; };
  /**
   * @brief Override operator <<
   *
   * @param c
   * @return ostream&
   */
  friend ostream &operator<<(ostream &, const Company &c);
};

#endif
