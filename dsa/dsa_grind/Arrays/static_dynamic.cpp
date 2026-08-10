# include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];

    // int n;
    // cin >> n;
    // int arr_new[n];

    int *ptr = new int[10];

    for (int i=0; i<10; i++){
        ptr[i] = i*5+8-i;
    }

    cout << "Dynamic array : \n";
    for(int i=0; i<10; i++){
        cout << int(&ptr[i]) << " : " << ptr[i] << endl;
    }

    cout << endl << endl;


    // Increase array size 
    int *new_ptr = new int[30];
    new_ptr = ptr;

    cout << "Dynamic array re-sized : \n";
    for(int i=0; i<30; i++){
        cout << int(&new_ptr[i]) << " : " << new_ptr[i] << endl;
    }

    cout << endl << endl;
    int *random_ptr = new int(10);
    for(int i=0; i<10; i++){
        cout << random_ptr[i] << " ";
    }

    delete []ptr;
    delete []new_ptr;
    delete random_ptr;
    return 0;
}