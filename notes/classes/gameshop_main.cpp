#include "gameshop.cpp"

int ComputerGame::counter = 0;

int main() {
    cout << "Classes" << endl;
    ComputerGame g1 = ComputerGame();
    ComputerGame *g2 = new ComputerGame("MLB", "Grass", 2.53);
    ComputerGame *g3 = new ComputerGame("MLB", "Grass", 2.53);
    ComputerGame *g4 = new ComputerGame("MLB", "Grass", 2.53);
    ComputerGame *g5 = new ComputerGame("MLB", "Grass", 2.53);
    cout << g1.getPrice() << endl;
    cout << (*g2).getTitle() << " costs " << g2->getPrice() << endl;
    cout << g1 << endl << (*g2) << endl;

    delete g2;
    delete g3;
    delete g4;
    delete g5;

    cout << ComputerGame::counter << endl;
    return 0;
}