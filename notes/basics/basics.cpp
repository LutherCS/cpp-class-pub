#include "basics.hpp"

int readANumber(int lower_bound, int upper_bound) {
    int result = lower_bound - 1;
    do {
        cout << "please enter a number between " << lower_bound << " and " << upper_bound << endl;
        cin >> result;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(__INT_MAX__, '\n');
            result = lower_bound - 1;
        }

        cout << "Try again" << endl;
    } while (result < lower_bound || result > upper_bound);
    cin.clear();
    cin.ignore(__INT_MAX__, '\n');

    return result;
}

int main() {
    int answer = readANumber(1, 10);
    cout << "You entered " << answer << endl;
    exit(1);

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