# include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    double length;
    double breadth;
};

struct Student{
    string name;
    string course;
    int age;
};

int main(){
    struct Rectangle r1 = {10,5};
    struct Rectangle *ptr;
    ptr = &r1;

    ptr->length = 5.452;
    ptr->breadth = 4.897;

    cout << "Area : " << ptr->length * ptr->breadth << endl;

    // free(ptr);

    struct Student *ptr_new;
    // ptr_new = (struct Student*) malloc(sizeof(struct Student));
    ptr_new = new Student;

    
    ptr_new->age = 18;
    ptr_new->name = "Yashas Sadananda";
    ptr_new->course = "CSE";

    cout << "Name : " << ptr_new->name << endl;
    cout << "Course : " << ptr_new->course << endl;
    cout << "Age : " << ptr_new->age << endl;

    // free(ptr_new);
    delete ptr_new;

    return 0;
}