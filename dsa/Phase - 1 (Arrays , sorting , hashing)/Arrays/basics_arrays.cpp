// Array is a data-structure used to store elements of same data type / similar items
// It is of fixed size and has an index using which individual elements can be accessed
// It is by-default pass by reference (C - version)
// It is allocated in a contiguous manner

// We can use both stl version array and C-stype array also so stl type one is not pass by refernce

# include <bits/stdc++.h>
using namespace std;

array<int,5> creation(){
    array<int,5> arr;
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        arr[i] = i*2 + 3 - 8 + 7 ;
    }
    return arr;
}

void print_array(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void linear_search(int arr[], int size, int element){
    for (int i=0; i<size; i++){
        if (arr[i] == element){
            cout << "Element found in index " << i << endl;
            return;
        }
    }
    cout << "Element was not found in array !!" << endl;
}

void binary_search(int arr[], int size, int element){
    int left,right,mid;
    left = 0;
    right = size-1;

    while (left <= right){
        mid = (left + right) / 2;
        if (arr[mid] == element){
            cout << "Element found in index " << mid << endl;
            return;
        }
        else if (arr[mid] > element){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << "Element was not found in array !!" << endl;
}

void reverse_array(int arr[], int size){
    for (int i=0,j=size-i-1; i<size/2,j>size/2; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void swap_alternate(int arr[], int size){
    if (size%2 == 0){
        for (int i=0; i<size; i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    else{
        for (int i=0; i<size-1; i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }   
}

void unique_element();
void duplicate_element();
void intersection_diff_array();
void pair_sum();
void triplet_sum();
void sort_0s_1s();

int main(){
    array <int,5> arr = creation();
    for (int x: arr){
        cout << x << " ";
    }
    cout << endl;


    array <string,5> s = {"Buggati","Ferrari","BMW","Audi","Lamborgini"};
    for (string x : s){
        cout << x << " ";
    }
    cout << endl;


    array <int,100> new_arr = {};
    int i = -24;
    for (int &x : new_arr){
        x = i;
    }
    fill(new_arr.begin(),new_arr.end(),7);
    int size = new_arr.size();
    cout << size << endl;
    for (int x : new_arr){
        cout << x << " ";
    }
    cout << endl;


    int pass_arr[20] = {1,2,3,4,5,6,7,8,9,10};
    int* intial_add = pass_arr;
    cout << intial_add << endl;
    cout << (uintptr_t)intial_add << endl;
    print_array(pass_arr,sizeof(pass_arr)/sizeof(pass_arr[0]));


    cout << endl << endl;

    int check_arr[] = {4,8,1,2,100,56,39,47,200};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i=0; i<sizeof(check_arr)/sizeof(check_arr[0]); i++){
        if (check_arr[i] > max){
            max = check_arr[i];
        }
        if (check_arr[i] < min){
            min = check_arr[i];
        }
    }

    cout << "Min : " << min << " , " << "Max : " << max << endl;

    int arr_linear[] = {1,2,3,4,5,6,7,8,9,10,11};
    linear_search(arr_linear,11,7);
    binary_search(arr_linear,11,7);

    reverse_array(arr_linear,11);
    for (int i=0; i<11; i++){
        cout << arr_linear[i] << " ";
    }
    cout << endl;
    swap_alternate(arr_linear,11);
    for (int i=0; i<11; i++){
        cout << arr_linear[i] << " ";
    }
    return 0;
}