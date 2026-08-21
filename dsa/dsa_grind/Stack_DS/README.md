### Stack -- Data structure

It follows LIFO -- Last In First Out
It is a collection of elements which follows LIFO


Some applications :-

Car are parked in a dead-end lane , they have to be removed from last (ie. LIFO)
Can of balls , inserted from top so should be removed from top (ie. LIFO)

2 types :- 
1. Recursive stack -- this is automatically created by functin due to recursion calls internally
2. Iterative stack -- sometimes when converting code from recursive or should be written in iterative we will need stack which we will have to create based on our requirement


ADT of Stack

ADT will contain data representation and operations on stack

Data :- 
1. Space for storing element
2. Top ptr.

Operations :- 
1. push(x)
2. pop()
3. peek(index) --> looking at ith index from top
4. stacktop() --> accessing element at top
5. isEmpty()
6. isFull()



Stack can be implemnted using 
1. Array 
2. Linked List


Applications of stack :-

1. Parenthesis matching :- We have to check whether balanced or not

Eg:- ((a+b)*(c-d))






## Infix to postfix conversion 

Infix notation : Operand operator Operand 
ie. a + b

Prefix notation : Operator Operand Operand 
ie. + ab

Postfix notation : Operand Operand Operator  
ie. ab +


Symbol      Precedence
+,-         1
*,/         2
()          3 



1. What is postfix ??
2. Why postfix ??
3. Precedence 
4. Manual conversion