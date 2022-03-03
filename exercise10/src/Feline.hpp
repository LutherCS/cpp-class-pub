/**
 * @file Feline.hpp
 * @author Roman Yasinovskyy
 * @brief Class Feline
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Mammal.hpp"
#include "exercise10.hpp"

#ifndef FELINE_H
#define FELINE_H

class Feline : public Mammal {
public:
  Feline(string name, int age, string habitat, bool carnivore);

  string sound() const { return "Meow"; }
};

#endif
