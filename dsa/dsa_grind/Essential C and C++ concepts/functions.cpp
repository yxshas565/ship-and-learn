# include <bits/stdc++.h>
using namespace std;

void func(){
    cout << "Hi , I am a void function called from main !!";
}

int add(int x, int y){ // Prototype of a function , paramters taken by function is called formal parameter
    // Function body
    return x + y;
}

int pass_by_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int pass_by_address(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int pass_by_reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    func();
    cout << endl;
    cout << "Sum : " << add(2,3) << endl; // Function call...here 2,3 are actual parameters

    int a,b;
    a = 1;
    b = 2;
    cout << endl;
    cout << "Pass by value" << endl;
    cout << "Before swap : ";
    cout << "a : " << a << " , " << "b : " << b << endl;
    pass_by_value(a,b);
    cout << "After swap : ";
    cout << "a : " << a << " , " << "b : " << b << endl;


    cout << endl << endl;

    a = 1;
    b = 2;
    cout << "Pass by address" << endl;
    cout << "Before swap : ";
    cout << "a : " << a << " , " << "b : " << b << endl;
    pass_by_address(&a,&b);
    cout << "After swap : ";
    cout << "a : " << a << " , " << "b : " << b << endl;


    cout << endl << endl;

    a = 1;
    b = 2;
    cout << "Pass by reference" << endl;
    cout << "Before swap : ";
    cout << "a : " << a << " , " << "b : " << b << endl;
    pass_by_reference(a,b);
    cout << "After swap : ";
    cout << "a : " << a << " , " << "b : " << b << endl;
    return 0;
}