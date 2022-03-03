/**
 * @file Dog.hpp
 * @author Roman Yasinovskyy
 * @brief Class Dog
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Canine.hpp"

#ifndef DOG_H
#define DOG_H

class Dog : public Canine {
public:
  Dog(string name, int age, string habitat);

  string sound() const { return "Woof"; }
};

#endif
