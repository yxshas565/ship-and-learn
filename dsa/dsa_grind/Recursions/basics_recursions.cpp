# include <bits/stdc++.h>
using namespace std;

int fun(int n){
    // ....
}

// Printing is done at calling time
// Time complexity : O(n)
// Space complexity : O(n)
void fun1(int n){
    if (n > 0){
        cout << n << " ";
        fun1(n-1);
    }
}

// Printing is done at returning time
// Time complexity : O(n)
// Space complexity : O(n)
void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout << n << " ";
    }
}

// Time complexity : O(2^n)
// Space complexity : O(n)
void fun3(int x){
    if(x > 0){
        if(x > 0){
            cout << x << " ";
            fun3(x-1);
        }
        cout << endl;
        fun3(x-2);
        cout << x << " ";
    }
}

// Time complexity : O(n)
// Space complexity : O(n)
int fun4(int x){
    if(x > 0){
        return fun4(x-1) + x; // it takes actual value of x even though func. is decremented before adding 
    }
    return 0;
}

// Time complexity : O(n)
// Space complexity : O(n)
int fun5(int x){
    static int n = 0; // It is created inside code section and it is only created one time intially when called from main function
    if(x > 0){
        n++;
        return fun5(x-1) - n; // it takes actual value of x even though func. is decremented before adding 
    }
    return 0;
}

int main(){
    int x = 5;
    fun(x) * 2; 

    fun1(x);
    cout << endl;
    fun2(3);
    cout << endl << endl;
    fun3(3);
    cout << endl << endl;

    int a = 5;
    cout << fun4(a);
    cout << endl;
    cout << fun5(3);
    return 0;
}