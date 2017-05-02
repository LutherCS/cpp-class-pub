#include "exercise10.h"

#ifndef EMPTYQUEUEEXCEPTION_H
#define EMPTYQUEUEEXCEPTION_H

class EmptyQueueException {
    private:
        string msg;
    public:
        EmptyQueueException(string);

        string getMsg() const;
};

#endif
