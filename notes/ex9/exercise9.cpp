#include "exercise9.h"
#include "LibraryItem.h"
#include "Book.h"
#include "Disc.h"
#include "AudioDisc.h"
#include "VideoDisc.h"

using namespace std;

int main() {
    vector<LibraryItem*> library;

    for (uint i = 0; i < library.size(); i++) {
        cout << library.at(i) << endl;
    }

    return 0;
}