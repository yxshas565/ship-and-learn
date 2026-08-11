# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(n^2)
// Space complexity : O(1)
void sort_arr(int arr[], int length){
    int min = INT_MAX;
    int index = 0;
    for(int i=0; i<length; i++){
        min = INT_MAX;
        index = i;
        for(int j=i; j<length; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

// Time compelxity : O(n^2) + O(n) = O(n + n^2) = O(n^2)
// Space complexity : O(1)
void insert_sorted_array(int arr[], int &length, int size, int x){
    sort_arr(arr,length); // --> O(n^2)
    if(length >= size){
        cout << "Cannot be inserted , not enough space !!" << endl;
        return;
    }
    for(int i=0; i<length; i++){
        if(arr[i] >= x){
            for(int j=length; j>i; j--){ // O(n)
                arr[j] = arr[j-1];
            }
            arr[i] = x;
            length += 1;
            return;
        }
    }
    arr[length] = x;
    length += 1;
}

// Time compelxity : O(n)
// Space complexity : O(1)
bool chcek_array_sorted(int arr[],int length){
    for(int i=0; i<length-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

// Time compelxity : O(n) --> n/2 total operations 
// Space complexity : O(1)
void all_negative_towrds_left(int arr[], int size){
    int i,j;
    i = 0;
    j = size-1;
    int index = 0;
    while(i <= j){
        if(arr[i] < 0 && arr[j] > 0){
            i++;
            j--;
        }
        else if(arr[i] < 0 && arr[j] < 0){
            i++;
        }
        else if(arr[i] > 0 && arr[j] < 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}


int main(){
    int arr[10] = {8,3,9,15,6,10,7,2};
    int length = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Unorted array : ";
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
    sort_arr(arr,length);
    cout << "Sorted array : ";
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
    
    insert_sorted_array(arr,length,size,11);
    // insert_sorted_array(arr,length,size,25);
    insert_sorted_array(arr,length,size,4);
    cout << "Array after inserting : ";
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
    // arr[3] = 100;
    cout << "Array check (sorted or not) : " << chcek_array_sorted(arr,length) << endl;

    int new_arr[] = {-6,3,-8,10,5,-7,-9,12,-4,2};
    int new_size = sizeof(new_arr)/sizeof(new_arr[0]);

    cout << endl << endl;
    cout << "Orginal array : ";
    for (int i : new_arr){
        cout << i << " ";
    }

    cout << endl;
    all_negative_towrds_left(new_arr,new_size);
    cout << "-ve shifted array : ";
    for (int i : new_arr){
        cout << i << " ";
    }

    cout << endl << endl;
    return 0;
}