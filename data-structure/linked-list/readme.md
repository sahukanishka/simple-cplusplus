# LinkedList 
A linked list is a linear data structure where elements, called nodes, are connected using pointers. Each node typically contains two parts:

**Data**: The actual value or content of the node. 

**Next**: A pointer/reference to the next node in the sequence.

Unlike arrays, the elements in a linked list are not stored in contiguous memory locations. Instead, each node points to the next, creating a chain-like structure.

### Types of Linked Lists:

#### Singly Linked List:

Each node has a reference to the next node.
Traversal is one-directional (from the head to the tail).

```
Head -> Node1 -> Node2 -> Node3 -> NULL
```

#### Doubly Linked List:

Each node has references to both the previous and the next node.
Traversal is bidirectional.

```
NULL <- Node1 <-> Node2 <-> Node3 -> NULL
```

#### Circular Linked List:

The last node points back to the first node.
Can be singly or doubly linked.


```
Node1 -> Node2 -> Node3 -> Node1
```

#### Key Operations:

1. Insertion: Adding a new node at the beginning, end, or a specific position in the list.
2. Deletion: Removing a node from the beginning, end, or a specific position.
3. Traversal: Visiting each node in the list, typically to process its data.
4. Search: Finding a node with a specific value.
   
### Advantages:

Dynamic Size: Can easily grow or shrink without needing to allocate or deallocate memory like arrays.
Efficient Insertions/Deletions:
Adding or removing elements is faster compared to arrays, especially in the middle.
### Disadvantages:

Access Time:
Traversal is required to access an element, as there is no direct indexing like in arrays.
Memory Overhead:
Extra memory is needed for storing pointers in each node.