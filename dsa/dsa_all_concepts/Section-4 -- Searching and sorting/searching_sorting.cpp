# include <bits/stdc++.h>
using namespace std;

int linear_serach(vector <int> arr, int target){
    for (int i=0; i<arr.size(); i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int binary_search(vector <int> arr, int target){
    int left,right;
    left = 0;
    right = arr.size()-1;

    sort(arr.begin(),arr.end());

    int mid = (left + right) / 2;
    while (left <= right){
        mid = (left+right)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

void selection_sort(vector <int> arr){
    int min = INT_MAX;
    int index = 0;
    for (int i=0; i<arr.size()-1; i++){
        min = arr[i];
        index = i;
        for (int j=i+1; j<arr.size(); j++){
            if (arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for (int x : arr){
        cout << x << " ";
    }
}

void bubble_sort(vector <int> arr){
    for (int i=0; i<arr.size(); i++){
        bool isSwapped = false;
        for (int j=0; j<arr.size()-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwapped = true;
            }
        }
        if (!isSwapped){
            break;
        }
    }
    for (int x : arr){
        cout << x << " ";
    }
}


void insertionSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}



void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){

        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high){
    if(low >= high)
        return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}



int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high){
    if(low < high){
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout << linear_serach(arr,7) << endl;
    cout << binary_search(arr,8) << endl;

    vector <int> sort_arr = {3,1,8,6,10,9,0,4,8};
    // selection_sort(sort_arr);
    // bubble_sort(sort_arr);
    return 0;
}