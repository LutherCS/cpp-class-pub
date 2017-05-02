#include "exercise10.h"

#ifndef NODE_H
#define NODE_H

/* TODO: Task 2: Turn Node into a template class */
class Node {
    private:
        /* TODO: Task 3: Make member variable data of type T */
        int data;
        Node* next;
    public:
        /* TODO: Task 4: Make sure data is treated as a variable of type T, not int */
        Node(int newData): data(newData), next(NULL) { }
        Node(int newData, Node* nextNode): data(newData), next(nextNode) { }
        ~Node()  {
            if (next) {
                delete next;
            }
        }

        int getData() const { return data; }
        Node* getNext() const { return next; };
        void setNext(Node* nextNode) { next = nextNode; };
        /* TODO: Task 5: Implement the operator<< overloading */
        friend ostream& operator<<(/* Parameters are missing */) { }
};

#endif
