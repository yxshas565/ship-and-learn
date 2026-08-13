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

void symmetric_matrix(int arr[][5],int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<i+1; j++){
            if(i == j){
                arr[i][j] = i+2;
            }
            else{
                arr[i][j] = arr[j][i] = i+j+1;
            }
        }
    }

    display(arr,rows,cols);
}

void store_ele_array(int arr[], int symmetric_matrix[][5],int row_size){
    int k = 0;
    for(int i=0; i<row_size; i++){
        for(int j=0; j<i+1; j++){
            arr[k] = symmetric_matrix[i][j];
            k++;
        }
    }
}

int main(){
    int arr[5][5];
    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    symmetric_matrix(arr,row_size,col_size);
    cout << endl;

    int symmetric_elements[row_size*col_size - ((row_size * (row_size-1)) / 2)];
    store_ele_array(symmetric_elements,arr,row_size);

    cout << "Diagnol array : ";
    for(int i : symmetric_elements){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}