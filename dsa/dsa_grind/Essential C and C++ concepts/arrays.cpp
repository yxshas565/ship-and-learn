# include <bits/stdc++.h>
using namespace std;

int main(){
    int arr_1[5]; // It stores garbage values
    int arr_2[5] = {1,2,3,4,5}; // It stores array of 5 elements defined intially itself
    int arr_3[] = {1,2,3,4,5,6,7,8,9,10}; // It stores array of 10 integers it auto-calculates since size not defined
    int arr_4[5] = {}; // It stores 5 elements of value : 0 since empty
    int arr_5[] = {}; // It stores 1 element of val : 0 since it auto-calculates size and since empty stores entire indices as 0
    int arr_6[4] = {1,2}; // It stores 1 and 2 in first 2 indices rest of indices is taken to be 0 not garbage values
    int size = sizeof(arr_1)/sizeof(arr_1[0]);


    cout << size << endl;


    cout << "Array 1 : ";
    for (int i=0; i<size; i++){
        cout << arr_4[i] << " ";
    }

    cout << endl;


    int arr[10][12] = {{1,2,3,4,5,6,7,8,9},{1,2,3,4,5},{1,2,3,4},{},{},{},{},{}};

    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    cout << row_size << endl;
    cout << col_size << endl;

    for (int i=0; i<row_size; i++){
        for (int j=0; j<col_size; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << endl << endl;

    for (int x : arr_6){
        cout << x << " ";
    }

    cout << endl << endl;

    for (auto &row : arr) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}