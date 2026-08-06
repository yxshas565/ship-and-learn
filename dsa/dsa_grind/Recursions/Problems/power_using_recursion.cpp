// Power using recursion
// m pow n --> m ^ n
// m^n = m*m*m ... n times

# include <bits/stdc++.h>
using namespace std;


// Time complexity : O(n)
// Space complexity : O(n)
int pow_num(int m, int n){
    if(n == 0){
        return 1;
    }
    return m * pow_num(m,n-1);
}

// Time complexity : O(log n)
// Space complexity : O(log n)
int pow_optimised(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return pow_optimised(m*m,n/2);
    }
    else{
        return m * pow_optimised(m*m,(n-1)/2);
    }
}

// Time complexity : O(n)
// Space complexity : O(1)
int pow_num_iterative(int m, int n){
    int pow_num = 1;
    if (n == 0){
        return 1;
    }
    for(int i=n; i>0; i--){
        pow_num *= m;
    }
    return pow_num;
}


int main(){
    cout << pow_num(2,5) << endl;
    cout << pow_num_iterative(3,4) << endl;
    cout << pow_optimised(9,3) << endl;
    return 0;
}