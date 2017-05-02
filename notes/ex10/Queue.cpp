#include "Queue.h"

Queue::Queue(): head(NULL), tail(NULL), nodes(0) { }

Queue::~Queue() {
    delete head;
}

void Queue::add(int value) {
    Node* newNode = new Node(value);
    if (tail) {
        tail->setNext(newNode);
    }
    if (!head) {
        head = newNode;
    }
    tail = newNode;
    nodes++;
}

int Queue::remove() {
    if (nodes == 0) {
        throw EmptyQueueException("ERROR: The queue is empty");
    }
    int result = head->getData();
    Node* target = head;
    head = head->getNext();
    target->setNext(NULL);
    nodes--;
    delete target;

    return result;
}

bool Queue::isEmpty() const {
    return nodes == 0;
}

int Queue::size() const {
    return nodes;
}

ostream& operator<<(ostream& os, const Queue& q) {
    Node* current = q.head;
    while (current != NULL) {
        os << *current << ' ';
        current = current->getNext();
    }
    return os;
}
