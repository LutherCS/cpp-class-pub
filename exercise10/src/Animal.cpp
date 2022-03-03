/**
 * @file Animal.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Animal.hpp"

Animal::Animal(string name, int age, string habitat) {
  className = __FUNCTION__;
  this->name = name;
  this->age = age;
  this->habitat = habitat;
}

ostream &operator<<(ostream &os, const Animal &a) {
  // TODO: implement the operator overload
  return os;
}
