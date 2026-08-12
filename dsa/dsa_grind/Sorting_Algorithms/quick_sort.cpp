# include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j=low; j<high; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void quick_sort(int arr[],int low, int high){
    if(low >= high){
        return;
    }

    int pivotIndex = partition(arr,low,high);

    quick_sort(arr,low,pivotIndex-1);
    quick_sort(arr,pivotIndex+1,high);
}


int main(){
    int arr[] = {5,1,4,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Orginal array : ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    quick_sort(arr,0,size-1);
    cout << "Orginal array (After quick sort) : ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
}