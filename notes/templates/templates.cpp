#include "bits/stdc++.h"

using namespace std;

int count() {
    return 0;
}

// template <typename T>
// int count(T a) {
//     return 1;
// }

template <typename T, typename ... Targs>
int count(T first, Targs ... theRest) {
    return 1 + count(theRest ...);
}



int main() {
    cout << count() << endl;
    cout << count(253) << " integer(s)" << endl;
    cout << count("253") << " string(s)" << endl;
    cout << count(2, 5, 3) << " integer(s)" << endl;
    cout << "Done!" << endl;
}