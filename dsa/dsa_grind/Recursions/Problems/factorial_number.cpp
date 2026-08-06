# include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n)
// Space complexity : O(n)
int fact(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return n * fact(n-1);
}

// Time complexity : O(n)
// Space complexity : O(1)
int fact_iterative(int n){
    static int fact = 1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    cout << fact(5) << endl;
    cout << fact_iterative(6) << endl;
    return 0;
}