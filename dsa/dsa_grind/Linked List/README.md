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