#include "exercise10.hpp"
#include "Animal.hpp"
#include "Bird.hpp"
#include "Mammal.hpp"
#include "Parrot.hpp"
#include "Penguin.hpp"
#include "Canine.hpp"
#include "Feline.hpp"
#include "Dog.hpp"
#include "BobCat.hpp"
#include "HouseCat.hpp"


int main() {
    vector<Animal*> zoo;
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
    for (uint i = 0; i < zoo.size(); i++) {
        cout << *(zoo.at(i)) << endl;
    }

    return 0;
}