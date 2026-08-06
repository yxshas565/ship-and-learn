// Fibonacci series : 0 1 1 2 3 5 ....

# include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-2) + fib(n-1);
}

void fib_iterative(int n){
    int first = 0;
    int second = 1;

    if(n == 0 || n == 1){
        cout << 0 << " " << 1 << " ";
        return;
    }
    cout << 0 << " " << 1 << " ";
    int sum = 0;
    for(int i=2; i<=n; i++){
        sum = first + second;
        first = second;
        second = sum;

        cout << sum << " ";
    }

    // return sum;
}

int f[10];
int fib_optimised(int n){
    if(n == 0 || n == 1){
        f[n] = n;
        return n;
    }
    else{
        if(f[n-2] == -1){
            f[n-2] = fib_optimised(n-2);
        }
        if(f[n-1] == -1){
            f[n-1] = fib_optimised(n-1);
        }
    }
    return f[n-2] * f[n-1];
}

int main(){
    cout << fib(10) << endl;
    // cout << fib_iterative(10) << endl;
    fib_iterative(10);
    return 0;
}