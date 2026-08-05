# include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n)
// Space complexity : O(n)
void tail_recursion(int n){
    if(n > 0){
        cout << n << " ";
        tail_recursion(n-1);
    }
}

// Time complexity : O(n)
// Space complexity : O(1)
void tail_loop(int n){
    for (int i=n; i>0; i--){
        cout << i << " ";
    }
}


// Time complexity : O(n)
// Space complexity : O(n)
void head_recursion(int n){
    if(n > 0){
        head_recursion(n-1);
        cout << n << " ";
    }
}

// Time complexity : O(n)
// Space complexity : O(1)
void head_loop(int n){
    for (int i=1; i<=n; i++){
        cout << i << " ";
    }
}


// Time complexity : O(n)
// Space complexity : O(n)
void linear_recursion(int n){
    if(n>0){
        n-=2;
        linear_recursion(n-1);
        n+=2;
    }
}

// Time complexity : O(2^n)
// Space complexity : O(n)
void tree_recursion(int n){
    if(n > 0){
        cout << n << " ";
        tree_recursion(n-1);
        tree_recursion(n-1);
    }
}

void indirect_recursion(int n);
void anoth(int n);

// Time complexity : O(log n)
// Space complexity : O(log n)
void indirect_recursion(int n){
    if(n>0){
        cout << n << " ";
        anoth(n-1);
    }
}

// Time complexity : O(log n)
// Space complexity : O(log n)
void anoth(int n){
    if(n>1){
        cout << n << " ";
        indirect_recursion(n/2);
    }
}

// Time complexity : O(n)
// Space complexity : O(n)
int nested_recursion(int n){
    if(n > 100){
        return n-10;
    }
    else{
        return nested_recursion(nested_recursion(n+11));
    }
}

int main(){
    tail_recursion(5);
    cout << endl;
    tail_loop(10);
    cout << endl;
    head_recursion(7);
    cout << endl;
    head_loop(3);
    cout << endl;
    linear_recursion(3);
    cout << endl;
    tree_recursion(5);
    cout << endl;
    indirect_recursion(3);
    cout << endl;
    cout << nested_recursion(95) << endl;
    return 0;
}