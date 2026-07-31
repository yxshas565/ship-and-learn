# include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Programming Language";
    string substring = str.substr(0,10);
    int length = str.size();
    str.push_back('s');
    str.pop_back();
    int pos = str.find("rog");

    cout << str << endl;
    cout << substring << endl;
    cout << length << endl;
    cout << pos << endl;


    string a = "12345";
    int a_convert = stoi(a);
    cout << a << endl;
    cout << a_convert << endl;

    int b = 1235;
    string c = to_string(b);
    cout << b << endl;
    cout << c << endl;
    return 0;
}