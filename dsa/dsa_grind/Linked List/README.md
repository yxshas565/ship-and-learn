### Linked List


1. Problems with array ??

Fixed size is the problem due to wastage of memory
Since sized is decided at compile time


2. Difference b/w array and linked list

Array can be created both in stack and heap dynmically
All locations are contiguos
We cant append or remove elements in array 


Linked List all elements are sepratly created and is linked to one another



3. What is Linked List ??

Linked List is a collection of node where each node contains data nd ptr to next node
"head" is a ptr whihc is usually pointing to first node


Circular Linked List

--> We can either use head as "ptr" or even as a "node" ie. empty node to show that it oints to starting point of the linked List


Doubly Linked List

--> List can be accessed bi-directionally


Doubly Circular linked list --> It is similar to singly circular but it s circular for doubly linked list 
Complexity is more effecient in some cases compared to previous singly circular linked list




## Comparison of Linked Lists

| Linked List Type | Space | Insert at First | Insert at Last | Delete at First | Delete at Last | Delete at Any Position | Traversal |
|------------------|-------|-----------------|----------------|-----------------|----------------|-------------------------|-----------|
| Singly Linked List | O(n) | O(1) | O(n) | O(1) | O(n) | O(n) | Forward |
| Circular Singly Linked List | O(n) | O(1) | O(n) | O(1) | O(n) | O(n) | Forward and Circular |
| Doubly Linked List | O(n) | O(1) | O(n) | O(1) | O(n) | O(n) | Forward and Backward |
| Doubly Circular Linked List | O(n) | O(1) | O(1) | O(1) | O(1) | O(n) | Circular Forward and Backward |





## Comparison of array vs linked List

They are 2 physical data structures which is used to create other data structures

# Array
Array can be created in stack or heap
Array size is fixed at compile time
Wastage of space or in-sufficent space for storing elements
It occupies space exactly space for defined data type
It can be accessed randomly
It is a faster access since can be accessed directly
Insertion takes O(1) to O(n) -- It is equally effecient
Shifting of data is required here which is costly
Deletion takes O(1) to O(n) -- again due to shifting it is costly
Both linear and binary search can be performed ie. worst O(log n)
Most sorting techniques is designed for array


# Linked List
Linked List created in heap
Linked list size can be either increased or decreased
Flexible in terms of creating exact size
It used double the space since space required for ptr's also
It is accessed sequentially
It is slower since it is accessed indirectly
Insertions takes O(1) to O(n) -- It is equally effecient
No shifting of data since not expensive as array
Deletion takes O(1) to O(n) -- It is not expensive since no shifting
Only linear search can be performed ie. Worst : O(n) , binary : O(n log(n))
Insertion and merge sort are designed for linked list



--> Both are better based on conditons and requirements