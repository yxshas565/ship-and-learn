# include <bits/stdc++.h>
using namespace std;

// first iteration =   1 5 4 2 8
// second iteration =  1 4 5 2 8

int insertion_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5,1,4,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Orginal array : ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    insertion_sort(arr,size);
    cout << "Orginal array (After insertion sort) : ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}