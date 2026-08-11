# include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    vector <int> temp;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= high){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=0; k<temp.size(); k++){
        arr[low+k] = temp[k];
    }
}

void merge_sort(int arr[],int low, int high){
    if(low >= high){
        return;
    }
    
    int mid = (low + high) / 2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);

}


int main(){
    int arr[] = {5,1,4,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Orginal array : ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    merge_sort(arr,0,size-1);
    cout << "Orginal array (After merge sort) : ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}