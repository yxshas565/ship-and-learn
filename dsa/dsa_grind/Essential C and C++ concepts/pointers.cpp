# include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "Value of a : " << a << endl;
    cout << "Value of ptr associated with a : " << *ptr << endl;
    cout << "Address of a : " << &a << endl;
    cout << "Address stored in ptr of a : " << ptr << endl;
    cout << "Address of ptr : " << &ptr << endl;

    // Dynamically allocating memory in C and C++

    int arr[] = {3,1,8,10,5};
    int *ptr_1 = (int *)malloc(5*sizeof(int));
    int *ptr_2 = new int[5];
    int *ptr_3 = new int(10); // It stores 1 variable and value is 10

    // cout << "Ptr. 1 size : " << sizeof(ptr_1)/sizeof(ptr_1[0]);
    ptr_1 = arr;
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << *(ptr_1 + i) << " : " << &ptr_1[i] << endl;
        // ptr_1[i] or *(ptr_1 + i)
    }

    int b = 8;
    int *ptr_new = &b;
    int **ptr_new_new = &ptr_new;

    cout << "Value of b using var. : " << b << endl;
    cout << "Value of b using ptr. : " << *ptr_new << endl;
    cout << "Value of b using double ptr. : " << **ptr_new_new << endl;

    cout << "Add. of b using var. : " << &b << endl;
    cout << "Add. of b using ptr. : " << ptr_new << endl;
    cout << "Add. of b using double ptr. : " << *ptr_new_new << endl;

    cout << "Add. single ptr. : " << &ptr_new << endl;
    cout << "Add. of single ptr. using double ptr. : " << ptr_new_new<< endl;

    cout << "Add. of double ptr. : " << &ptr_new_new << endl;


    // Reference

    int x = 10;
    int &reference = x;
    // We cannot change refernce once referenced to a variable

    cout << x << " " << reference << endl;
    reference ++;
    cout << x << " " << reference << endl;
    x++;
    cout << x << " " << reference << endl;
    int y = 100;
    reference += y;
    cout << x << " " << reference << endl;


    free(ptr);
    free(ptr_1);
    delete[] ptr_2;
    delete ptr_3; // deleting or freeing is diff. when only for 1 variable is dynamically intiallised
    free(ptr_new);
    free(ptr_new_new);
    return 0;   
}