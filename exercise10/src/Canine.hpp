/**
 * @file Canine.hpp
 * @author Roman Yasinovskyy
 * @brief Class Canine
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Mammal.hpp"
#include "exercise10.hpp"

#ifndef CANINE_H
#define CANINE_H

class Canine : public Mammal {
public:
  Canine(string name, int age, string habitat, int carnivore);
};

#endif
