#include "exercise9.h"
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Parrot.h"
#include "Penguin.h"
#include "Canine.h"
#include "Feline.h"
#include "Dog.h"
#include "BobCat.h"
#include "HouseCat.h"

using namespace std;

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
    cout << "---" << endl;
    Parrot parrotObj1 = Parrot("Kind Killer", 10, 1, true);
    cout << parrotObj1 << endl;
    Parrot* parrotObj2 = new Parrot("Lazy Larry", 20, 2, false);
    cout << *parrotObj2 << endl;
    cout << "---" << endl;
    Penguin penguinObj1 = Penguin("Missing Muscle", 30, true);
    cout << penguinObj1 << endl;
    Penguin* penguinObj2 = new Penguin("Noisy Night", 40, false);
    cout << *penguinObj2 << endl;
    cout << "---" << endl;
    Dog dogObj1 = Dog("Outgoing Oak", 50, "House");
    cout << dogObj1 << endl;
    Dog* dogObj2 = new Dog("Philosophical Psychic", 60, "Kennel");
    cout << *dogObj2 << endl;
    cout << "---" << endl;
    BobCat bobcatObj1 = BobCat("Quintessential Quitter", 70);
    cout << bobcatObj1 << endl;
    BobCat* bobcatObj2 = new BobCat("Romantic Reaper", 80);
    cout << *bobcatObj2 << endl;
    cout << "---" << endl;
    HouseCat housecatObj1 = HouseCat("Silent Syndrome", 90, true);
    cout << housecatObj1 << endl;
    HouseCat* housecatObj2 = new HouseCat("Tropical Thunder", 99, false);
    cout << *housecatObj2 << endl;
    cout << "---" << endl;

    return 0;
}