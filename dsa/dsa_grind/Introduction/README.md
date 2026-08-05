### Introduction to DSA

1. Data structure = Arrangement or organising of data such that operations can be performed effeciently.
2. Databases = Relational data or  an organised form data stored in form of tables or relational way is called databases.
3. Data warehouses = Very large size data which isn't used often , or historical data is stored in multiple diiferent discs which is further stored in data warehouses usually multiple disks or tapes of data. So for analysing this data we use data-mining algorithm's.
4. Big data = Storing and utilising the data which is present through the world which is currently large is called big data.


--> Without data-structures no operations can be performed
--> Datastructure is inside main memory which is formed during execution time of prg.



HDD Storage contains all of our files  <------>  Main memory <--> CPU

--> When clicked on an icon or application it is intially bought into main-memory and then CPU starts executing that application.....even data also is bought into main memory




## Static vs Dynamic memory allocation


1. Memory is divided into bytes
2. Every byte has an address
3. "0-65535" --> size of main memory is 64KB -- starts from 0 and ends at 65535
4. So if more RAM is there our memory is divided into multiple segments each segment contains 64KB



Progran <--->  Heap  <--> CPU
               Stack
               Code section (prog is bought here as main func.)


All functions and varaibles are created one by one from top to bottom as main function executes instruction and occupies partciular stack frame inside stack or called as activation record.


void main(){
    int a = 5; // --> it uses 4 bytes
    float b = 4.56; // --> it uses 4 bytes

    // so these 8 bytes are allocated inside stack which is called as "stack frame" or "activation record" inside stack.
    // it is static because the number of bytes required since size of how much to be allocated was decided in compile time. 
}


Stack --> It is an organised memory
Heap --> It is an un-organised memory (It can only be accessed using a resource and release when not reqd.)

Prog. cannot access directly inside heap memory we have to access via ptr.



## Physical data-structures
It defined how memory is organised

1. Arrays = It is grp of contguous memory location and size is fixed here , size is static 
Array can be created inside stack or heap using ptr. 

2. Linked-list = It is dynamic data strcuture , it is of variable length and link of nodes connected to one another. If size not known better to use this.


## Logical data-strcutures
The discipline of using physical data strcuture is called logical data strcuture
To implement these logical data-strcutures we either use arrays or linked list

1. Stack -- Linear (LIFO)
2. Queue -- Linear (FIFO)
3. Trees -- Non-linear
4. Graphs -- Non-linear
5. Hash tables -- Tabular



## ADT 
Abstract data type

1. What is ADT ??

Abstarct data-type -- It is representation and operations on data
Arithemetic and relational operations are allowed on ADT

Abstarct means high internal details

Representation of list can be done using array or linked list

Operations :- 
1. add(x)
2. remove(x);
3. search(key)
.....

List is an ADT

Some operations which can be performed on a list :- 
1. add(element) / append(element)
2. add(index,element) / insert(index,ele)
3. remove(index) / pop()
4. set(index,new_ele) / replace(index,ele)
5. get(index)
6. search(key) / contains(key)
7. sort()
8. merge(list1,list2)
9. reverse(list)
...... many more




## Time and Space complexity


# Time complexity 

Time is usually calculated for most occuring operation in that particular code
Order of n : O(something) --> Big O

for (int i=0; i<n; i++){
    ....  // O(n)
}

for(){
    for(){
        .... // O(n^2)
    }
}

for (int i=n; i>1; i/=2){
    ... // O(log n)
}


arr of size-m storing n linkedin list in each m --> O(m + n)
time along a tree -- usually height -- O(log n) or if all elements to be done then -- O(n)



# Space compelxity

int arr[n]; // O(n)
int a = 0; // O(1)
--> in linkedin list // O(2*n)
--> matrices // O(n^2)


Eg 1:- 

int sum(it A[], int n){
    int s,i;
    s = 0;
    for(i=0; i<n; i++){
        sum += A[i]; // O(n)
    }
    return s;
}

// Time complexity : O(n)
// Space complexity : O(1)


Eg 2:-

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

// Time complexity : O(1)
// Space complexity : O(1)


Eg 3:- 

void add(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            c[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Time complexity : O(n^2)
// Space complexity : O(1)


Eg 4:-

fun1(){
    fun2(); // O(n)
}

fun2(){
    for(){
        ..... // O(n)
    }
}