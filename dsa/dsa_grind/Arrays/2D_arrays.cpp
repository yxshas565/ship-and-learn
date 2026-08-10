# include <bits/stdc++.h>
using namespace std;


int main(){
    // Using normal array notation
    int arr[][6] = {{1,2,3,4},{5,6,7,8},{9,1}};
    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    cout << "Row size : " << row_size << endl;
    cout << "Col size : " << col_size << endl;

    // Using ptr.
    int *ptr[3];
    ptr[0] = new int[4];
    ptr[1] = new int[4];
    ptr[2] = new int[4];


    // Using double ptr.

    int **new_ptr;
    new_ptr = new int*[3];
    new_ptr[0] = new int[4];
    new_ptr[1] = new int[4];
    new_ptr[2] = new int[4];


    for (int i=0; i<row_size; i++){
        for (int j=0; j<col_size; j++){
            cout << arr[i][j] << " : " << int(&arr[i][j]) << "\t";
        }
        cout << endl;
    } 


    cout << endl << endl;

    // It is stored column wise as single array
    for(int i=0; i<row_size*col_size; i++){
        cout << int(arr[i]) << "\t";
    }

    cout << endl << endl;

    cout << sizeof(int);
    return 0;
}