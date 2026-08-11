// Finding missing elements in unsorted array

# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(n + k)
// Space complexity : O(1)
void missing_elements(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int store_ele[max + 1] = {};
    // Hash-table / Bitset -- simplest form
    for(int i=0; i<size; i++){
        store_ele[arr[i]] += 1;
    }

    cout << "Missing elements : ";
    for(int i=1; i<sizeof(store_ele)/sizeof(store_ele[0]); i++){
        if(store_ele[i] == 0){
            cout << i << " ";
        }
    }
}

int main(){
    int arr[] = {3,7,4,9,12,6,1,11,2,10,20,17,19};
    int size = sizeof(arr)/sizeof(arr[0]);

    missing_elements(arr,size);
    return 0;
}