# include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10; // scalar variable
    int arr[10] = {1,2,3}; // vector variables

    // for(int i : arr){
    //     cout << i << endl;
    // }
    int *ptr = arr;
    // Method - 1
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << int(&arr[i]) << " : " << arr[i] << endl;
    }
    cout << endl;

    // Method - 2
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << int(&arr[i]) << " : " << ptr[i] << endl;
    }
    cout << endl;

    // Method - 3
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << int(&arr[i]) << " : " << *(ptr + i) << endl;
    }
    cout << endl;

    delete ptr;
    return 0;
}