# include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    int col_index;
    struct Node *next;
};



int main(){
    int arr[5][6] = {{0,0,0,0,8,0},{0,0,0,7,0,0},{5,0,0,0,9,0},{0,0,0,0,0,3},{6,0,0,4,0,0}};

    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);
    struct Node *result[row_size];

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            if(arr[i][j]){
                
            }
        }
    }
    return 0;
}