#include "EmptyQueueException.h"

EmptyQueueException::EmptyQueueException(string msg) {
    this->msg = msg;
}

string EmptyQueueException::getMsg() const {
    return this->msg;
}
