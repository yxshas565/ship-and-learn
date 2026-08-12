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


    int a = 5;

    if(a & (1 << 0)){
        cout << "Bit is set";
    }
    else{
        cout << "Bit is not set";
    }


    int b = 15;
    for(int i=0,j = 1; i<(sizeof(int) * 8); i++,j++){
        if(b & (1 << i)){
            cout << "Bit " << i << " is set" << endl;
        }
        else{
            cout << "Bit " << i << " is not set" << endl;
        }
    }
    return 0;
}