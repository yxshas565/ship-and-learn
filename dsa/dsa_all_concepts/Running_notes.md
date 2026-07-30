## DSA Entire concepts 

Other than time , what else do we consider immensely valuable ?? 
--> Data 


DSA forms fundamental of CS  --> 
1. Data structures
2. Algorithms


Datastructures = It is used to store and orgnaise data in a way that allows for effecient access and manipulation of the data.

Algorithms = They are the procedures and techniques used to manipulate and process the data in data structures.



Importance of DSA :- 
1. Effeciency 
2. Reusability
3. Problem solving
4. Industry standard


Importance of DSA ??

--> When we have search a name across 800Million database then we use Binary search which uses log complexity

O(log 2 ())  --> instead of linear searh which uses O(n)



Pre-requista :- 
1. Programming lang. :- C++
2. Key concepts required
3. Input and output 
4. STL (Good to know)


# Complexity :- 

1. Time complexity :- It is how execution time of an algorithm grows as the input size increases. It is number of operations of an algorithm performs as a function of input data size.


Asymptotic notation's :- It depends on no.of operations

1. Best case (omega)
2. Avg. case (theta) --> It avg's we can assume it 
3. Worst case (Big O)


Rules :- 

O(Constant number) --> O(1)
O(x + x + x) --> O(x)
O(x^2 + x^5 + x + 1) --> O(x^5) (Max. value)


Types :- 
O(1) >> O(log n) >> O(root(n)) >> O(n) >> O(n log n) >> O(n^2) >> O(n^2 log n) >> O(2 ^ n) >> O(n!) 



2. Space complexity :- It refers to amount of memory an algorthm uses as a function of the input size. It's a meause of how much memory an algorithm requires to execute and solve a problem


i *= 2 or i /= 2 loops → usually O(log n) iterations
T(n) = 2T(...) + work

T(n) --> The total time taken by a function for an input of size "n".
"Current function work + Time taken by recursive call"   -->  In case of recursion


func(n-1)	            T(n)=T(n-1)+1	    O(n)
func(n-1) + loop of n   T(n)=T(n-1)+n       O(n²)
func(n/2)	            T(n)=T(n/2)+1	    O(log n)
func(n-1) twice	        T(n)=2T(n-1)+1	    O(2ⁿ)
Loop + func(n/2)	    T(n)=T(n/2)+n	    O(n)
Permutations	        T(n)=nT(n-1)	    O(n!)
