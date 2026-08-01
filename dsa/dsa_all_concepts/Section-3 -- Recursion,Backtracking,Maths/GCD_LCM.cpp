# include <bits/stdc++.h>
using namespace std;

// GCD or HCF --> greatest common divisor 
// Eg:- 12, 20 --> ans = 4
// Euclid algorithm

int gcd_modulo(int a,int b){
    if (b == 0){
        return a;
    }
    return gcd_modulo(b,a%b);
}

int gcd_subtraction_method(int a, int b){
    if (a == b){
        return a;
    }

    if (a > b){
        return gcd_subtraction_method(a - b, b);
    }

    return gcd_subtraction_method(a, b - a);
}


// LCM --> lowest common multiple
// use this ==> a*b = gcd(a,b) * lcm(a,b)

// so lcm(a,b) = a * b / gcd(a,b);

int lcm(int a, int b){
    return (a*b) / gcd_modulo(a,b);
}

bool isPowerOfTwo(int n) {
    if (n <= 0){
        return false;
    }
    while (n%2 == 0){
        n /= 2;
    }
    return n==1;
}

bool isPowerOfFour(int n) {
    if (n <= 0){
        return false;
    }
    while (n%4 == 0){
        n /= 4;
    }
    return n==1;
}


double myPow(double x, int n) {
    // double prod = 1;
    // int isnegative = 0;
    // if (n < 0){
    //     isnegative = 1;
    // }
    // n = abs(n);
    // for (int i=1; i<=n; i++){
    //     prod *= x;
    // }

    // if (!isnegative){
    //     return prod;
    // }
    // else{
    //     return 1/prod;
    // }


    bool isNegative = false;

    if (n < 0)
        isNegative = true;

    long long exp = n;

    if (exp < 0)
        exp = -exp;

    double ans = 1;

    while (exp > 0) {
        if (exp % 2 == 1){
            ans *= x;
        }
        x *= x;
        exp /= 2;
    }

    if (isNegative){
        return 1.0 / ans;
    }
        
    return ans;
    
}

int climbStairs(int n) {
    
}



int main(){
    // cout << gcd_modulo(18,24);
    // cout << endl;
    // cout << gcd_subtraction_method(18,24);
    // cout << endl;
    // cout << lcm(12,20);
    // cout << isPowerOfTwo(12);
    // cout << isPowerOfFour(65);
    // cout << myPow(2,-2);


//     vector<bool> isPrime(n + 1, true);

// isPrime[0] = false;
// isPrime[1] = false;

// for (int i = 2; i * i <= n; i++) {

//     if (isPrime[i]) {

//         for (int j = i * i; j <= n; j += i) {

//             isPrime[j] = false;
//         }
//     }
// }
    return 0;
}