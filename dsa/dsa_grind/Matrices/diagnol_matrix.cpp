# include <bits/stdc++.h>
using namespace std;

void display(int arr[][5],int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void diagnol_matrix(int arr[][5],int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i == j){
                // arr[i][j] = i*j + j+5 * i+6 + i-j;
                arr[i][j] = i+1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }

    display(arr,rows,cols);
}

void store_ele_array(int arr[], int diagnol_matrix[][5], int size){
    for(int i=0; i<size; i++){
        arr[i] = diagnol_matrix[i][i];
    }
}

int main(){
    int arr[5][5];
    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    diagnol_matrix(arr,row_size,col_size);
    cout << endl;

    int diagnol_elemnts[row_size];
    store_ele_array(diagnol_elemnts,arr,row_size);

    cout << "Diagnol array : ";
    for(int i : diagnol_elemnts){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}