#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

template<typename T>
class clsMyQueue{

protected:
    clsDblLinkedList<T> _MyQueue;

public:

    int size() {
        return _MyQueue.getSize();;
    }

    T front() {
        return _MyQueue.getHead();
    }

    T back() {
        return _MyQueue.getTail();
    }

    bool pop() {
        return _MyQueue.deleteFirstNode();
    }

    bool push(T item) {
        return _MyQueue.insertAtEnd(item);
    }

    T getItem(int index) {
        return _MyQueue.getNodeValue(index);
    }

    bool reverse() {
        return _MyQueue.reverse();
    }

    bool updateItem(T val ,T item) {
        return _MyQueue.updateNodeValue(val, item);
    }

    bool insertAfter(int index, T item) {
        return _MyQueue.insertAfterByIndex(index, item);
    }

    bool insertAtFront(T item) {
        return _MyQueue.insertAtBeginning(item);
    }

    bool empty() {
        return _MyQueue.isEmpty();
    }

    void clear() {
        _MyQueue.deleteFullList();
    }

    void print() {
        _MyQueue.print();
    }

};