#include "exercise10.h"

#ifndef EMPTYQUEUEEXCEPTION_H
#define EMPTYQUEUEEXCEPTION_H

class EmptyQueueException {
    private:
        string msg;
    public:
        EmptyQueueException(string msg) { /*TODO: Task 1: Implement EmptyQueueException constructor */ }

        string getMsg() const { return this->msg; }
};

#endif
