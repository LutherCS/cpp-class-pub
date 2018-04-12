#include "pointers.hpp"

void addOne(int a) {
    cout << "INSIDE addOne(int)\n";
    cout << a << endl;
    a++;
    cout << a << endl;
}

void addOneRef(int &a) {
    cout << "INSIDE addOne(int &)\n";
    cout << a << endl;
    a++;
    cout << a << endl;
}

int addOneRet(int a) {
    cout << "INSIDE addOneRet(int)\n";
    cout << a << endl;
    a++;
    cout << a << endl;
    return a;
}

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

int main() {
    srand(0);
    cout << "Pointers and references\n";
    int aa = 10;
    cout << "Initial value of aa: " << aa << endl;
    addOneRet(aa);
    cout << "Updated value of aa: " << aa << endl;

    int* ptrInt;
    cout << "Value of ptrInt: " << ptrInt << endl;
    cout << "Address of aa:" << &aa << endl;
    ptrInt = &aa;
    cout << "Value of ptrInt: " << ptrInt << endl;
    cout << "Value at the address ptrInt: " << *ptrInt << endl;
    
    cout << "Initial value of aa: " << aa << endl;
    addOneRef(aa);
    cout << "Updated value of aa: " << aa << endl;

    cout << "Dynamic arrays" << endl;
    char* word = new char[5];
    string wordStr = "hello";
    int i = 0;
    for (char c: wordStr) {
        word[i] = c;
        i++;
    }
    cout << word << endl;
    cout << "Another way to print" << endl;
    cout << &word << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(word + i);
    }
    cout << endl;

    int valInt = 253;
    int* ptrValInt = &valInt;
    cout << "Size of valInt: " << sizeof(valInt) << endl;
    cout << "Size of ptrValInt: " << sizeof(ptrValInt) << endl;
    long long valLL = 253;
    long long *ptrValLL = &valLL;
    cout << "Size of valLL: " << sizeof(valLL) << endl;
    cout << "Size of ptrValLL: " << sizeof(ptrValLL) << endl;

    delete [] word;

    cout << "Exceptions" << endl;
    try {
        sayHello("Charlie");
        // sayHello("Diana");
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

    ifstream fileIn;
    fileIn.open("pointers.hpp");

    if (fileIn.fail()) {
        cout << "No such file";
        exit(1);
    }
    string line;
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;
    }

    fileIn.close();

    return 0;
}
