# include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int nCr_recursive(int n, int r){
    if(r == 0 || r == 1){
        return n;
    }
    if(r == n){
        return 1;
    }

    return fact(n) / (fact(r) * fact(n-r));
}

// In pascal triangle can be obtained by nCr = n-1 C r-1 + n-1 C r 
int nCr_using_pascal_triangle(int n, int r){
    if(r == 0 || r == 1){
        return n;
    }
    if(r == n){
        return 1;
    }

    return nCr_using_pascal_triangle(n-1,r-1) + nCr_using_pascal_triangle(n-1,r);

    // int a = fact(n-1) / (fact(r-1) * fact(n-r));
    // int b = fact(n-1) / (fact(r) * fact(n-r - 1));
    // return a + b;
}

int main(){
    cout << nCr_recursive(5,3) << endl;
    cout << nCr_using_pascal_triangle(5,3) << endl;
    return 0;
}