#include "basics.hpp"

int main() {
    int a = 253;
    cout << a << endl;
    cout << a / 2 << endl;

    double b = 71;
    cout << b << endl;
    cout << b / 2 << endl;

    int c = 5;
    cout << c / 2 << endl;
    cout << double(c) / 2 << endl;
    cout << c / 2 << endl;
    cout << (double)(c / 2) << endl;

    auto d = 2.6;

    int e = 1;
    switch (e) {
        case 1:
            cout << "One";
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        default:
            cout << "IDONTKNOW";
    }
    cout << "\n";

    return 0;
}