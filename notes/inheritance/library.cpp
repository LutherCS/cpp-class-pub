#include "library.hpp"

LibraryItem::LibraryItem(string barCode, string dueDate) {
  this->barCode = barCode;
  this->dueDate = dueDate;
}

ostream &operator<<(ostream &os, const LibraryItem &li) {
  os << "Item #" << li.barCode << " is due on " << li.dueDate;
  return os;
}

Book::Book(string barCode, string dueDate, string title, int pages_)
    : LibraryItem(barCode, dueDate) {
  this->title = title;
  this->pages = pages_;
}

Cable::Cable(string barCode, string dueDate, int length_)
    : LibraryItem(barCode, dueDate), length(length_) {}

PowerCable::PowerCable(string barCode, string dueDate, int wattage)
    : Cable(barCode, dueDate, 0) {
  this->wattage = wattage;
}

DataCable::DataCable(string barCode, string dueDate, int bandwidth)
    : Cable(barCode, dueDate, 0) {
  this->bandwith = bandwidth;
}

ostream &operator<<(ostream &os, const DataCable &dt) {
  os << "Data cable has bandwidth of " << dt.bandwith;
  return os;
}

int main() {
  vector<LibraryItem*> library;
  // LibraryItem *li = new LibraryItem("1", "2022-03-08");
  Book *aBook = new Book("1", "2022-03-08", "Learn C++", 100);
  cout << *aBook << endl;
  library.push_back(aBook);

  DataCable *aCable = new DataCable("2", "2022-04-01", 200);
  library.push_back(aCable);

  PowerCable *pCable = new PowerCable("3", "2022-04-01", 5);
  library.push_back(pCable);


  cout << "My library" << endl;
  for (auto item : library) {
    item->print();
    // (*item).print();
    cout << item->getDueDate() << endl;
    // cout << item << endl;
  }

  return 0;
}