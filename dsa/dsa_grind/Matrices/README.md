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


6. Band matrix = same as tridiagnol but no of diagnols above and below main diagnol is usually more than 1 and have same number of diagnols above and below and rest elements are 0




7. Toeplitz matrix
8. Sparse matrix



