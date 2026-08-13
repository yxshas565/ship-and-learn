# include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9},{9,8,7}};
    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    // cout << row_size << " " << col_size << endl;

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}