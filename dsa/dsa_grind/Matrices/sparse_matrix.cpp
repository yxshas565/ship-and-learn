# include <bits/stdc++.h>
using namespace std;

struct coordinate_lists{
    int i;
    int j;
    int x;
};

struct sparse{
    int m;
    int n;
    int num;
    struct coordinate_lists *Element;
};

void create(struct sparse *s,int row_size, int col_size, int non_zeo_ele){
    s->m = row_size;
    s->n = col_size;
    s->num = non_zeo_ele;
    // We have to create array of size num

    // s->Element = new coordinate_lists[s->nums]; // --> dynamically create array for storing the values

    // run a loop and enter in all the elements 
    // for(){
        // take input of numnbers are store it in
        // &s->Element[i].i
        // &s->Element[i].j
        // &s->Element[i].x
    // }
}

int add(sparse *s1, sparse *s2){
    // check first if dimensions are same by comparing rows and cols in both sparse matrix the only we can add

    // int *sum = new sparse;
    // write down the logic here 
    // Take care of conditions lots of conditons are there 

}

int main(){
    struct sparse s;


    int arr[4][5] = {{0,0,7,0,0},{2,0,0,5,0},{9,0,0,0,0},{0,0,0,0,4}};
    int row_size = sizeof(arr)/sizeof(arr[0]);
    int col_size = sizeof(arr[0])/sizeof(arr[0][0]);

    int non_zeo_ele = 0;


    for (int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            if(arr[i][j] != 0){
                non_zeo_ele += 1;
            }
        }
    }

    
    return 0;
}