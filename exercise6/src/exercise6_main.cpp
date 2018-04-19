#include "exercise6.hpp"

int main() {
    /* Exercise 6: Online game store */
    /* Create the inventory file object */
    ifstream inventoryFileContent("data/exercise6_inventory.txt");
    if (inventoryFileContent.fail()) {
        cout << "ERROR: Could not open the inventory file" << endl;
        exit(1);
    }
    /* Create the state sales tax file object */
    ifstream statesFileContent("data/exercise6_stateTaxRates.txt");
    if (statesFileContent.fail()) {
        cout << "ERROR: Could not open the tax rate file" << endl;
        exit(1);
    }
    /* Create the cart file object */
    ofstream cartFileContent("build/exercise6_cart.txt");
    if (cartFileContent.fail()) {
        cout << "ERROR: Could not open the cart file" << endl;
        exit(1);
    }
    cout << "Reading state information" << endl;

    vector<State> states;
    readStates(statesFileContent, states);
    cout << "Read " << states.size() << " state(s) from the file" << endl;

    vector<Game> games;
    readInventory(inventoryFileContent, games);
    cout << "Read " << games.size() << " games(s) from the file" << endl;

    vector<GameInCart> cart;
    char ans = 'y';
    do {
    /*
     * Display the inventory
     * Ask user to enter the game numer
     * Ask user to enter the number of copies
     * Keep asking if the uer wants to buy another one
     * Don't crash if the user enters bogus numbers
     * */
    } while (ans == 'y');
    double salesTax = 0;
    readState(states, salesTax);
    displayCart(cart, salesTax, cartFileContent);

    inventoryFileContent.close();
    statesFileContent.close();
    cartFileContent.close();

    return 0;
}
