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


# Tail recursion

Recursive function where recursive call is the last func. then it is called tail recursion
Everythng is performed in calling phase itself

In case of tail recursion loop is more effecient since it takes less space in terms of complexity



# Head recursion

Recursive function is called at first itself inside the conditional or terminating case
It is not as easy as tail recursion to convert in form of loops


# Linear recursion
Recursive func is called only once

fun(n){
    if(){
        ...
        ....
        fun(n-1);
        ....
        ...
    }
}

# Tree recursion

Recursive function is called more than once 

fun(n){
    if(){
        ...
        ....
        fun(n-1);
        ....
        fun(n-1);
        ...
    }
}



# Indirect recursion

There may be more than 1 recursive calls but in a circular fashion. One func calling other and so on...

void funcA(int n){
    if(){
        {
            ....
            B(n-1);
            ....
        }
    }
}

void funB(int n){
    if(){
        ...
        ...
        ...
        A(n-3);
    }
}



# Nested recursion

In nested recursion , recursive function will pass as a parameter to one more function

void func(int n){
    if(){
        ...
        fun(fun(n-1));
        ...
    }
}



## Pascal triangle 

                                Pascal's Triangle

                                         1
                                      1     1
                                   1     2     1
                                1     3     3     1
                             1     4     6     4     1
                          1     5    10    10     5     1
                       1     6    15    20    15     6     1
                    1     7    21    35    35    21     7     1
                 1     8    28    56    70    56    28     8     1
              1     9    36    84   126   126    84    36     9     1
          1    10    45   120   210   252   210   120    45    10     1