#include "exercise10.h"

using namespace std;

template <class T>
class Bubble {
    private:
        T value;
    public:
        Bubble() { }
        Bubble(T newValue): value(newValue) { }
        
        T getValue() { return value; }
        void setValaue(T newValue) { this->value = newValue; }

        friend ostream& operator<<(ostream& os, const Bubble& b) { os << b.value; return os; }
};

template <class P>
void printVector(ostream& os, vector<P> vec) {
    for (P item: vec) {
        os << item << ' ';
    }
    os << endl;
}

int main() {
    cout << setw(60) << left << "Data type" << setw(10) << "Value" << endl;
    Bubble<bool> bBln = Bubble<bool>(true);
    cout << setw(60) << left << typeid(bBln.getValue()).name() << setw(10) << boolalpha << bBln << endl;
    Bubble<short> bShrt = Bubble<short>(253);
    cout << setw(60) << left << typeid(bShrt.getValue()).name() << setw(10) << bShrt << endl;
    Bubble<int> bInt = Bubble<int>(253);
    cout << setw(60) << left << typeid(bInt.getValue()).name() << setw(10) << bInt << endl;
    Bubble<long> bLng = Bubble<long>(253);
    cout << setw(60) << left << typeid(bLng.getValue()).name() << setw(10) << bLng << endl;
    Bubble<float> bFlt = Bubble<float>(2.53);
    cout << setw(60) << left << typeid(bFlt.getValue()).name() << setw(10) << bFlt << endl;
    Bubble<double> bDbl = Bubble<double>(2.53);
    cout << setw(60) << left << typeid(bDbl.getValue()).name() << setw(10) << bDbl << endl;
    Bubble<char> bChr = Bubble<char>('C');
    cout << setw(60) << left << typeid(bChr.getValue()).name() << setw(10) << bChr << endl;
    Bubble<string> bStr = Bubble<string>("CS253");
    cout << setw(60) << left << typeid(bStr.getValue()).name() << setw(10) << bStr << endl;
    cout << "---" << endl;
    cout << "Vectors and templates" << endl;
    cout << "Vector of integers" << endl;
    vector<int> vInt(5);
    printVector(cout, vInt);
    cout << "Vector of doubles" << endl;
    vector<double> vDbl(5);
    printVector(cout, vDbl);
    cout << "Vector of chars" << endl;
    vector<char> vChr(5);
    printVector(cout, vChr);
    cout << "Vector of Bubbles with char values" << endl;
    vector< Bubble<char> > vBblChr(5);
    printVector(cout, vBblChr);
    cout << "Vector of Bubbles with bool values" << endl;
    vector< Bubble<bool> > vBblInt(5);
    printVector(cout, vBblInt);

    return 0;
}
