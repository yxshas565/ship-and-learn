# include <bits/stdc++.h>
using namespace std;


typedef struct{
    int *A;
    int size;
    int length;
}arr;

// Time compelxity : O(n)
// Space complexity : O(n or size)
arr array_creation(arr &arr1){
    // cout << "Enter size of array : ";
    // cin >> arr1.size;
    arr1.size = 10;

    arr1.A = new int[arr1.size];
    arr1.length = 0;

    for (int i=0; i<arr1.size-3; i++){
        arr1.A[i] = i * 5 + 8 - i * 2;
        arr1.length += 1;
    }
}

// Time compelxity : O(n)
// Space complexity : O(1)
void display_array(arr arr1){
    cout << "Array : ";
    for (int i=0; i<arr1.length; i++){
        cout << arr1.A[i] << " ";
    }

    cout << endl << "Size : " << arr1.size << endl;
    cout << "Length : " << arr1.length << endl;
}

// Time compelxity : O(1)
// Space complexity : O(1)
void add(int x, arr &arr1){
    if(arr1.length < arr1.size){
        arr1.A[arr1.length] = x;
        arr1.length += 1;
    }
    else{
        cout << "Array is full !!" << endl;
    }
    return;
}

// Time compelxity : O(n or length)
// Space complexity : O(1)
void insert(int index, int x, arr &arr1){
    if(index < arr1.length && index >= 0 && arr1.length < arr1.size){
        return;
    }
    int i = index;
    for(int i=arr1.length; i>index; i--){
        int temp = arr1.A[i-1];
        arr1.A[i+1] = arr1.A[i];
        arr1.A[i] = temp;
    }
    arr1.A[index] = x;
    arr1.length += 1;
}

// Time compelxity : O(n or length)
// Space complexity : O(1)
void delete_element(int index, arr &arr1){
    if(index > arr1.length || index < 0 && arr1.length > arr1.size){
        return;
    }
    for(int i=index; i<arr1.length; i++){
        arr1.A[i] = arr1.A[i+1];
    }
    arr1.length -= 1;
}

// Time compelxity : O(n)
// Avg case : O(n)
// Space complexity : O(1)
int linear_search(int target, arr arr1){
    for(int i=0; i<arr1.length; i++){
        if(arr1.A[i] == target){
            return i;
        }
    }
    return -1;
}

// Time compelxity : O(n)
// Space complexity : O(n)
int linear_search_recursive(int target, arr arr1, int i){
    if(i >= arr1.length){
        return -1;
    }
    else{
        if(arr1.A[i] == target){
            return i;
        }
        else{
            return linear_search_recursive(target,arr1,i+1);
        }
    }
}
    

int linear_search_optimised(int target, arr &arr1){
    // Transposition --> swap with prev. element if target is found
    // Move to head --> swap with first element if target is found
    for(int i=0; i<arr1.length; i++){
        if(arr1.A[i] == target){
            int temp = arr1.A[0];
            arr1.A[0] = arr1.A[i];
            arr1.A[i] = temp;
            return i;
        }
    }
    return -1;
}

// Time compelxity : O(n log(n) + logn) = O(n log(n))
// Space complexity : O(log n)
// Avg case : O(log n)
int binary_search(int target, arr arr1){
    sort(arr1.A,arr1.A + arr1.length); // --> n log n
    int i,j,mid;
    i = 0;
    j = arr1.length-1;
    mid = (i+j)/2;

    while(i <= j){
        mid = (i+j) / 2;
        if(arr1.A[mid] == target){
            return mid;
        }
        else if(arr1.A[mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }

    return -1;
}

// Time compelxity : O(log n)
// Space complexity : O(log n)
int binary_search_recursive(int target, arr arr1, int low, int high){
    if(low <= high){
        int mid = (low + high) / 2;
        if (arr1.A[mid] == target){
            return mid;
        }
        else if(arr1.A[mid] < target){
            return binary_search_recursive(target,arr1,mid+1,high);
        }
        else{
            return binary_search_recursive(target,arr1,low,mid-1);
        }
    }
    else{
        return -1;
    }
}

// Time compelxity : O(1)
// Space complexity : O(1)
int get(int index, arr arr1){
    if(index < arr1.length){
        return arr1.A[index];
    }
    else{
        cout << "Out of bounds !!" << endl;
    }
}

// Time compelxity : O(1)
// Space complexity : O(1)
int set_ele(int index, int n, arr &arr1){
    arr1.A[index] = n;
}

// Time compelxity : O(n)
// Space complexity : O(1)
int max(arr arr1){
    int max_ele = INT_MIN;
    for(int i=0; i<arr1.length; i++){
        if(arr1.A[i] > max_ele){
            max_ele = arr1.A[i];
        }
    }

    return max_ele;
}

// Time compelxity : O(n)
// Space complexity : O(1)
int min(arr arr1){
    int min_ele = INT_MAX;
    for(int i=0; i<arr1.length; i++){
        if(arr1.A[i] < min_ele){
            min_ele = arr1.A[i];
        }
    }

    return min_ele;
}

// Time compelxity : O(n)
// Space complexity : O(1)
int sum(arr arr1){
    int sum = 0;
    for(int i=0; i<arr1.length; i++){
        sum += arr1.A[i];
    }
    return sum;
}

// Time compelxity : O(n)
// Space complexity : O(n)
int sum_recursive(arr arr1,int i, int sum){
    if(i >= arr1.length){
        return 0;
    }
    sum = arr1.A[i];
    return sum + sum_recursive(arr1,i+1,sum);
}

// Time compelxity : O(n)
// Space complexity : O(1)
int avg(arr arr1){
    int sum = 0;
    for(int i=0; i<arr1.length; i++){
        sum += arr1.A[i];
    }
    return sum/arr1.length;
}


int main(){
    arr arr1;
    array_creation(arr1);
    display_array(arr1);
    cout << endl;


    // add(100,arr1);
    // add(200,arr1);
    // add(300,arr1);
    add(500,arr1);


    insert(0,1000,arr1);
    display_array(arr1);
    cout << endl;


    delete_element(2,arr1);
    display_array(arr1);
    cout << endl;


    cout << linear_search(23 ,arr1) << endl;
    cout << linear_search_optimised(500 ,arr1) << endl;
    display_array(arr1);
    cout << linear_search_recursive(26 ,arr1, 0) << endl;
    cout << endl;
    cout << binary_search(23 ,arr1) << endl;
    sort(arr1.A,arr1.A + arr1.length); // --> n log n
    cout << binary_search_recursive(17 ,arr1, 0, arr1.length-1) << endl;
    cout << endl << endl;

    cout << get(5,arr1);
    set_ele(5,123456,arr1);
    cout << endl;
    display_array(arr1);
    cout << max(arr1) << endl;
    cout << min(arr1) << endl;
    cout << sum(arr1) << endl;
    cout << sum_recursive(arr1,0,0) << endl;
    cout << avg(arr1) << endl;

    return 0;
}