// Finding duplicates in sorted array
// Counting duplicates in sorted array

# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(n)
// Space complexity : O(1)
void duplicates_sorted_array(int arr[], int size){
    int last_duplicate = -1;
    for(int i=0; i<size; i++){
        if(arr[i] == arr[i+1] && arr[i] != last_duplicate){
            cout << arr[i] << " ";
            last_duplicate = arr[i];
        }
    }
    cout << endl;
}

// Time compelxity : O(n + k)
// Space complexity : O(1)
void count_duplicate_array(int arr[], int size){
    int i,j;
    i = 0;
    j = 1;

    while(j<size){
        if(arr[i] == arr[j]){
            while(arr[i] == arr[j]){
                j++;
            }
            cout << arr[i] << " has occured " <<  j-i << " times" << endl;
            i = j;
            j = i+1;
        }
        else{
            i++;
            j++;
        }
    }
}

// Time compelxity : O(size + max)
// Space complexity : O(1)
void find_duplicates_hash_table(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }


    int hash_table[max] = {};

    for(int i=0; i<size; i++){
        hash_table[arr[i]] += 1;
    }

    cout << "Duplicates : " << endl;
    for(int i=1; i<max; i++){
        if(hash_table[i] > 0){
            cout << "Element " << i << " has occured " << hash_table[i] << " times" << endl;
        }   
    }
}

int main(){
    int arr[] = {3,6,8,8,8,8,8,8,10,12,15,15,15,20,20,20,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    duplicates_sorted_array(arr,size);
    count_duplicate_array(arr,size);
    find_duplicates_hash_table(arr,size);
    return 0;
}