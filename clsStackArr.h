#pragma once

#include <iostream>
#include "clsDynamicArray.h"

template<typename T>
class clsStackArr {

protected:
    clsDynamicArray<T> _Stack;

public:

    void push(T value) {
        _Stack.insertAtEnd(value);
    }

    void pop() {
        _Stack.deleteLastItem();
    }

    int size() {
        return _Stack.size();
    }

    T top() {
        return _Stack.getItemByIndex(size() - 1);
    }

    bool empty() {
        return (size() == 0);
    }

    void clear() {
        _Stack.clear();
    }

    void print() {
        _Stack.print();
    }

};