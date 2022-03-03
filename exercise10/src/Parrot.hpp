/**
 * @file Parrot.hpp
 * @author Roman Yasinovskyy
 * @brief Class Parrot
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Bird.hpp"
#include "exercise10.hpp"

#ifndef PARROT_H
#define PARROT_H

class Parrot : public Bird {
private:
  bool talking;

public:
  Parrot(string name, int age, int eggs, bool talking);

  inline bool isTalking() const { return talking; }

  string move() const { return "flies"; }
  string sound() const;
};

#endif
