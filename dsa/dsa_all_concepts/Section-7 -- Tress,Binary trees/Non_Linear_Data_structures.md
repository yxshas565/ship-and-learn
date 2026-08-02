## Trees and binary trees

A tree is a non-linear hierarchical data structure that consists of nodes connected by edges.

--> start node -- root node
each root node will have childs and further those wioll have more childs...

Node = it is an entity which contains a key or value and pointers to its child nodes
Last nodes of each path are called leaf nodes or external nodes that do not contain link pointers 
A node if it contains at least a child node is called internal node

Edge - link b/w 2 nodes
root = it is topmost node of tree
degree of node - the degree of node is total number of branches of that node or no.of childs

height of tree -- max length.pf tree or longest route
depth of tree -- we usually find for a particular node

tree --> ptr1,ptr2,ptr3.....   data  --> ptr's depend on no.of child's



# Binary tree

It is a tree data structure in which each parent node can have atmost 2 children
It consists of :- 
1. data item
2. add. of left child
3. add. of right child


struct Node{
    int data;
    Node* left_child;
    Node* right_child;
}


Types:- 
1. Full binary tree -- Every node either has 2 children or no children 
2. Perfect binary tree -- Every internal nodes has exactly 2 childs and leaf nodes are at same level
3. Complete binary tree -- It is same as full binary tree but it should be orgnaised level wise from left to right we cant leave nodes or childs in between
4. Degenerate binary -- every node must have exactly 1 child node
left skewed if --> entir eleft placed or similarly right skewed if entirely towards right


pre-order traversal = root , left , right
in-order = left , root , right
post-order = left , right , root
--> for these 3 time is O(n) and space is O(1)

level-order traversal --> time : O(n) space :O(n)


height and depth are inversrly found 
height is found from top
depth is found from bottom

balanced binary tree = diff of left height and right height is either 0 or 1