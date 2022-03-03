/**
 * @file Dog.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Dog.hpp"

Dog::Dog(string name, int age, string habitat)
    : Canine(name, age, habitat, true) {
  className = __FUNCTION__;
};
