# include <bits/stdc++.h>
using namespace std;


// Q1. Row-wise Traversal

// Input

// 1 2 3
// 4 5 6
// 7 8 9

// Output

// 1 2 3 4 5 6 7 8 9

void row_wise(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << " ";
    }
}   


// Q2. Column-wise Traversal

// Output

// 1 4 7 2 5 8 3 6 9

void col_wise(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << matrix[j][i] << " ";
        }
        cout << " ";
    }
}   



// Q3. Reverse Row-wise

// Output

// 9 8 7 6 5 4 3 2 1

void reverse_row_wise(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    for (int i=row-1; i>=0; i--){
        for (int j=col-1; j>=0; j--){
            cout << matrix[i][j] << " ";
        }
        cout << " ";
    }
}   



// Q4. Reverse Column-wise

// Output

// 9 6 3 8 5 2 7 4 1

void reverse_col_wise(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    for (int i=row-1; i>=0; i--){
        for (int j=col-1; j>=0; j--){
            cout << matrix[j][i] << " ";
        }
        cout << " ";
    }
}


// Q5. Print Main Diagonal

// Output

// 1 5 9

void main_diagnol(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (i == j){
                cout << matrix[i][j];
            }
        }
        cout << " ";
    }
}



// Q6. Print Secondary Diagonal

// Output

// 3 5 7

void secondary_diagnol(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (i + j == 2){
                cout << matrix[i][j];
            }
        }
        cout << " ";
    }
}




// Q7. Print Boundary

// Output

// 1 2 3 6 9 8 7 4

void boundary(vector <vector <int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    // cout << row << " " << col << " ";

    int top = 0;
    int bottom = row-1;
    int left = 0;
    int right = col-1;

    // while (top != bottom || left != right){
        // for (int i=left; left<=right; i++){
        //     cout << matrix[top][i];
        // }
        // top++;

        // for (int i=top; top<=bottom; i++){
        //     cout << matrix[i][bottom];
        // }
        // bottom--;

        // if (left < right){
        //     for (int i=top; i>=0; i--){
        //         cout << matrix[right][i];
        //     }
        //     left ++;
        //     right --;
        // }

        // cout << matrix[left-1][right-1];
    // }

     // Top Row
    for (int i = left; i <= right; i++) {
        cout << matrix[top][i] << " ";
    }

    // Right Column
    for (int i = top + 1; i <= bottom; i++) {
        cout << matrix[i][right] << " ";
    }

    // Bottom Row
    if (top != bottom) {
        for (int i = right - 1; i >= left; i--) {
            cout << matrix[bottom][i] << " ";
        }
    }

    // Left Column
    if (left != right) {
        for (int i = bottom - 1; i > top; i--) {
            cout << matrix[i][left] << " ";
        }
    }

    
}


void spiral_order(vector<vector <int>> matrices){
    int rows = matrices.size();
    int cols = matrices[0].size();

    vector <int> ans;
    int left,right,top,bottom;
    left = 0;
    right = cols-1;
    top = 0;
    bottom = rows-1;

    vector <vector <int>> ans;


    while (left <= right && top <= bottom){
        for (int i=left; i<=right; i++){
            // cout << matrices[top][i] << " ";
            ans.push_back(matrices[top][i]);
        }
        top++;
    
        for (int i=top; i<=bottom; i++){
            // cout << matrices[i][right] << " ";
            ans.push_back(matrices[i][right]);
        }
        right--;

        if (top <= bottom){
            for (int i=right; i >= left; i--){
                // cout << matrices[bottom][i] << " ";
                ans.push_back(matrices[bottom][i]);
            }
            bottom--;
        }
        
        if (left <= right){
            for (int i=bottom; i>=top; i--){
                // cout << matrices[i][left] << " ";
                ans.push_back(matrices[i][left]);
            }
            left++;
        }
    }
}



int main(){
    // rows not mandatory to declare
    // int arr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };


    // for(int i=0;i<3;i++){

    // for(int j=0;j<3;j++){

    //     cout<<arr[i][j]<<" ";

    // }

    // cout<<endl;

    // // Row major order : Memory → 1 2 3 4 5 6 7 8 9
    // // Col major order : Memory → 1 4 7 2 5 8 3 6 9 

    // vector<vector<int>> matrix;

    // }



    vector <vector <int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // row_wise(matrix);
    // col_wise(matrix);
    // reverse_row_wise(matrix);
    // reverse_col_wise(matrix);
    // main_diagnol(matrix);
    // secondary_diagnol(matrix);
    // boundary(matrix);

    spiral_order(matrix);

    return 0;
}