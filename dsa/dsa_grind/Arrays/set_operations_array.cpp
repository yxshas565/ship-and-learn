# include <bits/stdc++.h>
using namespace std;

// Time compelxity : O(m+n) + O(nlog(n)) = O(n log(n))
// Space complexity : O(1)
void union_set_sorted(int arr1[], int size1, int arr2[], int size2, vector <int> &merged_arr){
    sort(arr1,arr1 + size1);
    sort(arr2,arr2 + size2);
    int i,j;
    i = j = 0;
    int k = 0;
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            // merged_arr[k] = arr1[i];
            merged_arr.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j]){
            // merged_arr[k] = arr2[j];
            merged_arr.push_back(arr2[j]);
            j++;
        }
        else{
            merged_arr.push_back(arr2[j]);
            // merged_arr[k] = arr2[j];
            i++;
            j++;
        }

        k++;
    }

    if(i < size1){
        while(i < size1){
            merged_arr.push_back(arr1[i]);
            // merged_arr[k] = arr1[i];
            i++;
            k++;
        }
    }
    else{
        while(j < size2){
            merged_arr.push_back(arr2[j]);
            // merged_arr[k] = arr2[j];
            j++;
            k++;
        }
    }
}

// Time compelxity : O(m) + O(m*n) = O(n^2) 
// Space complexity : O(1)
void union_set_unsorted(int arr1[], int size1, int arr2[], int size2, vector <int> &merged_arr){
    int k = 0;
    for(int i=0; i<size1; i++){
        merged_arr.push_back(arr1[i]);
        // merged_arr[k] = arr1[i];
        k++;
    }

    for(int i=0; i<size2; i++){
        int isFound = 0;
        for(int j=0; j<size1; j++){
            if(arr2[i] == arr1[j]){
                isFound = 1;
            }
        }

        if(!isFound){
            merged_arr.push_back(arr2[i]);
            // merged_arr[k] = arr2[i];
            k++;
        }
    }
}



void intersection_sorted(int arr1[], int size1, int arr2[], int size2, vector <int> &merged_arr){
    sort(arr1,arr1 + size1);
    sort(arr2,arr2 + size2);
    int i,j;
    i = j = 0;
    int k = 0;
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            // merged_arr[k] = arr2[j];
            merged_arr.push_back(arr2[j]);
            i++;
            j++;
            k++;
        }
    }    
}
void intersection_unsorted(int arr1[], int size1, int arr2[], int size2, vector <int> &merged_arr){
    int k = 0;
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i] == arr2[j]){
                merged_arr.push_back(arr1[i]);
                // merged_arr[k] = arr1[i];
                k++;
                break;
            }
        }
    }
}


void difference(); // similar way 
void set_membership(); // to check whethere element belons to array/set or not

int main(){
    int arr1[] = {3,5,10,4,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {12,4,7,2,5};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    // int union_arr[size1+size2];
    // int union_unsorted[size1 + size2];
    vector <int> union_arr;
    vector <int> union_unsorted;
    int length1, length2;
    union_set_unsorted(arr1,size1,arr2,size2,union_unsorted);
    union_set_sorted(arr1,size1,arr2,size2,union_arr);
    cout << "Union of 2 arrays (Un-sorted) : ";
    for (int i : union_unsorted){
        cout << i << " ";
    }
    cout << endl;
    cout << "Union of 2 arrays (Sorted) : ";
    for (int i : union_arr){
        cout << i << " ";
    }
    cout << endl;

    // int intersection_sorted_arr[size1+size2];
    // int intersection_unsorted_arr[size1+size2];
    vector <int> intersection_sorted_arr;
    vector <int> intersection_unsorted_arr;
    intersection_sorted(arr1,size1,arr2,size2,intersection_sorted_arr);
    intersection_unsorted(arr1,size1,arr2,size2,intersection_unsorted_arr);
    cout << "Intersection of 2 arrays (Un-sorted) : ";
    for (int i : intersection_unsorted_arr){
        cout << i << " ";
    }
    cout << endl;
    cout << "Intersection of 2 arrays (Sorted) : ";
    for (int i : intersection_sorted_arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}