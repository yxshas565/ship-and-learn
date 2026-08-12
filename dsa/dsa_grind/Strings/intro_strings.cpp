# include <bits/stdc++.h>
using namespace std;

int main(){
    char temp = 'A'; // It stores value 65
    cout << temp << " : " << int(temp) << endl;

    char arr[] = "India is my nation !!";
    cout << arr << endl;

    char name[50] = "Yashas Sadananda";
    cout << name << endl;
    cout << "Size : " << sizeof(name)/sizeof(name[0]) << endl;
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        length += 1;
        i++;
    }
    cout << "Current length : " << length << endl;
    return 0;
}