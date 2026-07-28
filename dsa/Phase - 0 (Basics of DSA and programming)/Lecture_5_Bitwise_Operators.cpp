# include <bits/stdc++.h>
using namespace std;


int bitwise_AND(int a, int b){
    return a&b;
}


int bitwise_OR(int a, int b){
    return a | b;
}


int bitwise_NOT(int a){
    // we should take 2's complement here for number
    return ~a;
}


int bitwise_XOR(int a, int b){
    return a ^ b;
}

int left_shift(int a, int shift){
    // return a << shift;
    return a * pow(2,shift);
}

int right_shift(int a, int shift){
    // return a >> shift;
    return a / pow(2,shift);
}


void fibonacci_series(int n){
    // 0,1,1,2,3,5,8,12,........

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i=1; i<=n; i++){
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}


void prime_or_not(int num){
    int is_prime = 0;

    if (num == 1 || num == 2){
        is_prime = 1;
    }
    else{
        for (int i=2; i<num; i++){
            if (num % i == 0){
                is_prime = 0;
                break;
            }
            else{
                is_prime = 1;
                continue;
            }
        }
    }

    if (is_prime){
        cout << "It is a prime number !!\n";
    }
    else{
        cout << "It is not a prime number !!\n";
    }
}


void find_complement(vector <int> num){
    for (int i=0; i<num.size(); i++){
        if (num[i] == 0){
            num[i] = 1;
        }
        else if(num[i] == 1){
            num[i] = 0;
        }
    }

    for (int x : num){
        cout << x << " ";
    }
}


void decimal_to_binary(int n){
    vector <int> binary;
    while (n > 0){

        if (n==0){
            binary.push_back(0);
            break;
        }

        int digit = n % 2;
        binary.push_back(digit);
        n/=2;
    }

    reverse(binary.begin(),binary.end());

    for (int x: binary){
        cout << x << " ";
    }
    cout << endl;
    find_complement(binary);
}

void reverse_num(int x){
    int reverse_num = 0;
    while (x != 0){
        int digit = x % 10;
        reverse_num = reverse_num * 10 + digit;
        x/=10;
    }

    cout << reverse_num << " ";
}



int main(){
    int a = 5;
    int b = -3;

    cout << bitwise_AND(a,b) << endl;
    cout << bitwise_OR(a,b) << endl;
    cout << bitwise_NOT(a) << endl;
    cout << bitwise_XOR(a,b) << endl;

    cout << left_shift(5,2) << endl; // 20 --> a * 2^b
    cout << right_shift(10,2) << endl; // 2 --> a / 2^b


    fibonacci_series(10);
    cout << endl;
    prime_or_not(21);
    cout << endl;


    decimal_to_binary(128);
    reverse_num(-121);
    
    return 0;
}