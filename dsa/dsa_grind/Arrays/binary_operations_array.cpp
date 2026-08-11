# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(m + n) 
// Space complexity : O(1)
void merge_array(int arr1[], int size1, int arr2[], int size2, int merged_arr[]){
    int i,j;
    i = j = 0;
    int k = 0;
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            merged_arr[k] = arr1[i];
            i++;
        }
        else{
            merged_arr[k] = arr2[j];
            j++;
        }

        k++;
    }

    if(i < size1){
        while(i < size1){
            merged_arr[k] = arr1[i];
            i++;
            k++;
        }
    }
    else{
        while(j < size2){
            merged_arr[k] = arr2[j];
            j++;
            k++;
        }
    }
}

int main(){
    int arr1[] = {3,8,16,20,26,48};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {4,10,12,22,30,35,40,50,100};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Array 1 : ";
    for (int i : arr1){
        cout << i << " ";
    }
    cout << endl;
    cout << "Array 2 : ";
    for (int i : arr2){
        cout << i << " ";
    }
    cout << endl;

    int merged_arr[size1 + size2];
    merge_array(arr1,size1,arr2,size2,merged_arr);

    cout << "Merged array : ";
    for(int i : merged_arr){
        cout << i << " ";
    }
    return 0;
}