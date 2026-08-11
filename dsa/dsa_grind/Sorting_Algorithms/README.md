### Sorting techniques

What does "stable" mean?

A sorting algorithm is stable if:

When two elements have the same sorting value, their original relative order is preserved after sorting.



1. Bubble sort 

Bubble sort will try to push the largest element to end of array 
Each time we ll only iterate upto (n-i) th index since ie. the un-sorted region and left most side becomes sorted region


Eg:- int arr[] = {5,4,3,2,1}

--> 4 3 2 1 5 
--> 3 2 1 4 5
--> 2 1 3 4 5 
--> 1 2 3 4 5


It will always be a non-decreasing curve

Time compelxity : Worst : O(n^2)
                  Best  : O(n)

We can optimise it by flagging when it is not sorted in any loop

This in input dependent --> since it gives different complexity for different types of input

Bubble sort is a stable algorithm



2. Selection sort

Selection sort will try to find min and swap with i th index which starts from 0 so external loop runs or starts from ith number each time


Eg:- int arr[] = {5,4,3,2,1}

--> 1 4 3 2 5 
--> 1 2 3 4 5
--> 1 2 3 4 5
--> 1 2 3 4 5


Always store index or address so final swap after finding min index can be easier 

Time compelxity : Worst : O(n^2)
                  Best  : O(n^2)
                  Avg.  : O(n^2)

Selection sort is not a stable algorithm



3. Insertion sort

Eg:- int arr[] = {5,1,4,2,8}

--> 1 5 4 2 8
--> 1 4 5 2 8
--> 1 4 2 5 8 === 1 2 4 5 8
--> 1 2 4 5 8
--> 1 2 4 5 8

Time compelxity : Worst : O(n^2)
                  Best  : O(n)
                  Avg.  : O(n^2)

Selection sort is a stable algorithm



4. Merge sort


Merge sort it is based on binary partition + merge 2 sorted list (combination of both concepts)
It follows divide and merge

Eg:- int arr[] = {5,1,4,2,8}

We ll have low , high , mid = (low + high) / 2 or low + ((high-low)/2)
Time compelxity : Worst : O(n log(n))
                  Best : O(n log(n))
                  Avg. : O(n log(n))
Space complexity : O(n)

It is input independent
Merge sort is stable algorithm