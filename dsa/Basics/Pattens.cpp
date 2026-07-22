# include <bits/stdc++.h>
using namespace std;

void pattern_star(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "* "; 
        }
        cout << endl;
    }
    cout << endl;
}

void num_pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << i+1 << " "; 
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    pattern_star(5);
    num_pattern(5);
    return 0;
}