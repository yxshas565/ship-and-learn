### Arrays

They are used to store elements of same type under one name.
They are contiguos in memory allocation



## Static vs Dynamic array

In C size shoud be defined at comile time
In C++ size can be decided at run time

Size is fixed we cant change in case of static array which will be created in stack

Increase size of array we use re-alloc() or can create new ptr and transfer all elements inside the new array


## 2D arrays

It will be cerated as a single dimension array in stack

## Different index starting pos.

If index starts from 0 : same formuula
If index strats from 1 : same formula change i --> i-1 or n --> n-1

## Array representation by compiler

Eg:- int arr[5] = {3,5,8,4,2};

A --> 3 5 8 4 2

Converting a particular element address or ps to machine code to point it exactly there...

L0 = &arr[0];

Add(arr[3]) = L0 + index_num * total_bytes
            = L0 + 3 * 4;

// If index starts from 0
Add(add[n]) = L0 + n * sizeof(arr[0]);
              base address + index * sizeof(datatype)


// Due to increase in number of operations when indexing starts from 1 so complexity increases so usually in top programming languages it starts from 0


## 2D array representation by compiler

Eg:- int a[3][4];

1. Row-major mapping = They are stored row by row

Stored :- (row 0) a00 a01 a02 a03   (row 2) a10 a11 a12 a13    (row 3) a20 a21 a22 a23

L0 = a[0][0];
Add.(a[1][2]) =  L0 + [col_size + 2] * 2

Add.(a[m][n]) = L0 + (m*col_size + n) * sizeof(datatype)


2. Column-major mapping

Stored :-  (col 0) a00 a10 a20   (col 1) a01 a11 a21    (col 2) a02 a12 a22    (col 3) a03 a13 a23

L0 = a[0][0];
Add.(a[1][2]) = L0 + 2*no_of_rows + 1

Add.(a[m][n]) = L0 + (n*row_size + m) * sizeof(datatype)



C/C++ follows row-major formulas


## Formula's

Row-major = we move from left to right
Add.(a[i][j]) = L0 + (i*col_size + j) * sizeof(datatype)


Row-major = we move from right to left
Add.(a[i][j]) = L0 + (j*row_size + i) * sizeof(datatype)


If index starts from 1

Row-major = we move from left to right
Add.(a[i][j]) = L0 + ((i-1)*col_size + (j-1)) * sizeof(datatype)


Row-major = we move from right to left
Add.(a[i][j]) = L0 + ((j-1)*row_size + (i-1)) * sizeof(datatype)




## Formula's for 4-D arrays

type A[d1][d2][d3][d4];


1. row major formula :- 

add(A[i][j][k][l]) = L0 + [i * (d2*d3*d4) + j * (d3*d4) + k * (d4) + l] * sizeof(datatype)



2. col major formula :- 

add(A[i][j][k][l]) = L0 + [l * (d3*d2*d1) + k * (d2*d1) + j * (d1) + i] * sizeof(datatype)



## Same apporach for n-dimension formula 


type A[d1][d2][d3][d4]......[dn];


1. row major formula :- 

add(A[i][j][k][l]....[n]) = L0 + [i * (d2*d3*d4*d5*....dn) + j * (d3*d4*....dn) + k * (d4*....dn) + l] * sizeof(datatype)

add(arr[][][].....) = L0 + [summation p=1 to n --> ith * product of q=p+1 to n (dq)] * sizeof(datatype)

2. col major formula :- 

add(A[i][j][k][l]) = L0 + [l * (d3*d2*d1) + k * (d2*d1) + j * (d1) + i] * sizeof(datatype)


Time complexity : O(n^2) --> since total 4 multiplications for 4D --> n(n-1) / 2


We can reduce multiplications by taking common
Horner's rule --> taking common and reducing multiplication
add(A[i][j][k][l]) = L0 + [l + d4 * (k + d3 * ( j + d2 * i ))] * sizeof(datatype)


4D --> 3
nD --> n-1

O(n)


Row major :- left to right
Col major :- right to left




Eg:- A[1...10] [1....15]

L0 = 100;

row-major formula :- for 0-indexing
A[i][j] = 100 + (i * 15 + j) * 4
        = 100 + 60i + 4j
        = 25 + 15i + j
        = 15i + j + 25


row-major formula :- for 1-indexing
A[i][j] = 100 + (i-1 * 15 + j-1) * 4
        = 100 + (15i - 15 + j - 1) * 4
        = 100 + (15i + j - 16) * 4
        = 100 + 60i + 4j - 64
        = 36 + 60i + 4j
        = 15i + j + 9





## Array as ADT  

ADT --> representation of data and set of operations on data 
Array is a data strcuture provided by almost every programming languages

Inverse of power = log


Operations :-
1. display()
2. add(x), append(x)
3. insert(index,x)
4. delete(x)
5. search(x)
6. get(index)
7. set(index,x)
8. max()/min()
9. reverse()
10. shift(), rotate()



## Binary search analysis

Avg. case : 1 + 1 * 2 + 2 * 4 + 3 * 8 + ......
            1 + 1 * 2^1 + 2 * 2^2 + ....
            summation i=1 to n i * 2 ^ i

            O(log n) --> which is also height of a tree

Best case : O(1)
Worst case : O(log (n))
Avg. case : O(log (n))

E is approx. n log(n)

Avg case. for successful search : 1 + I / n = approx. log(n)
Avg case. for un-successful search : E / n+1 = nlog(n)/n+1 apporox. log(n)

External nodes in tree = Total internal nodes + 2 * no.of nodes
no.of external nodes = no.of internal nodes + 1
