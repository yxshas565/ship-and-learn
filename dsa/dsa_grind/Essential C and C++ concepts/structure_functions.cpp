# include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int length, int breadth){
    r->length = length;
    r->breadth = breadth;
    return;
}

int area(struct Rectangle r){
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r ,int length){
    r->length = length;
    return;
}

int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    cout << "Length : " << r.length << " , " << "Breadth : " << r.breadth << endl;
    cout << area(r) << endl;
    changeLength(&r,20);
    cout << "Length : " << r.length << " , " << "Breadth : " << r.breadth << endl;
    cout << area(r) << endl;
    return 0;
}