#include "fileio.hpp"

void sayHello(string name) {
    if (name == "Roman") {
        cout << "Hello Dr. Yasinovskyy" << endl;
    } else if (name == "Alice") {
        cout << "Hello Miss" << endl;
    } else if (name == "Bob") {
        throw 1;
    } else if (name == "Charlie") {
        throw 2;
    } else {
        throw 3;
    }
}

void printFile(const char* filename) {
    ifstream fileIn;
    fileIn.open(filename);

    if (fileIn.fail()) {
        cout << "Could not open " << filename;
        throw 1;
    }
    string line;
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;
    }
    fileIn.close();
}

int** readMatrix() {
    ifstream f;
    int** matrix = new int*[2];
    f.open("m.txt");

    for (int i = 0; i < 2; i++) {
        matrix[i] = new int[2];
        for (int j = 0; j < 2; j++) {
            f >> matrix[i][j];
        }
    }

    f.close();
    return matrix;
}

int main() {
    cout << "Exceptions" << endl;
    try {
        sayHello("Bob");
    } catch (int err) {
        switch (err) {
            case 1:
                cout << "Didn't like Bob";
                break;
            case 2:
                cout << "Didn't like Charlie much";
                exit(1);
                break;
            default:
                cout << "Didn't like anyone";
                break;
        }
    }
    cout << endl;
    cout << "After the exception" << endl;

    cout << "\nFile IO" << endl;
    const char* filename = "in.txt";  // file.open needs const char* parameter
    try {
        printFile(filename);
    } catch (int err) {
        cout << "ERROR: " << err << endl;
    }

    ifstream fileIn;  // input file object
    ofstream fileOut;  //outpur file object

    fileIn.open("in.txt");
    int numberOfNumbers = 0;
    fileIn >> numberOfNumbers;
    cout << "There are " << numberOfNumbers << " numbers in the input file" << endl;
    int sum = 0;
    int n = 0;
    for (int i = 0; i < numberOfNumbers; i++) {
        fileIn >> n;
        sum += n;
    }
    cout << "The sum of all numbers is " << sum << endl;
    fileIn.close();

    fileOut.open("out.txt");  // will be created if necessary
    fileOut << "The sum of all numbers is " << sum << endl;
    fileOut.flush();  // make sure data is written to a file
    fileOut.close();

    cout << "\nWorking with matrices" << endl;
    int **matrix = readMatrix();
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << setw(5) << matrix[i][j];
        }
    }

    delete [] matrix;
}