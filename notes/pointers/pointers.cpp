#include "pointers.hpp"

void addOne(int a) {
    cout << "INSIDE addOne(int)\n";
    cout << "a: " << a << endl;
    a++;
    cout << "a: " << a << endl;
}

void addOneRef(int &a) {
    cout << "INSIDE addOne(int &)\n";
    cout << "a: " << a << endl;
    a++;
    cout << "a: " << a << endl;
}

int addOneRet(int a) {
    cout << "INSIDE addOneRet(int)\n";
    cout << "a: " << a << endl;
    a++;
    cout << "a: " << a << endl;
    return a;
}

int main() {
    srand(0);
    cout << "Pointers and references\n";
    int aa = 10;
    cout << "\nPassing by value" << endl;
    cout << "Initial value of aa: " << aa << endl;
    addOneRet(aa);  // pass by value
    cout << "Updated value of aa: " << aa << endl;
    
    cout << "\nPassing by value" << endl;
    cout << "Initial value of aa: " << aa << endl;
    addOneRef(aa);  // pass by reference
    cout << "Updated value of aa: " << aa << endl;

    cout << "\nPointers and addresses" << endl;
    int* ptrInt;  // pointer to an integer
    cout << "Value of ptrInt: " << ptrInt << endl;
    cout << "Address of aa:" << &aa << endl;
    ptrInt = &aa;
    cout << "Value of ptrInt: " << ptrInt << endl;
    cout << "Value at the address ptrInt: " << *ptrInt << endl;

    int valInt = 253;
    int* ptrValInt = &valInt;
    cout << "Size of valInt: " << sizeof(valInt) << endl;
    cout << "Size of ptrValInt: " << sizeof(ptrValInt) << endl;
    long long valLL = 253;  // pointer to a long long
    long long *ptrValLL = &valLL;
    cout << "Size of valLL: " << sizeof(valLL) << endl;
    cout << "Size of ptrValLL: " << sizeof(ptrValLL) << endl;
    
    cout << "\nDynamic arrays" << endl;
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

    delete [] word;

    return 0;
}
