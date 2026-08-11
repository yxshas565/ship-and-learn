# include <bits/stdc++.h>
using namespace std;

int bubble_sort(int arr[], int size){
    for(int i=0; i<size; i++){
        bool isSwapped = false;
        for(int j=1; j<size-i; j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] =  temp;
                isSwapped = true;
            }
        }

        if(!isSwapped){
            break;
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
    bubble_sort(arr,size);
    cout << "Orginal array (After bubble sort) : ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}