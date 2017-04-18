#include "exercise6.h"

using namespace std;

int ComputerGame::counter = 0;

int main() {
    /* Exercise 6: Classes */
    cout << "\nDemo 1: ComputerGame default constructor" << endl;
    ComputerGame cg11 = ComputerGame();
    cout << "Expected: " << "Unknown for Unknown costs $-1.00" << endl;
    cout << "Observed: " << cg11 << endl;
    cout << "---" << endl;
    ComputerGame *cg12 = new ComputerGame();
    cout << "Expected: " << "Unknown for Unknown costs $-1.00" << endl;
    cout << "Observed: " << *cg12 << endl;
    cout << "---" << endl;
    cout << "Size of an automatic object is " << sizeof(cg11) << endl;
    cout << "Size of a reference is " << sizeof(cg12) << endl;
    cout << "Size of a dynamic object is " << sizeof(*cg12) << endl;
    cout << "\nDemo 2: ComputerGame constructor w/ parameters" << endl;
    ComputerGame cg21 = ComputerGame("FIFA 2017", "PC", 20);
    cout << "Expected: " << "FIFA 2017 for PC costs $20.00" << endl;
    cout << "Observed: " << cg21 << endl;
    cout << "---" << endl;
    ComputerGame *cg22 = new ComputerGame("FIFA 2017", "PC", 20);
    cout << "Expected: " << "FIFA 2017 for PC costs $20.00" << endl;
    cout << "Observed: " << *cg22 << endl;
    cout << "---" << endl;
    cout << "\nDemo 3: ComputerGame getter and setter" << endl;
    cg21.setPrice(cg21.getPrice() * 0.9);
    cout << "Expected: " << "FIFA 2017 for PC costs $18.00" << endl;
    cout << "Observed: " << cg21 << endl;
    cout << "---" << endl;
    cg22->setPrice(cg22->getPrice() * 0.9);
    cout << "Expected: " << "FIFA 2017 for PC costs $18.00" << endl;
    cout << "Observed: " << *cg22 << endl;
    cout << "---" << endl;
    cout << "\nDemo 4: Reading a file of ComputerGame objects" << endl;
    char *filename = (char*)"inventory.txt";
    vector<ComputerGame> inventory = readFile(filename);
    for (int i = 0; i < inventory.size(); i++) {
        cout << inventory.at(i) << endl;
    }
    cout << "---" << endl;
    cout << "\nDemo 5: ComputerGame destructor" << endl;
    cout << "A: The destructor has been called " << ComputerGame::counter << " times" << endl;
    delete cg12;
    delete cg22;
    cout << "B: The destructor has been called " << ComputerGame::counter << " times" << endl;

    return 0;
}
