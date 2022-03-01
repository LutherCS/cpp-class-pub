/**
 * @file Company.cpp
 * @author
 * @brief Class Company implementation
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Company.hpp"

Company::Company(string name, string filename) : name(name), size(0) {
  readCompanyFromFile(filename);
}

void Company::readCompanyFromFile(string filename) {
  /* TODO:  Create either an Hourly or a Salaried employee from each line */
}

ostream &operator<<(ostream &os, const Company &c) {
  os << "There are " << c.size << " employees in " << c.name << endl;
  /* TODO: Print all salaried employees first and then all hourly employees */
}
