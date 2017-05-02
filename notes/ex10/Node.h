#include "exercise10.h"

#ifndef NODE_H
#define NODE_H


class Node {
    private:
        int data;
        Node* next;
    public:
        Node(int data);
        Node(int data, Node* nextNode);
        ~Node();

        int getData() const;
        Node* getNext() const;
        void setNext(Node* nextNode);

        friend ostream& operator<<(ostream&, const Node&);
};

#endif
