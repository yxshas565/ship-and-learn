# include <bits/stdc++.h>
using namespace std;

void func2(int i){
    int a;
}

void func1(){
    int x;
    func2(x);
}

int main(){
    int a = 5;
    float b = 10.23;
    func1();

    int *ptr;
    cout << sizeof(ptr) << endl;

    ptr = new int[5];

    for(int i=0; i<5; i++){
        ptr[i] = (i*7+9-3) + i;    
    }

    cout << "Dynamic allocated array : ";
    for (int i=0; i<5; i++){
        cout << ptr[i] << " ";
    }

    delete []ptr;
    return 0;
}


// functions are usually inside code section intially and then variables are formed inside stack
// level by level inside stack frames.