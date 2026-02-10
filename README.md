Linked List Library
A comprehensive C++ template library providing various linked list structures. This library is designed with a focus on ease of use and includes an "Optimized Search" feature in specific implementations to improve performance based on temporal locality.

#Features
Template Support: Works with any data type (int, std::string, custom objects, etc.).

Current Pointer Tracking: Every list maintains a _Current pointer, allowing you to track a specific "active" node.

Temporal Locality Optimization: Search operations in Singly and Doubly lists start from the _Current node, potentially reducing search time for recently accessed data.

Safety: Uses std::optional for "get" methods to safely handle empty list scenarios without crashing.

Memory Management: Full destructor support to prevent memory leaks by cleaning up all nodes on object destruction.

#Included Classes
1. singlyList
A standard unidirectional linked list.

Key Operations: insertAtTheBeginning, insertAtTheEnd, insertAfter, deleteNode, setAsCurrent.

Best for: Simple stacks or queues where memory overhead must be kept to a minimum.

2. doublyList
A bidirectional linked list where each node points to both the next and previous nodes.

Key Operations: printListFromHeadToTail, printListFromTailToHead, insertAtBeginning, insertAtEnd.

Best for: Scenarios requiring frequent reverse traversal or deletions where you only have a pointer to the node itself.

3. CircularSinglyList
A unidirectional list where the last node points back to the first node.

Key Operations: insertAtTheBeginningOrEnd, deleteFirstOrLastNode.

Best for: Round-robin scheduling or applications that need to cycle through items indefinitely.

4. CircularDoublyList
A bidirectional list where the head and tail are linked.

Key Operations: Bidirectional circular traversal.

Best for: Advanced buffer management or navigation systems (e.g., cycling through open windows/tabs in both directions).