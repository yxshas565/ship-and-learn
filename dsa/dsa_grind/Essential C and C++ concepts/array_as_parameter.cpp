# include <bits/stdc++.h>
using namespace std;

void func1(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void func2(int *arr, int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// int size_arr(int arr[]){
//     int a = sizeof(arr)/sizeof(arr[0]);
//     return a;
// }

int * func3(int n){
    int *ptr;
    ptr = new int[n];
    ptr[0] = ptr[1] = ptr[2] = 100;
    return ptr;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    func1(arr,n);
    func2(arr,n);
    // size_arr(arr);

    int *ptr = func3(5);
    for (int i=0; i<5; i++){
        cout << ptr[i] << " ";
    }
    return 0;
}