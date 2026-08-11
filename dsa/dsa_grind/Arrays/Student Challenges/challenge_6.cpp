// Find max and min in single scan

# include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n)
// Space complexity : O(1)
// Total comparison : 2(n-1) --> worst case , n-1 --> best case
// Worst : O(n)
// Best : O(n)
void min_max(int arr[], int size){
    int max,min;
    min = max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Max element : " << max << endl;
    cout << "Min element : " << min << endl;
}

int main(){
    int arr[] = {5,8,3,9,6,2,10,7,-1,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    min_max(arr,size);
    return 0;
}