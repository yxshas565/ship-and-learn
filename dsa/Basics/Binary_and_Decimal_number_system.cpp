# include <bits/stdc++.h>
using namespace std;


// 1. Decimal to binary system

// --> n = x
// --> divide by 2 
// --> store the remainder
// --> repeat above 2 steps until n != 0
// --> reverse answer

void conversion_str_to_int_vice_versa(){
    string s = "12345";
    int num = stoi(s);
    cout << num;
    int new_num = 12345;
    string s_new = to_string(new_num);
    cout << s_new;
}

int decimal_to_binary_conversion_int_approach(int n){
    int binary_num = 0;
    int i = 1;
    while (n != 0){
        int rem = n % 2;
        binary_num = i * rem + binary_num;
        n /= 2;
        i*=10;
    }
    // int final_num = 0;
    // int j = 1;
    // while (binary_num > 0){
    //     int rem = binary_num % 10;
    //     final_num = j * rem + final_num;
    //     binary_num /= 10;
    //     j*=10;
    // }

    return binary_num;
}

string decimal_to_binary_conversion_string_approach(int n){
    if(n == 0){
        return "0";
    }
    string s = "";
    while (n != 0){
        int rem = n % 2;
        string rem_new = to_string(rem);
        s += rem_new;
        n/=2;
    }

    reverse(s.begin(),s.end());
    return s;
}


int decimal_to_binary_bitwise(int n){
    // any bit on doing bitwise and "&" --> if 1 then that particular bit for num is 1 similarly for 0 
    int ans = 0;
    int i = 1;
    if (n == 0){
        return 0;
    }
    while (n > 0){
        int bit = n & 1;
        ans += (i * bit);
        i*=10;
        n = n >> 1;
    }
    return ans;
}

string decimal_to_binary_conversion_string_approach_using_bitwise(int n){
    string s = "";
    if(n==0){
        return "0";
    }
    while (n != 0){
        int bit = n & 1;
        string rem_new = to_string(bit);
        s += rem_new;
        n = n >> 1;
    }
    reverse(s.begin(),s.end());
    return s;
}

string negative_coversion(int n){
    // Initially we do 2's complement and find ans and then print , also when prnting if MSB is 1 then again 2's complemnet to get final answer
    // Decimal -> 8-bit Binary (Two's Complement)

    if (n == 0)
        return "00000000";

    bool isNegative = (n < 0);
    n = abs(n);

    string s = "";

    // Convert magnitude to binary
    while (n > 0){
        int rem = n % 2;
        string rem_new = to_string(rem);
        s += rem_new;
        n/=2;
        // s += char((n % 2) + '0');
        // n /= 2;
    }

    reverse(s.begin(), s.end());

    // Make it 8 bits
    while (s.length() < 8)
        s = "0" + s;

    // If positive, return directly
    if (!isNegative)
        return s;

    // -----------------------------
    // Step 1 : 1's Complement
    // -----------------------------
    for (char &c : s){
        if (c == '0')
            c = '1';
        else
            c = '0';
    }

    // -----------------------------
    // Step 2 : Add 1 (2's Complement)
    // -----------------------------
    int carry = 1;

    for (int i = s.length() - 1; i >= 0; i--){

        if (carry == 0)
            break;

        if (s[i] == '0'){
            s[i] = '1';
            carry = 0;
        }
        else{
            s[i] = '0';
        }
    }
    return s;
}

int decimal_binary(int n){
    int num = 0;
    int i = 1;
    while(n > 0){
        int rem = n % 10;
        num += i * rem;
        i *= 2;
        n/=10;
    }
    return num;
}

int main(){
    int n = 5;
    string dash = "-";
    
    // cout << "Decimal number : " << n << endl;
    // cout << "Binary number (using normal approach) : " << decimal_to_binary_conversion_int_approach(n) << endl;
    // cout << endl << endl;

    // cout << "Decimal number : " << n << endl;
    // cout << "Binary number (using string approach) : " << decimal_to_binary_conversion_string_approach(n) << endl;
    // cout << endl << endl;

    // cout << "Decimal number : " << n << endl;
    // cout << "Binary number (using bitwise approach) : " << decimal_to_binary_bitwise(n) << endl;
    // cout << endl << endl;

    // cout << "Decimal number : " << n << endl;
    // cout << "Binary number (using string bitwise approach) : " << decimal_to_binary_conversion_string_approach_using_bitwise(n) << endl;
    // cout << endl << endl;


    // cout << negative_coversion(-5);
    cout << "Decimal number : " << decimal_binary(1000000) << endl;
    return 0;
}