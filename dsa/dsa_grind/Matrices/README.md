### Matrices

int row_size = sizeof(arr)/sizeof(arr[0]);
int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

type A[d1][d2][d3][d4];


1. row major formula :- 
add(A[i][j][k][l]) = L0 + [i * (d2*d3*d4) + j * (d3*d4) + k * (d4) + l] * sizeof(datatype)

2. col major formula :- 
add(A[i][j][k][l]) = L0 + [l * (d3*d2*d1) + k * (d2*d1) + j * (d1) + i] * sizeof(datatype)


Types :- 

1. Diagnol matrix

All elements are 0 other than diagnol elements 
ie. if(i == j) a[i] != 0



2. Lower triangular matrix

All elements on lower triangular part is non-zero and upper triangular part os zero

if(j > i) a[i][j] = 0
Row-wise 
To access index of arr[i][j] = (j(j+1)/2) + (j-1) or (i(i-1)/2) + (j-1)

Col-wise
To access index of arr[i][j] = [n + n-1 + n-2 +.....+ n-(j-2)] + (i-j) --> simplifing it
                             = [n(j-1) - ((j-2)(j-1))/ 2] + (i-j)



3. Upper triangular matrix

All elements on upper triangular part is non-zero and lower triangular part is zero

if(j < i) a[i][j] = 0
Row-wise 
To access index of arr[i][j] = [(i-1)*n - [((i-2)(i-1))/2]] + (j-i)

Col-wise
To access index of arr[i][j] = (i(i+1)/2) + (i-1) or (j(j-1)/2) + (i-1)



--> Both upper and lower triangular formulas are just swap 'i' with 'j' and 'j' with 'i' and row -> col and vice versa



4. Symmteric matrix

All elements in arr[i][j] = arr[j][i]
We need to store only 1 half of matrix ie. either lower triangular or upper triangular matrix since we can access the other half by swapping i and j since they r symmetric



5. Tridiagnol matrix

Elements are present in diagonal , upper diagonal , lower diagonal
if(i-j is either 0,-1,1) --> elements to be present there else store 0
ie. |i-j| <= 1
size to store => arr[i][j] having m*n dimension ==> n + (n-1) + (n-1) = n + n - 1 + n - 1
                                                ==> 3n - 2
No.of zeros = m*n - (3n-2)

We usually store diagnol by diagnol in any order either upper to lower or vice versa

To access arr[i][j] ==> find (i-j)  if i-j = 1   index = i-1
                                    if i-j = 0   index = n-1 + i-1
                                    if i-j = -1   index = 2n-1 + i-1


6. Square Band matrix = same as tridiagnol but no.of diagnols above and below main diagnol is usually more than 1 and have same number of diagnols above and below and rest elements are 0




7. Toeplitz matrix
Elements in a all diagnol are same
So M[i,j] = M[i-1,j-1]

we need to store the first row of elements and column of elements strats from index 1 dont include the first if included in row
Total elements = n + (n-1) = 2n-1
First store row and then column

for any idex arr[i][j] ==> if i <= j --> index = j - i
                           if j > i  --> index = n + (i-j) - 1



8. Sparse matrix :- Matrix where there are more no.of zero elements not mandatorly a square matrix

2 methods to store non-zero elements :- 

1. coordinate list / 3-column representation

For every non-zero elemnt we need 3 things :- 
1. row number
2. col number
3. value of number

we can have a list of tuples 
or in table form 
--> first row is stored with row size , col size , no.of non-zero elements

Eg:- 8 * 9

0 0 0 0 0 0 0 3 0
0 0 8 0 0 10 0 0 0
0 0 0 0 0 0 0 0 0
4 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 2 0 0 0 0 0 0
0 0 0 6 0 0 0 0 0 
0 9 0 0 5 0 0 0 0



row | col | element
8       9       8
1       8       3
2       3       8
2       6       10
4       1       4
6       3       2
7       4       6
8       2       9
8       5       5




2. compressed sparse row


--> it is represented using three arrays (memory is reduced) --> list is of size m (ie. no.of non-zero number + 1)

first array list of non-zero elements
A[3,8,10,4,2,6,9,5]

second array for rows --> it stores value of cumulative of no.of elements starts from 0th index since mathematically it starts from 1 so
IA[0,1,3,3,4,4,5,6,8]

It is stored as col number element is stored
IJ[8,3,6,1,3,4,2,5]



Adding sparse matrix :- 
ie. we can add if dimension is same in both cases 



Steps:- 

1. first create coordinate lists for arr1 and arr2 
2. create a coordinate list for sum_list having length of each list = non_zero in arr1 + non_zero in arr2

3. take 2 ptr's i and j for list 1 and list 2
--> if row number and col number matches exact copy same thing to sum list but add the value of both and put it in sum list in that particular index and move both ptr's.
--> if row number or col number dosent match which ever is smaller from top to bottom ie. first row and then col comapre , copy the smaller one and move that ptr.



Similarly we can do subtraction also further done through program