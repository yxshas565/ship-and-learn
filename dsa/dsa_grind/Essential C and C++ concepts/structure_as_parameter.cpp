# include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Test{
    int arr[5];
    int n;
};

int area(struct Rectangle *r1){
    r1->length+=10;
    return r1->breadth * r1->length;
}

void func(struct Test &t1){
    t1.arr[0] = 5;
}

struct Rectangle *func_new(){
    struct Rectangle *ptr;
    ptr = new Rectangle;
    ptr->breadth = 23;
    ptr->length = 45;
    return ptr;
}


int main(){
    struct Rectangle r1 = {4,5};
    cout << "Area : " << area(&r1) << endl;
    cout << r1.length << endl;

    struct Test t1 = {{1,2,3,4,5},5};
    cout << t1.arr[0] << endl;
    func(t1);
    cout << t1.arr[0] << endl;


    struct Rectangle *ptr = func_new();
    cout << "Area : " << ptr->breadth * ptr->length << endl;
    return 0;
}