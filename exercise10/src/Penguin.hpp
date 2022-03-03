/**
 * @file Penguin.hpp
 * @author Roman Yasinovskyy
 * @brief Class Penguin
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Bird.hpp"
#include "exercise10.hpp"

#ifndef PENGUIN_H
#define PENGUIN_H

class Penguin : public Bird {
private:
  bool swimming;

public:
  Penguin(string name, int age, bool swimming);

  inline bool isSwimming() const { return swimming; }

  string move() const;
  string sound() const;
};

#endif
