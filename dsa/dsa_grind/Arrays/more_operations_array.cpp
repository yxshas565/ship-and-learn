# include <bits/stdc++.h>
using namespace std;

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

void insert_sorted_array(int arr[], int &length, int size, int x){
    sort_arr(arr,length);
    if(length >= size){
        cout << "Cannot be inserted , not enough space !!" << endl;
        return;
    }
    for(int i=0; i<length; i++){
        if(arr[i] >= x){
            for(int j=length; j>i; j--){
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
    insert_sorted_array(arr,length,size,25);
    insert_sorted_array(arr,length,size,6);
    cout << "Array after inserting : ";
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}