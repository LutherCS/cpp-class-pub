#include "exercise10.h"
#include "Node.h"
#include "EmptyQueueException.h"

#ifndef QUEUE_H
#define QUEUE_H


class Queue {
    private:
        Node* head;
        Node* tail;
        int nodes;
    public:
        Queue();
        ~Queue();

        void add(int newData);
        int remove();
        bool isEmpty() const;
        int size() const;

        friend ostream& operator<<(ostream&, const Queue&);
};

#endif
