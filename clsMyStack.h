#pragma once

#include <iostream>
#include "clsMyQueue.h"

template<typename T>
class clsMyStack{

protected:

    clsMyQueue<T> _MyStack;

public:

    T Top() {
        return _MyStack.front();
    }

    T bottom() {
        return _MyStack.back();
    }

    T size() {
        return _MyStack.size();
    }

    bool pop() {
        return _MyStack.pop();
    }

    bool push(T val) {
        return _MyStack.insertAtFront(val);
    }

    bool empty() {
        return _MyStack.empty();
    }

    void clear() {
       _MyStack.clear();
    }

    void print() {
        _MyStack.print();
    }

};