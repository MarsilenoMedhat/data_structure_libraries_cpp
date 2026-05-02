#pragma once

#include <iostream>

template<typename T>
class clsDynamicArray {

protected:

    int _Size = 0;

    void _Swap(T& item1, T& item2) {
        T tempItem = item1;
        item1 = item2;
        item2 = tempItem;
    }

public:

    T* originalArr;

    clsDynamicArray(int size = 0) {
        if (size < 0) {
            size = 0;
        }
        _Size = size;
        originalArr = new T[_Size];
    }

    bool setItem(int index, T val) {
        if (index > _Size - 1 || index < 0) {
            return false;
        }
        originalArr[index] = val;
        return true;
    }

    bool isEmpty() {
        return _Size == 0;
    }

    int size() {
        return _Size;
    }

    void resize(int newSize) {
        
        if (newSize == _Size) {
            return;
        }

        if (newSize < 0) {
            newSize = 0;
        }

        if (newSize == 0) {
            delete[] originalArr;
            originalArr == nullptr;
            originalArr = new T[newSize];
            return;
        }

        else {

            T* tempArr = new T[newSize];
            
            for (int currentIndex = 0; currentIndex < newSize; currentIndex++) {
                tempArr[currentIndex] = originalArr[currentIndex];
            }
            delete[] originalArr;
            originalArr = tempArr;
            _Size = newSize;
            return;
        }
    }

    void reverse() {
        int capacity = _Size - 1;
        for (int currentIndex = 0; currentIndex <= capacity / 2; currentIndex++) {
            _Swap(originalArr[currentIndex], originalArr[capacity - currentIndex]);
        }
    }

    T getItemByIndex(int index) {
        if (index > _Size - 1 || index < 0) {
            throw std::out_of_range("Index is out of range.");
        }

        return originalArr[index];
    }

    void clear() {
        delete[] originalArr;
        _Size = 0;
        originalArr = new T[_Size];
    }

    bool deleteItemByIndex(int index) {
        if (index > _Size - 1 || index < 0) {
            return false;
        }

        T* tempArr = new T[_Size - 1];
        int tempArrSize = 0;

        for (int currentIndex = 0; currentIndex < _Size; currentIndex++) {
            if (currentIndex != index) {
                tempArr[tempArrSize] = originalArr[currentIndex];
                tempArrSize++;
            }
        }
        _Size--;
        delete[] originalArr;
        originalArr = tempArr;
        return true;
    }

    bool deleteFirstItem() {
        return deleteItemByIndex(0);
    }

    bool deleteLastItem() {
        return deleteItemByIndex(_Size - 1);
    }

    int find(T value) {
        for (int currentIndex = 0; currentIndex < _Size; currentIndex++) {
            if (originalArr[currentIndex] == value) {
                return currentIndex;
            }
        }
        return -1;
    }

    bool deleteByValue(T value) {
        int index = find(value);

        if (index == -1) {
            return false;
        }
        return deleteItemByIndex(index);
    }

    bool insertAt(int index, T newValue) {
        if (index > _Size || index < 0) {
            return false;
        }

        _Size++;
        T* tempArr = new T[_Size];

        for (int currentIndex = 0; currentIndex < index; currentIndex++) {
            tempArr[currentIndex] = originalArr[currentIndex];
        }

        tempArr[index] = newValue;

        for (int currentIndex = index + 1; currentIndex < _Size; currentIndex++) {
            tempArr[currentIndex] = originalArr[currentIndex - 1];
        }

        delete[] originalArr;
        originalArr = tempArr;
        return true;
    }

    bool insertAtBeginning(T newValue) {
        return insertAt(0, newValue);
    }

    bool insertAtEnd(T newValue) {
        return insertAt(_Size, newValue);
    }

    bool insertAfter(int index, T newValue) {
        return insertAt(index + 1, newValue);
    }

    bool insertBefore(int index, T newValue) {
        return insertAt(index, newValue);
    }

    // print testing function
    void print() {

        if (_Size == 0) {
            std::cout << "No elements in the list.";
        }
        else {
            for (int currentIndex = 0; currentIndex != _Size; currentIndex++) {
                std::cout << originalArr[currentIndex] << " ";
            }
        }
    }

    ~clsDynamicArray() {
        delete[] originalArr;
    }

};