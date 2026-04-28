#pragma once

#include <iostream>

template<typename T>
class clsDynamicArray {

protected:

    int _Size = 0;

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
            originalArr = new T[newSize];
            return;
        }

        if (newSize > _Size) {
            _Size = newSize;
            return;
        }
        else {

            T* tempArr = new T[newSize];
            
            for (int currentIndex = 0; currentIndex < newSize; currentIndex++) {
                tempArr[currentIndex] = originalArr[currentIndex];
            }
            delete[] originalArr;
            originalArr = tempArr;
            delete[] tempArr;
            _Size = newSize;
            return;
        }
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