#pragma once

#include <iostream>
#include "clsDynamicArray.h"

template<typename T>
class clsQueueArr{

protected:

    clsDynamicArray<T> _Queue;

public:

    void push(T value) {
        _Queue.insertAtEnd(value);
    }

    void pop() {
        _Queue.deleteFirstItem();
    }
    T front() {
        return _Queue.getItemByIndex(0);
    }

    T back() {
        return _Queue.getItemByIndex(_Queue.size() - 1);
    }

    int size() {
        return _Queue.size();
    }

    void reverse() {
        _Queue.reverse();
    }

    bool empty() {
        return (_Queue.size() == 0);
    }

    void clear() {
        _Queue.clear();
    }

    void print() {
        _Queue.print();
    }

};