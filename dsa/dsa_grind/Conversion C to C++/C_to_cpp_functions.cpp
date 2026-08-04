// Using class and constructor 

/*
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
*/

# include <bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }

    int area(){
        return length * breadth;
    }

    void changeLength(int length){
        this->length = length;
    }

    int getLength(){
        return length;
    }

    int perimeter(){
        return 2*(length + breadth); 
    }
    ~Rectangle(); // it destructs if any dynamic memory is allocated here 
};


int main(){
    int length,breadth;
    cout << "Enter length and breadth : ";
    cin >> length >> breadth;
    Rectangle r(length,breadth);


    cout << "Area : " << r.area() << endl;
    r.changeLength(20);
    cout << "Length : " << r.getLength() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    return 0;
}