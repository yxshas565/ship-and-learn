### DSA Entire concepts 


## Section -- 1

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


## In leetcode problems

Based on constraints we can determine which complexity :- 

Input Size (n)	Expected Complexity
n ≤ 10	Anything works
n ≤ 100	O(n³) is usually okay
n ≤ 1,000	O(n²) is usually okay
n ≤ 10,000	O(n log n) or O(n)
n ≤ 100,000 (10⁵)	O(n log n) or O(n)
n ≤ 1,000,000 (10⁶)	O(n) only


## Section -- 2

# Arrays

1. Fixed size of elements ie. only same type elements can be stored
2. Indexing is 0 based in C++
3. It is stored in contiguos manner
4. Accessing takes O(1)

Usuallly major programming lnaguages used 0 based indexing :- Python, Java, C++, C ....
"1" based indexing : Lua , Matlab , R , Fortran


# Vectors 

1. Dynmaic size used instead of array when required 
2. Part of C++ STL library
3. Random access O(1)
4. Insertion/Deletion at end is O(1)


# Strings 

1. It is part of STL
2. It is dynamic , mutuable , easy to use
3. There are some built-in functions for this also same as vectors




# Two Pointers

**Purpose:** Reduce time complexity (often from **O(n²)** → **O(n)** or **O(n + m)**) by traversing with two indices instead of nested loops.

---

## Common Patterns

### 1. Opposite Ends (Left & Right)
- Start one pointer at the beginning and one at the end.
- Compare or process elements from both ends.

**Used for:**
- Valid Palindrome
- Reverse Array/String
- Two Sum II (Sorted Array)
- Container With Most Water

---

### 2. Same Direction (Slow & Fast)

- Both pointers start at the beginning.
- Fast pointer scans every element.
- Slow pointer only moves when required.

**Used for:**
- Remove Duplicates from Sorted Array
- Move Zeroes
- Remove Element
- Linked List Cycle Detection
- Middle of Linked List

---

### 3. One Pointer per Sorted Array

- One pointer traverses each sorted array.
- Compare both current elements and move accordingly.

**Used for:**
- Merge Two Sorted Arrays
- Union of Arrays
- Intersection of Arrays
- Comparing Two Sorted Arrays

---

## When to Think of Two Pointers

- ✅ Array/String is **sorted**
- ✅ Need to find a **pair** of elements
- ✅ Comparing **leftmost and rightmost** elements
- ✅ Working with **two sorted arrays**
- ✅ Solving **subarray/substring (Sliding Window)** problems
- ✅ Need to avoid nested loops for better efficiency

> **Rule of Thumb:** If you can solve a problem by moving two indices instead of using two nested loops, consider the Two Pointers technique.

---

# Move Zeroes (Two Pointers)

**Goal:** Move all `0`s to the end while maintaining the relative order of non-zero elements.

---

## Idea

- Use **Slow (`i`)** and **Fast (`j`)** pointers.
- `j` scans every element.
- `i` points to the next position where a non-zero element should be placed.
- Whenever `nums[j] != 0`, swap `nums[i]` and `nums[j]`, then increment `i`.

---

## Algorithm

1. Initialize `i = 0`.
2. Traverse array with `j`.
3. If `nums[j] != 0`
   - Swap `nums[i]` and `nums[j]`
   - Increment `i`
4. Continue until end.

---

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## Pattern

**Same Direction (Slow & Fast)**

- Slow → Position to place next non-zero.
- Fast → Scans every element.

---

# Best Time to Buy and Sell Stock II (Greedy)

**Goal:** Maximize profit by buying and selling multiple times.

---

## Observation

Instead of finding every valley and peak separately,

**Add every positive increase.**

Example:

```
1 5 3 6

Profit

1 → 5 = +4

3 → 6 = +3

Total = 7
```

Notice,

```
1 → 3 → 5

(3-1)+(5-3)

=

5-1
```

Both produce the same answer.

So every positive increase contributes to the final profit.

---

## Algorithm

1. Initialize `profit = 0`.
2. Traverse from index `1`.
3. If

```
prices[i] > prices[i-1]
```

add

```
prices[i]-prices[i-1]
```

to profit.
4. Return total profit.

---

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## Pattern

Greedy

(Equivalent to buying at every local minimum and selling at every local maximum.)

---

# Pivot Index (Prefix Sum)

**Goal:** Find an index where

```
Left Sum == Right Sum
```

The pivot element itself is **not included** in either sum.

---

## Brute Force

For every index,

- Calculate left sum.
- Calculate right sum.
- Compare.

---

### Complexity

- **Time:** `O(n²)`
- **Space:** `O(1)`

---

## Optimized Idea (Prefix Sum)

Instead of recalculating every time,

Maintain

- Total Sum
- Running Left Sum

Right Sum can be calculated as

```
Right Sum = Total Sum - Left Sum - nums[i]
```

If

```
Left Sum == Right Sum
```

return the index.

Otherwise,

```
Left Sum += nums[i]
```

and continue.

---

## Algorithm

1. Compute total sum.
2. Initialize

```
leftSum = 0
```

3. Traverse every index.
4. Compute

```
rightSum = totalSum - leftSum - nums[i]
```

5. If

```
leftSum == rightSum
```

return index.
6. Update

```
leftSum += nums[i]
```

7. If none found, return `-1`.

---

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## Pattern

Prefix Sum

---

# Valid Palindrome

**Goal:** Determine whether a string is a palindrome after:

- Ignoring spaces.
- Ignoring punctuation/special characters.
- Ignoring case.

---

## Observation

Only letters and digits matter.

```
"A man, a plan, a canal: Panama"
```

becomes

```
amanaplanacanalpanama
```

which is a palindrome.

---

## Approach 1

- Convert to lowercase.
- Remove all non-alphanumeric characters.
- Reverse the string.
- Compare original cleaned string with reversed string.

---

### Complexity

- **Time:** `O(n)`
- **Space:** `O(n)`

---

## Better Approach (Two Pointers)

Use

```
left = 0
right = n-1
```

While

```
left < right
```

- Skip non-alphanumeric characters.
- Skip non-alphanumeric characters from right.
- Compare lowercase characters.
- If unequal → return false.
- Move both pointers inward.

If loop finishes,

return true.

---

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## Pattern

Opposite End Two Pointers

---

# Quick Revision Table

| Problem | Pattern | Time | Space |
|---------|---------|------|-------|
| Move Zeroes | Slow & Fast Two Pointers | O(n) | O(1) |
| Best Time to Buy & Sell Stock II | Greedy | O(n) | O(1) |
| Pivot Index | Prefix Sum | O(n) | O(1) |
| Valid Palindrome | Opposite Two Pointers | O(n) | O(1) |

---

# Common Interview Clues

### Think **Two Pointers** when:
- Sorted array
- Pair problems
- Reverse string/array
- Palindrome
- Merge two arrays
- Remove duplicates
- Move elements in-place

### Think **Greedy** when:
- Local optimum leads to global optimum.
- Need maximum/minimum value.
- Choices are irreversible.
- Every small optimal decision contributes to final answer.

### Think **Prefix Sum** when:
- Multiple range sum queries.
- Left sum / Right sum.
- Running cumulative sum.
- Subarray sum problems.
- Need to avoid repeated summation.