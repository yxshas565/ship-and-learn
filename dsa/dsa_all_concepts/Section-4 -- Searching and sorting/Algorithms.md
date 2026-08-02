# ============================
# SEARCHING ALGORITHMS
# ============================

------------------------------------------------------------
1. Linear Search
------------------------------------------------------------

Description:
Linear Search checks every element one by one until the target element is found or the array ends.

Works on:
- Sorted Array ✅
- Unsorted Array ✅

Example:

Array:
5 8 2 9 1

Target = 9

Check:
5 ❌
8 ❌
2 ❌
9 ✅

Found at index 3.

Time Complexity:
Best : O(1)
Average : O(n)
Worst : O(n)

Space Complexity:
O(1)

Function:

int linearSearch(vector<int>& arr, int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target)
            return i;
    }
    return -1;
}

------------------------------------------------------------
2. Binary Search
------------------------------------------------------------

Description:
Binary Search repeatedly divides the sorted array into two halves and searches only the required half.

IMPORTANT:
Works ONLY on Sorted Arrays.

Example:

1 3 5 7 9 11 13

Target = 9

Middle = 7

9 > 7

Search Right Half

9 found.

Time Complexity:
Best : O(1)
Average : O(log n)
Worst : O(log n)

Space Complexity:
O(1)

Function:

int binarySearch(vector<int>& arr,int target){

    int low=0;
    int high=arr.size()-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]==target)
            return mid;

        else if(arr[mid]<target)
            low=mid+1;

        else
            high=mid-1;
    }

    return -1;
}

============================================================
SORTING ALGORITHMS
============================================================

------------------------------------------------------------
1. Selection Sort
------------------------------------------------------------

Description:
Find the smallest element and place it at the beginning.
Repeat for the remaining array.

Example:

64 25 12 22 11

↓

11 25 12 22 64

↓

11 12 25 22 64

↓

11 12 22 25 64

↓

11 12 22 25 64

Time Complexity:
Best : O(n²)
Average : O(n²)
Worst : O(n²)

Space Complexity:
O(1)

Function:

void selectionSort(vector<int>& arr){

    int n=arr.size();

    for(int i=0;i<n-1;i++){

        int minIndex=i;

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[minIndex])
                minIndex=j;
        }

        swap(arr[i],arr[minIndex]);
    }
}

------------------------------------------------------------
2. Bubble Sort
------------------------------------------------------------

Description:
Repeatedly compare adjacent elements.
Swap if they are in the wrong order.
Largest element moves to the end after every pass.

Example:

5 4 3 2 1

↓

4 3 2 1 5

↓

3 2 1 4 5

↓

2 1 3 4 5

↓

1 2 3 4 5

Time Complexity:
Best : O(n) (Optimized)
Average : O(n²)
Worst : O(n²)

Space Complexity:
O(1)

Function:

void bubbleSort(vector<int>& arr){

    int n=arr.size();

    for(int i=0;i<n-1;i++){

        bool swapped=false;

        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }

        if(!swapped)
            break;
    }
}

------------------------------------------------------------
3. Insertion Sort
------------------------------------------------------------

Description:
Take one element and insert it into its correct position in the already sorted left part.

Example:

5 2 4 6 1

↓

2 5 4 6 1

↓

2 4 5 6 1

↓

2 4 5 6 1

↓

1 2 4 5 6

Time Complexity:
Best : O(n)
Average : O(n²)
Worst : O(n²)

Space Complexity:
O(1)

Function:

void insertionSort(vector<int>& arr){

    int n=arr.size();

    for(int i=1;i<n;i++){

        int key=arr[i];

        int j=i-1;

        while(j>=0 && arr[j]>key){

            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
}

------------------------------------------------------------
4. Merge Sort
------------------------------------------------------------

Description:
Divide the array into two halves.
Recursively sort both halves.
Merge them into one sorted array.

Example:

8 3 5 4

↓

8 3 | 5 4

↓

8 | 3

5 | 4

↓

3 8

4 5

↓

3 4 5 8

Time Complexity:
Best : O(n log n)
Average : O(n log n)
Worst : O(n log n)

Space Complexity:
O(n)

Function:

void mergeSort(vector<int>& arr,int low,int high);

------------------------------------------------------------
5. Quick Sort
------------------------------------------------------------

Description:
Choose a pivot.
Place all smaller elements on the left.
Place larger elements on the right.
Recursively sort both sides.

Example:

8 3 1 7 0 10 2

Pivot = 2

↓

1 0 2 8 3 7 10

↓

Sort Left

↓

Sort Right

↓

0 1 2 3 7 8 10

Time Complexity:
Best : O(n log n)
Average : O(n log n)
Worst : O(n²)

Space Complexity:
O(log n)

Function:

void quickSort(vector<int>& arr,int low,int high);

------------------------------------------------------------
6. Heap Sort
------------------------------------------------------------

Description:
Convert the array into a Max Heap.
Repeatedly remove the maximum element and place it at the end.

Example:

4 10 3 5 1

↓

Max Heap

↓

10 5 3 4 1

↓

10 fixed at end

↓

Sorted Array

Time Complexity:
Best : O(n log n)
Average : O(n log n)
Worst : O(n log n)

Space Complexity:
O(1)

Function:

void heapSort(vector<int>& arr);

============================================================
SUMMARY
============================================================

Searching

1. Linear Search
2. Binary Search

Sorting

1. Selection Sort
2. Bubble Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Heap Sort

============================================================
INTERVIEW ORDER OF IMPORTANCE
============================================================

★★★★★ Must Know
- Binary Search
- Merge Sort
- Quick Sort

★★★★☆
- Bubble Sort
- Insertion Sort

★★★☆☆
- Selection Sort

★★★★☆
- Heap Sort






Searching Algorithms :-
Algorithm	Best	Average	Worst	Space	Condition
Linear Search	O(1)	O(n)	O(n)	O(1)	Works on sorted & unsorted arrays
Binary Search	O(1)	O(log n)	O(log n)	O(1) (iterative), O(log n) (recursive)	Array must be sorted


Sorting Algorithms :-
Algorithm	                    Best	    Average	    Worst	    Space	    Stable
Selection Sort	                O(n²)	    O(n²)	    O(n²)	    O(1)	    ❌ No
Bubble Sort	O(n) (optimized)	O(n²)	    O(n²)	    O(1)	    O(1)        ✅ Yes
Insertion Sort	                O(n)	    O(n²)	    O(n²)	    O(1)	    ✅ Yes
Merge Sort	                    O(n log n)	O(n log n)	O(n log n)	O(n)	    ✅ Yes
Quick Sort	                    O(n log n)	O(n log n)	O(n²)	    O(log n)	❌ No
Heap Sort	                    O(n log n)	O(n log n)	O(n log n)	O(1)	    ❌ No



By deafault --> sort(arr,arr+n) , vector(arr.begin(),arr.end())


sort()	        Introsort (Quick + Heap + Insertion)	O(n log n)
stable_sort()	Merge Sort	                            O(n log n)
partial_sort()	Heap-based	                            O(n log k)
nth_element()	Quickselect (partition-based)	        Average O(n)
make_heap()	    Heap construction	                    O(n)
push_heap()	    Heap insertion	                        O(log n)
pop_heap()	    Heap deletion	                        O(log n)
sort_heap()	    Heap Sort	                            O(n log n)