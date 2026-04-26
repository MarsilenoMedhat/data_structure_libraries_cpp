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
        _MyQueue.getNodeValue(index);
    }

    bool reverse() {
        return _MyQueue.reverse();
    }

    bool updateItem(int index ,T item) {
        return _MyQueue.updateNodeValue(index, item);
    }

    bool insertAfter(int index, T item) {
        return _MyQueue.insertAfterByIndex(index, item);
    }

    bool insertAtFront(T item) {
        return _MyQueue.insertAtBeginning(item);
    }

    void clear() {
        _MyQueue.deleteFullList();
    }

    void print() {
        _MyQueue.print();
    }

};