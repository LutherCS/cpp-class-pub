/**
 * @file Mammal.hpp
 * @author Roman Yasinovskyy
 * @brief Class Mammal
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Animal.hpp"
#include "exercise10.hpp"

#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal : public Animal {
protected:
  bool carnivore;

public:
  Mammal(string name, int age, string habitat, bool carnivore);

  inline bool isCarnivore() const { return carnivore; }

  string move() const;

  friend ostream &operator<<(ostream &, const Mammal &);
};

#endif
