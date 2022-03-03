/**
 * @file Parrot.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Parrot.hpp"

Parrot::Parrot(string name, int age, int eggs, bool talking)
    : Bird(name, age, "Tropics", eggs), talking(talking) {
  className = __FUNCTION__;
};

string Parrot::sound() const {
  // TODO: implement the function
  return "Implement me";
}
