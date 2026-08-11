# include <bits/stdc++.h>
using namespace std;

int selection_sort(int arr[], int size){
    int min,index;
    for(int i=0; i<size; i++){
        min = arr[i];
        index = i;
        for(int j=i+1; j<size; j++){
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

int main(){
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Orginal array : ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    selection_sort(arr,size);
    cout << "Orginal array (After selection sort) : ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}