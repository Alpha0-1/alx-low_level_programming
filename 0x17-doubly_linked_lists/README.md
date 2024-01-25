A doubly linked list is a data structure in which elements, known as nodes, are connected in a linear sequence. Each node in a doubly linked list contains data and two pointers - one pointing to the previous node (previous pointer or backward pointer) and another pointing to the next node (next pointer or forward pointer). Unlike a singly linked list, a doubly linked list allows traversal in both forward and backward directions.

Node Structure:
A node in a doubly linked list typically consists of the following components:

Data: The actual information or value stored in the node.
Previous Pointer: A pointer that points to the previous node in the sequence.
Next Pointer: A pointer that points to the next node in the sequence.
Head and Tail:

Head: The first node in the doubly linked list. It is the starting point for traversing the list in the forward direction.
Tail: The last node in the doubly linked list. It is the starting point for traversing the list in the backward direction.
Advantages:

Bidirectional Traversal: Doubly linked lists support traversal in both forward and backward directions, making it efficient for certain operations.
Insertion and Deletion: Insertion and deletion of nodes at both ends and at any position within the list can be done more efficiently compared to a singly linked list.
Operations:

Traversal: Iterating through the list in either forward or backward direction.
Insertion: Adding a new node at the beginning, end, or at any specified position within the list.
Deletion: Removing a node from the list, whether it's at the beginning, end, or a specified position.
Search: Locating a node with a specific value within the list.
Update: Modifying the data of a node.
