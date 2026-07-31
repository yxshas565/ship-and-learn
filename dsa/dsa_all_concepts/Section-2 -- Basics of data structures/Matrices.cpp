# include <bits/stdc++.h>
using namespace std;

int main(){
    // rows not mandatory to declare
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };


    for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){

        cout<<arr[i][j]<<" ";

    }

    cout<<endl;

    // Row major order : Memory → 1 2 3 4 5 6 7 8 9
    // Col major order : Memory → 1 4 7 2 5 8 3 6 9 

    vector<vector<int>> matrix;

}

    return 0;
}