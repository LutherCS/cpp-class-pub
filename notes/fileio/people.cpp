#include "fileio.hpp"

int main() {
  string filename = "people.txt";
  ifstream infile(filename.c_str());
  char sep = ',';
  while (!infile.eof()) {
    string line;
    string name;
    string dept;
    string salaryStr;
    long salary;
    long rate;
    double hours;
    getline(infile, line, '\n');

    int commas = count(line.begin(), line.end(), sep);
    cout << commas << endl;

    if (commas == 2) {
      istringstream lineStream(line);
      getline(lineStream, name, sep);
      getline(lineStream, dept, sep);
      getline(lineStream, salaryStr);
      cout << name << " from " << dept << " earns $" << stoi(salaryStr)
                  << endl;
    }
  }
  cout << "Done" << endl;
}