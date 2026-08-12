// Eg :- abc --> TOTAL n! permutations
// State space tree --> it's used to find all possible permuations
// We have to use backtracking
// Recursion and brute force 


# include <bits/stdc++.h>
using namespace std;

void permutation_string(string s, int k){
    static int res[10];
    static int a[10];    
    int i;

    if(s[k] == '\0'){
        res[k] = '\0';
        for(int i=0; res[i] != '\0'; i++){
            cout << char(res[i]);
        }
        cout << endl;
    }
    else{
        for(int i=0; s[i] != '\0'; i++){
            if(a[i] == 0){
                res[k] = s[i];
                a[i] = 1;
                permutation_string(s,k+1);
                a[i] = 0;
            }
        }
    }
}

int main(){
    string s = "ABC";
    // int length = 0;
    // int i = 0;
    // while(s[i] != '\0'){
    //     length += 1;
    //     i++;
    // }
    // cout << length << endl;
    permutation_string(s,0);
    return 0;
}