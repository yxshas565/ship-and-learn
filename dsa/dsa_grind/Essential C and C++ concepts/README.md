### Programming basics of C and C++


Main memory is divided into 3 main sections :- 
1. Heap
2. Stack
3. main section
4. Code section



## Arrays 

It is a data-strcuture used to store element of same data type under a particular name.

On initialising array will be stored in main function in main memory.
For 2-D array to calculate row and col size w ehave to us ethis formula's

int row_size = sizeof(arr)/sizeof(arr[0]);
int col_size = sizeof(arr[0])/sizeof(arr[0][0]);



## Structures

It is a data structure useed to store dis-similar elements under a particular name like list in python.


It is declared inside the stack frame inside the main function block

int size_struct = sizeof(s_1);
int size_struct_arr = sizeof(student)/sizeof(student[0]);



## Pointers 

They are used to in-directly access data
Thye are variables used to store addresses

ptr* --> it is usually stored in stack inside main memory but points to a variable in heap.
It is used for accessing heaps
It is used for accessing resouces also
It is also used in parameter passing

64-bit system: 8 bytes --> sizeof(ptr)
32-bit system: 4 bytes --> sizeof(ptr)




## Pointers in structs

We cant dynamically use a pointer to store STL of C++ style data structures so better to use "new" keyword and not dynamically use malloc(),calloc,realloc().....  required when C++ or other way is we must use char array instead of strings here




## Functions

--> A function is a piece of code which does a specific task.
--> It is a grp of instructions which perform a specific task.
--> It is used for readability and cleaner code way.
--> Using functions instead of writing everything in main is called modular/procedural programming 
--> C++ also follows OOPS unlike C where function is highest method in programming

--> Pass by value , address can be done in C and C++
--> Pass by refernce applicable only in C++

--> Array is always passed by address

--> When we pass struct into function which is by default pass by value even if it contains array the array inside strcut is forced to become pass by value there even though by default array is pass by address


