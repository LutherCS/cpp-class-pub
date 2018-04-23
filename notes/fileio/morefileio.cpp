#include "fileio.hpp"

void printByYear(string filename, int target_year) {
    cout << "Let's find all the books published after " << target_year << " in the " << filename << endl;
    ifstream libraryFile(filename.c_str());
    if (libraryFile.fail()) {
        cout << "Could not open file" << endl;
        exit(1);
    }
    libraryFile.ignore(__INT_MAX__, '\n');
    while (!libraryFile.eof()) {
        string isbn;
        string title;
        int edition;
        string author;
        int year;
        double price;

        getline(libraryFile, isbn, '|');
        getline(libraryFile, title, '|');
        libraryFile >> edition;
        libraryFile.ignore(__INT_MAX__, '|');
        getline(libraryFile, author, '|');
        libraryFile >> year;
        libraryFile.ignore(__INT_MAX__, '|');
        libraryFile >> price;
        libraryFile.ignore(__INT_MAX__, '\n');

        if (year > target_year) {
            cout << title << " (" << year << ") by " << author << " costs $" << fixed << setprecision(2) << price <<endl;
        }
    }

    libraryFile.close();
}

int main(int argc, char** argv) {
    cout << "Working with mixed content files" << endl;
    printByYear("library.csv", 2013);

    return 0;
}