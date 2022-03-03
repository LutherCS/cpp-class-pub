/**
 * @file exercise10_main.cpp
 * @author Roman Yasinovskyy
 * @brief Exercise 10 driver
 * @version 2022.3
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Animal.hpp"
#include "Bird.hpp"
#include "BobCat.hpp"
#include "Canine.hpp"
#include "Dog.hpp"
#include "Feline.hpp"
#include "HouseCat.hpp"
#include "Mammal.hpp"
#include "Parrot.hpp"
#include "Penguin.hpp"
#include "exercise10.hpp"

int main() {
  vector<Animal *> zoo;
  zoo.push_back(new Parrot("Alice", 10, 3, true));
  zoo.push_back(new Parrot("Bob", 15, 2, false));
  zoo.push_back(new Penguin("Charlie", 10, true));
  zoo.push_back(new Penguin("Dave", 15, false));
  zoo.push_back(new Dog("Eve", 10, "Prairie"));
  zoo.push_back(new Dog("Fred", 15, "City"));
  zoo.push_back(new BobCat("George", 10));
  zoo.push_back(new BobCat("Helen", 15));
  zoo.push_back(new HouseCat("Ivan", 10, true));
  zoo.push_back(new HouseCat("Jenny", 15, false));
  for (auto animal : zoo) {
    cout << *animal << endl;
  }
}
