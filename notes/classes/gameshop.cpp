#include "gameshop.hpp"

ComputerGame::ComputerGame() {
    title = "Unknown";
    platform = "PC";
    price = 0.99;
}

ComputerGame::ComputerGame(string title, string platform, double price) {
    this->title = title;
    this->platform = platform;
    this->price = price;
}

ComputerGame::~ComputerGame() {
    counter++;
}

ostream& operator<<(ostream& os, const ComputerGame& g) {
    os << g.title << " costs $" << g.price;
    return os;
}