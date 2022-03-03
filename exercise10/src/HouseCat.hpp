/**
 * @file HouseCat.hpp
 * @author Roman Yasinovskyy
 * @brief Class HouseCat
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Feline.hpp"
#include "exercise10.hpp"

#ifndef HOUSECAT_H
#define HOUSECAT_H

class HouseCat : public Feline {
public:
  HouseCat(string name, int age, bool carnivore);
};

#endif
