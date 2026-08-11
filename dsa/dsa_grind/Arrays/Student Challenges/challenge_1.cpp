// Finding missing elemennts in an array

// 1. Single missing element in sorted array 
// 2. Multiple missing element in sorted array 
// 3. Missing elements in un-sorted array


# include <bits/stdc++.h>
using namespace std;

// This is specific for first 'n' natural numbers
// Time compelxity : O(n)
// Space complexity : O(1)
int missing_number(int arr[], int size){
    int total_sum = (arr[size-1]*(arr[size-1] + 1)) / 2;
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }

    return total_sum - sum;
}

// Time compelxity : O(n)
// Space complexity : O(1)
int missing_number_any_array(int arr[], int size){
    int low = arr[0];
    int diff = arr[0] - 0;

    for(int i=1; i<size; i++){
        if(arr[i] - i != diff){
            // return arr[i] - 1; // return i + 6
            return i+diff;
        }
    }
}

// Time compelxity : O(n + k)
// Space complexity : O(1)
void multiple_missing_element(int arr[], int size){
    int low = arr[0];
    int diff = arr[0] - 0;
    for(int i=0; i<size; i++){
        if(arr[i] - i != diff){
            int actual_diff = arr[i] - i;
            for(int j=actual_diff - diff - 1; j>=0; j--){
                cout << arr[i] - j - 1 << " ";
            }
            diff = actual_diff;
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9,10,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Missing number : " << missing_number(arr,size) << endl;

    int arr1[] = {6,7,8,9,10,11,12,13,14,16,17};
    int size_1 = sizeof(arr1)/sizeof(arr1[0]);

    cout << "Missing number (Any array) : " << missing_number_any_array(arr1,size_1) << endl;

    int arr2[] = {6,7,8,9,11,12,15,16,17,18,23};
    int size_2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Multiple Missing number (Any array) : ";
    multiple_missing_element(arr2,size_2);
    cout << endl;

    return 0;
}