/**
 * @file BobCat.hpp
 * @author Roman Yasinovskyy
 * @brief Class Bobcat
 * @version 2022.3
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Feline.hpp"
#include "exercise10.hpp"

#ifndef BOBCAT_H
#define BOBCAT_H

class BobCat : public Feline {
public:
  BobCat(string name, int age);
};

#endif
