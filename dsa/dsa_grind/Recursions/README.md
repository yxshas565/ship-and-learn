### Recursions

A function calling itself is called a recursive function
Indise recursive conditon there must be a terminating condition

Type func(parameters){
    if(<base cond.>){
        ....
        ...
        func(parameters);
        ...
        ....
    }
}

We usually trace it by a recursive tree to get final output.


Generalised form :- 

void func(int n){
    if(cond){
        .... calling phase / ascending
        func(n-1);
        .... returning phase / descedning
    }
}

Loops will have only ascending phase or calling phase 
Recursion will have both ascending and descending phase that s why its preferred over loops


void fun1(int n){
    if (n > 0){
        cout << n << " ";
        fun1(n-1);
    }
}


In this function when executed , in stack activation record is been created each time for n-variable whenever it s been called recursively and each activation record is been deleted while returning time.

So that's why die to recursive stack calls space compelxity becomes O(n) due to n+1 calls


Recurence realtion :- 

T(n) = 1             n = 0
       T(n-1) + 1    n > 0

T(n) = T(n-1) + 1
T(n-1) = T(n-2) + 1
T(n) = T(n-2) + 2
....
....
....

T(n) = T(n-k) + k ---- Final eqn.


Assume n-k = 0
T(n) = T(0) + n
T(n) = 1 + n
T(n) = n

So time complexity : O(n)


## Static and global variables

--> When static variable is used it is only been intialised once when function is called for first time 
--> It will be updated each time if incremented or decremented 
--> It will only be called during return time if added or subtracted with function and value be only the final updated value
It is termed like a global variable inside function
Global and static used same variable and only updates each time if any operations performed




## Types of recursions 


1. Tail recursion
2. Head recursion
3. Tree recursion
4. Indirect recursion
5. Nested recursion