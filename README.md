# Data Structures Libraries (C++)

Template-based C++ library implementing fundamental data structures from scratch for educational purposes.
Features

Header-only library
Template-based (works with any data type)
No external dependencies
Proper memory management with RAII
Multiple implementations (array-based and linked-list-based)

# Data Structures
## Arrays
### clsDynamicArray<T>

Dynamic resizable array
Index-based access O(1)
Insert, delete, find operations
Reverse functionality

## Linked Lists
### clsSinglyLinkedList<T>

Forward traversal only
Insert at beginning/end/after
Delete by value or position
Reverse functionality

### clsDblLinkedList<T>

Bidirectional traversal
Current node tracking
Insert/delete operations
Reverse functionality

### clsCircularLinkedList<T>

Continuous loop structure
No null termination

## Stacks (LIFO)
### clsStackArr<T>

Array-based implementation
Uses clsDynamicArray internally
Dynamic resizing
Standard operations: push, pop, top

### clsMyStack<T>

Queue-based implementation
Uses clsMyQueue internally (adapter pattern)

## Queues (FIFO)
### clsQueueArr<T>

Array-based implementation
Uses clsDynamicArray internally
Standard operations: push, pop, front, back

### clsMyQueue<T>

Linked-list-based implementation
Uses clsDblLinkedList internally
Additional operations: reverse, insertAfter, updateItem

## Project Structure
data_structure_libraries_cpp/
│
├── clsDynamicArray.h           # Dynamic array implementation
├── clsSinglyLinkedList.h       # Singly linked list
├── clsDblLinkedList.h          # Doubly linked list
├── clsCircularLinkedList.h     # Circular linked list
├── clsStackArr.h               # Array-based stack
├── clsMyStack.h                # Queue-based stack
├── clsQueueArr.h               # Array-based queue
├── clsMyQueue.h                # Linked-list-based queue
└── README.md                   # This file

## Known Limitations

Not thread-safe (no mutex protection)
No STL-style iterators
Basic exception handling (throws std::out_of_range)
No custom copy constructors or move semantics

## Learning Objectives
## This library was built to understand:

Manual memory management with new/delete
Template programming in C++
Data structure algorithms and time complexity
Pointer manipulation and linked structures
Class design and API development

Author
Marsileno
## This project built as a practice project to master C++ and data structures fundamentals.