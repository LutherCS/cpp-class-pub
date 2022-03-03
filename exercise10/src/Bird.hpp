/**
 * @file Bird.hpp
 * @author Roman Yasinovskyy
 * @brief Class Bird header
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Animal.hpp"
#include "exercise10.hpp"

#ifndef BIRD_H
#define BIRD_H

class Bird : public Animal {
protected:
  int eggs;

public:
  Bird(string name, int age, string habitat, int eggs);

  inline int getEggs() const { return eggs; }

  friend ostream &operator<<(ostream &, const Bird &);
};

#endif
