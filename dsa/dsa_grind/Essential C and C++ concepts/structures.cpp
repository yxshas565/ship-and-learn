# include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    double breadth;
};

// Complex number : a + ib
struct Complex_num{
    int real;
    int imaginary;
    char a;
};

// Student info.
struct Student{
    int roll_no; // 4 bytes
    char name[20]; // 20 bytes
    string department; // depends on complier usually 24 or 32 irrespective of how mnay ever chars in string
};

// Card game
struct card_game{
    int face;
    int shape;
    int color;
};

int main(){
    struct Rectangle r = {10,12.456};
    r.length = 5;
    r.breadth = 10.45;

    double area = r.length * r.breadth;
    cout << "Area of rectang;e : " << area << endl;

    struct Student s_1;
    strcpy(s_1.name,"Yashas Sadananda");
    s_1.department = "CSE";
    s_1.roll_no = 610;

    cout << s_1.name << endl;
    cout << s_1.department << endl;
    cout << s_1.roll_no << endl;

    cout << endl << endl;

    struct Student student[5];
    strcpy(student[0].name,"XXX");
    student[0].department = "ECE";
    student[0].roll_no = 100;

    int size_struct = sizeof(s_1);
    int size_struct_arr = sizeof(student)/sizeof(student[0]);

    cout << "Struct size : " << size_struct << endl;
    cout << "Array of structs size : " << size_struct_arr << endl;
    return 0;
}