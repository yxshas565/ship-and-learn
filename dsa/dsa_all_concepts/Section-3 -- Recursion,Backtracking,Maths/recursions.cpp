# include <bits/stdc++.h>
using namespace std;


void recursive_func(int n){
    // base case
    if (n) return;
    // recursive case
    recursive_func(n);
}

void iterative_loop(int n){
    // Itertaive way
    for (int i=0; i<n; i++){
        cout << i+1 << " ";
    }
}


void recursive_loop(int i, int n){
    // Recursive way
    if (i > n){
        return;
    }
    
    // cout << i << " ";
    recursive_loop(i+1,n);
    cout << i << " ";
}

void anoth_loop(int n){
    if (n == 0){
        return; // once returned it starts printing if anything in stack it starts poping one by one
    }
    anoth_loop(n-1);
    cout << n << " "; // this part will be stored in stack instead of printing
}

int fib(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    // iterative_loop(5);
    // cout << endl;
    // recursive_loop(1,5);
    // cout << endl;
    // anoth_loop(3);
    // cout << fib(5);
    cout << fact(5);
    return 0;
}