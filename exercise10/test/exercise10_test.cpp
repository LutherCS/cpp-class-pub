/**
 * @file exercise10_test.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 10 test
 * @version 2022.3
 * @date 2022-03-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif

#include "../src/Animal.hpp"
#include "../src/Bird.hpp"
#include "../src/BobCat.hpp"
#include "../src/Canine.hpp"
#include "../src/Dog.hpp"
#include "../src/Feline.hpp"
#include "../src/HouseCat.hpp"
#include "../src/Mammal.hpp"
#include "../src/Parrot.hpp"
#include "../src/Penguin.hpp"
#include "../src/exercise10.hpp"

TEST_CASE("Parrot class implemented", "[Parrot]") {
  stringstream ss;
  Parrot parrotObj1 = Parrot("Kind Killer", 10, 1, true);
  ss << parrotObj1;
  CHECK(ss.str() == "10 years old Parrot Kind Killer says I want a cracker and "
                    "flies back to Tropics to lay 1 egg");
  ss.str(string());
  Parrot *parrotObj2 = new Parrot("Lazy Larry", 20, 2, false);
  ss << *parrotObj2;
  CHECK(ss.str() == "20 years old Parrot Lazy Larry says ARGHHH! and flies "
                    "back to Tropics to lay 2 eggs");
  delete parrotObj2;
}

TEST_CASE("Penguin class implemented", "[Penguin]") {
  stringstream ss;
  Penguin penguinObj1 = Penguin("Missing Muscle", 30, true);
  ss << penguinObj1;
  CHECK(ss.str() == "30 years old Penguin Missing Muscle says Heyyy and swims "
                    "back to Antarctica to lay 1 egg");
  ss.str(string());
  Penguin *penguinObj2 = new Penguin("Noisy Night", 40, false);
  ss << *penguinObj2;
  CHECK(ss.str() == "40 years old Penguin Noisy Night says Heyyy and walks "
                    "back to Antarctica to lay 1 egg");
  delete penguinObj2;
}

TEST_CASE("Dog class implemented", "[Dog]") {
  stringstream ss;
  Dog dogObj1 = Dog("Outgoing Oak", 50, "House");
  ss << dogObj1;
  CHECK(ss.str() == "50 years old Dog Outgoing Oak says Woof and runs back to "
                    "House to eat meat");
  ss.str(string());
  Dog *dogObj2 = new Dog("Philosophical Psychic", 60, "Kennel");
  ss << *dogObj2;
  CHECK(ss.str() == "60 years old Dog Philosophical Psychic says Woof and runs "
                    "back to Kennel to eat meat");
  delete dogObj2;
}

TEST_CASE("BobCat class implemented", "[BobCat]") {
  stringstream ss;
  BobCat bobcatObj1 = BobCat("Quintessential Quitter", 70);
  ss << bobcatObj1;
  CHECK(ss.str() == "70 years old BobCat Quintessential Quitter says Meow and "
                    "runs back to Forest to eat meat");
  ss.str(string());
  BobCat *bobcatObj2 = new BobCat("Romantic Reaper", 80);
  ss << *bobcatObj2;
  CHECK(ss.str() == "80 years old BobCat Romantic Reaper says Meow and runs "
                    "back to Forest to eat meat");
  delete bobcatObj2;
}

TEST_CASE("HouseCat class implemented", "[HouseCat]") {
  stringstream ss;
  HouseCat housecatObj1 = HouseCat("Silent Syndrome", 90, true);
  ss << housecatObj1;
  CHECK(ss.str() == "90 years old HouseCat Silent Syndrome says Meow and runs "
                    "back to House to eat meat");
  ss.str(string());
  HouseCat *housecatObj2 = new HouseCat("Tropical Thunder", 99, false);
  ss << *housecatObj2;
  CHECK(ss.str() == "99 years old HouseCat Tropical Thunder says Meow and runs "
                    "back to House to eat grass");
  delete housecatObj2;
}
