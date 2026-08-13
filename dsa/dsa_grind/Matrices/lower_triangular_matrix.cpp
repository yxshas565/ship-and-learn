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

// No.of non-zero elemnts = 4 + 3 + 2 + 1 --> in 5*5 matrix --> n-1(n - 1 + 1) / 2 = n-1(n) / 2 = (n(n-1)) / 2
void lower_triangular_matrix(int arr[][5],int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i >= j){
                arr[i][j] = i+1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }

    display(arr,rows,cols);
}

void store_ele_array_row_wise(int arr[], int lower_triangular[][5], int size, int row_size){
    int k = 0;
    for(int i=0; i<row_size; i++){
        for(int j=0; j<i+1; j++){
            arr[k] = lower_triangular[i][j];
            k++;
        }
    }
}

void store_ele_array_col_wise(int arr[], int lower_triangular[][5], int size, int row_size){
    int k = 0;
    for(int i=0; i<row_size; i++){
        for(int j=i; j<row_size; j++){
            arr[k] = lower_triangular[j][i];
            k++;
        }
    }
}

int main(){
    int arr[5][5];
    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    lower_triangular_matrix(arr,row_size,col_size);
    cout << endl;

    int lower_triangular_elements_row_wise[row_size*col_size - ((row_size * (row_size-1)) / 2)];
    store_ele_array_row_wise(lower_triangular_elements_row_wise,arr,row_size*col_size - ((row_size * (row_size-1)) / 2),row_size);

    cout << "Diagnol array (Row wise) : ";
    for(int i : lower_triangular_elements_row_wise){
        cout << i << " ";
    }
    cout << endl;


    int lower_triangular_elements_col_wise[row_size*col_size - ((row_size * (row_size-1)) / 2)];
    store_ele_array_col_wise(lower_triangular_elements_col_wise,arr,row_size*col_size - ((row_size * (row_size-1)) / 2),row_size);
    
    cout << "Diagnol array (Col wise) : ";
    for(int i : lower_triangular_elements_col_wise){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}