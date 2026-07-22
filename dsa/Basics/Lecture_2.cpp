# include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Hello , World !!" << endl;
    cout << "Welcome to programming language !!" << endl ;

    int a = 5; // variable a , and data-type is int
    cout << sizeof(a) << endl;
    char ch = 'A';
    cout << sizeof(ch) << endl;


    cout << "Size of variables : " << endl;
    cout << "Int : " << sizeof(int) << endl;
    cout << "Float : " << sizeof(float) << endl;
    cout << "Char : " << sizeof(char) << endl;
    cout << "Boolean : " << sizeof(bool) << endl;
    cout << "Double : " << sizeof(double) << endl;
    cout << "long int : " << sizeof(long int) << endl;
    cout << "long long int : " << sizeof(long long int) << endl;
    cout << "long double : " << sizeof(long double) << endl;

    cout << endl << endl;


    int b = 10;
    double c = (double)b;
    cout << c << endl;         
    cout << sizeof(c);
    return 0;
}