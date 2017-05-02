#include "exercise10.h"
#include "Node.h"
#include "EmptyQueueException.h"

#ifndef QUEUE_H
#define QUEUE_H

/* TODO: Task 6: Turn Queue into a template class */
class Queue {
    private:
        /* TODO: Task 7: Make head and tail templated variables */
        Node* head;
        Node* tail;
        int nodes;
    public:
        /* NOTE: The constructor will print data type of items stored in the Queue */
        Queue(): head(NULL), tail(NULL), nodes(0) { cout << "Queue of " << typeid(T).name() << " created" << endl; }
        ~Queue() { delete head; }
        /* TODO: Task 8: Update member function add to use templates */
        void add(int newData) {
            Node* newNode = new Node(newData);
            if (tail) {
                tail->setNext(newNode);
            }
            if (!head) {
                head = newNode;
            }
            tail = newNode;
            nodes++;
        }
        /* TODO: Task 9: Update member function remove add to use templates */
        int remove() {
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

        bool isEmpty() const { return nodes == 0; }
        int size() const { return nodes; }
        /* TODO: Task 10: Implement the operator<< overloading */
        friend ostream& operator<<(/*Parameters are missing*/) {
            Node* current = q.head;
            while (current != NULL) {
                os << *current << ' ';
                current = current->getNext();
            }
            return os;
        }
};

#endif
