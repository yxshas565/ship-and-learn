// Finding duplicate elements in un-sorted array

# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(n^2)
// Space complexity : O(1)
void duplicate_elements(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        count = 1;
        if(arr[i] != -1){
            for(int j=i+1; j<size; j++){
                if(arr[i] == arr[j]){
                    arr[j] = -1;
                    count += 1;
                }
            }

            cout << "Element " << arr[i] << " has occured " << count << " times" << endl;
        }
    }
}

// Time compelxity : O(n)
// Space complexity : O(1)
void duplicate_hash_table(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }


    int hash_table[max] = {};

    for(int i=0; i<size; i++){
        hash_table[arr[i]-1] ++;
    }

    cout << "Duplicates : " << endl;
    for(int i=0; i<max; i++){
        if(hash_table[i] > 0){
            cout << "Element " << i+1 << " has occured " << hash_table[i] << " times" << endl;
        }   
    }
}

int main(){
    int arr[] = {8,3,6,4,6,5,8,2,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    duplicate_elements(arr,size);
    cout << endl;
    int new_arr[] = {8,3,6,4,6,5,8,2,7};
    duplicate_hash_table(new_arr,size);
    return 0;
}