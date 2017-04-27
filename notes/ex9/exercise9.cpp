#include "exercise9.h"
#include "LibraryItem.h"
#include "Book.h"
#include "Disc.h"
#include "AudioDisc.h"
#include "VideoDisc.h"

using namespace std;

int main() {
    vector<LibraryItem*> library;

    library.push_back(new Book("Intro to C++", "John Doe"));
    //library.push_back(new Disc("Nature sounds", "CD"));
    library.push_back(new AudioDisc("Nature sounds", "CD", "Various Artists"));
    library.push_back(new VideoDisc("Apocalypse Now!", "DVD", "Francis Ford Coppola"));
    
    for (uint i = 0; i < library.size(); i++) {
        cout << library.at(i)->print() << endl;
    }
    

    return 0;
}