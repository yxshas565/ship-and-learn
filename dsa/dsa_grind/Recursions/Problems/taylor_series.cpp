// Taylor series :  e^x = 1 + 1/x + x^2/2! + x^3+3! + ....
// using horne rule : 

# include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n^2)
// Space complexity : o(n)
double taylor_series(int x, int n){
    static double p,f;
    double r;
    p = f = 1;
    if(n == 0){
        return 1;
    }
    else{
        r = taylor_series(x,n-1);
        p *= x;
        f *= n;
        return r + p/f;
    } 
}


// Taylor series using horne's rule
double taylor_horne_rule(int x, int n){
    double static s = 1;
    if (n == 0)
        return s;

    s = 1.0 + (double)x * s / n;
    return taylor_horne_rule(x,n-1);
}

double horne_iterative(int x, int n){
    double res = 1;
    if(n == 0){
        return 1;
    }
    for(int i=n; i>=1; i--){
        res = 1 + ((double(x)/i) * res);
    }
    return res;
}


int main(){
    cout << taylor_series(5,5) << endl;
    cout << taylor_horne_rule(5,5) << endl;
    cout << horne_iterative(5,5) << endl;
    return 0;
}