// Find a pair with sum k

# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(n^2)
// Space complexity : O(1)
void find_pair(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j] == (target - arr[i])){
                cout << "(" << arr[i] << "," << arr[j] << ")" << " ";
                break;
            }
        }
    }
}

// Time compelxity : O(n)
// Space complexity : O(1)
void hashing_find_pair(int arr[], int size, int target){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int hash_table[max+1] = {};

    for(int i=0; i<size; i++){
        int required = target - arr[i];
        if(hash_table[required] == 1){
            cout << "(" << arr[i] << "," << required << ")" << " ";
        }
        hash_table[arr[i]] += 1;
    }

}

// Time compelxity : O(n)
// Space complexity : O(1)
void sorted_pair_elements(int arr[], int size, int target){
    int i,j;
    i = 0;
    j = size-1;

    while(i < j){
        int total = arr[i] + arr[j];
        if(total == target){
            cout << "(" << arr[i] << "," << arr[j] << ")" << " ";
            i++;
            j--;
        }
        else if(total > target){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int arr[] = {6,3,8,10,16,7,5,2,9,14};
    int size = sizeof(arr)/sizeof(arr[0]);
    find_pair(arr,size,15);
    cout << endl;
    hashing_find_pair(arr,size,15);
    cout << endl;

    int new_arr[] = {1,3,4,5,6,8,9,10,12,14};
    int size_new = sizeof(new_arr)/sizeof(new_arr[0]);

    sorted_pair_elements(new_arr,size_new,9);
    return 0;
}