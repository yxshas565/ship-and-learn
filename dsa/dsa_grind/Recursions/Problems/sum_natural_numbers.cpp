/// Sum of first 'n' natural numbers
// We use formula = n(n+1) / 2

# include <bits/stdc++.h>
using namespace std;

// Time complexity : O(n)
// Space complexity : O(n)
int sum_natural_numbers(int n){
    static int sum = 0;
    if(n == 0){
        return sum;
    }
    else{
        // sum += n; // called during calling phase
        sum_natural_numbers(n-1);
        sum += n; // called during returning phase
    }
}

// Time complexity : O(n)
// Space complexity : O(n)
int sum_anoth(int n){
    if(n == 0){
        return 0;
    }
    return sum_anoth(n-1) + n;
}

// Time complexity : O(n)
// Space complexity : O(1)
int sum_itertaive(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

// Time complexity : O(1)
// Space complexity : O(1)
int sum_formula(int n){
    return (n*(n+1)) / 2;
}

int main(){
    cout << sum_natural_numbers(10) << endl;
    cout << sum_anoth(5) << endl;
    cout << sum_itertaive(8) << endl;
    cout << sum_formula(20) << endl;
    return 0;
}