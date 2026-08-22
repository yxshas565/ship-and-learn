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




Eg :- (a + (b * c))


Prefix form :- 
a + *bc
+a*bc

Postfix form :- 
a + bc*
abc*+


--> First parenthize entire expression and then we can convert to prefix and postfix


Eg:- a + b + c * d

Prefix form :- 
a + b + [*cd]
+ ab + [*cd]
++ab*cd


Postfix form :- 
a + b + (cd*)
ab+ + cd*
ab+cd*+


Eg:- (a+b) * (c-d)

Prefix form :- 
(+ab) * (-cd)
*+ab-cd

Postfix form :- 
ab+ * cd-
ab+cd-+



## Associativity and unary operators


Symbol  Pre.    Assoc
+,-     1       L-R
*,/     2       L-R
^       3       R-L
-       4       R-L
()      5       L-R


Eg:- a+b+c-d

(((a+b)+c)-d) -- parenthesised form which compiler will do inside prog. by default
a = b = c = 5 --> (a = (b = (c = 5)))


Eg :- a+b+c-d

(((a+b)+c)-d)
(((ab+)+c)-d)
((ab+c+) - d)
ab+c+d-


Eg:- a^b^c

a^(b^c)
(a^(b^c))
a^(bc^)
abc^^


Eg :- -a (Unary '-')

Prefix : -a
Postfix : a-

Eg:- --a

(-(-a))

Prefix :- --a
Postfix :- -(a-) --> a--

**Unary opeartors :- Associativity is always R-L**


Eg:- -a + b * logn

(((-a) + b) * (log (n!)))

((a-b) + * (n!log))
a-bn!log*+




## Infix to postfix conversion using stack

Rules :- 
1. Push all operators into stack and operands put them in result 
2. If op already exists in stack 
    Check precedence of new operator to be pushed and recent operator which is already there
    if(new_ope > recent_op) --> push new_oper keeping prev
    else if(new_ope == rec_ope) --> pop prev and push new
    else --> pop prev and push new

Eg:- a + b * c - d / e 

Postfix :- 

Operand     Stack       Exp.
a                       a
+           +           a
b           +           ab
*           +*          ab
c           +*          abc
-           -           abc*+
d           -           abc*+d
/           -/          abc*+d
e           -/          abc*+d
end                     abc*+d/-


Method - 2 (We consier pushing operand's also here and take it as highest priority)
We ll get same result only we are not directly using operand directly into final exp.



Postfix :- 

Operand     Stack       Exp.
a           a           
+           +           a
b           +b          a
*           +*          ab
c           +*c         ab
-           -           abc*+
d           -d          abc*+
/           -/          abc*+d
e           -/e         abc*+d
end                     abc*+de/-




Infix to postfix with associativity and parenthesis

Symbol  Precedence(out of stack)   Precedence(in stack)  Associativity
+,-         1                        2                      L-R
*,/         3                        4                      L-R
^           6                        5                      R-L
(           7                        0
)           0                        ?


Eg:- ((a+b) * c) - d ^ e ^ f

1. ([ab+]*c) - d^e^f
2. [ab+c*] - d^e^f
3. [ab+c*] - d^[ef^]
4. [ab+c*] - [def^^]
5. ab+c*def^^-


Operand     Stack       Exp.
(           (   
(           ((
a           ((          a
+           ((+         a
b           ((+         ab
)           (           ab+
*           (*          ab+
c           (*          ab+c
)                       ab+c*
-           -           ab+c*
d           -           ab+c*d
^           -^          ab+c*d
e           -^          ab+c*de
^           -^^         ab+c*de
f           -^^         ab+c*def
end                     ab+c*def^^-





Evaluation of postfix exp.

Eg:- 3 * 5 + 6 / 2 - 4 = 14

[35*] + 6 / 2 - 4
[35*] + [62/] - 4
[35*62/+] - 4
35*62/+4-



Steps :- 

If number or operand push it to stack
If operator pop out 2 operand and perform operation --> first pop in RHS and 2nd pop in LHS and then push result into stack

Finally result will be present in stack

Symbol      Stack       Operation
3           3           
5           3 5  
*           15          3 * 5 = 15
6           15 6
2           15 6 2
/           15 3        6 / 2 = 3
+           18          15 + 3 = 18
4           18 4
-           14          18 - 4 =14
end         print(18)