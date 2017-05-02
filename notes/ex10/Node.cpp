#include "Node.h"

Node::Node(int newData): data(newData), next(NULL) { }

Node::Node(int newData, Node* nextNode): data(newData), next(nextNode) { }

Node::~Node() {
    if (next) {
        delete next;
    }
}

int Node::getData() const {
    return data;
}

Node* Node::getNext() const {
    return next;
}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}

ostream& operator<<(ostream& os, const Node& n) {
    os << n.data;
    return os;
}
