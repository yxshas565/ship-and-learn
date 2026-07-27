# include <bits/stdc++.h>
using namespace std;

void subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int result = 0;
        while (n != 0){
            int digit = n % 10;
            cout << digit << endl;
            sum += digit;
            prod *= digit;

            n/=10;
        }
        result = prod - sum;
        cout << sum << " " << prod << " " << result << " ";
    }

void hammingWeight(int n) {
        vector<int> arr;
        while (n != 1){
            int digit = n % 2;
            arr.push_back(digit);
            n /= 2;
        }

        arr.push_back(1);
        
        int count = 0;
        for (int x : arr){
            if (x){
                count += 1;
            }
        }

        cout << count;

        // We can also use (n & 1) --> to check last bit and count directly  
    }


void reverse(int x) {
        int reverse_num = 0;
        while (x != 0){
            int rem = x % 10;
            reverse_num = (reverse_num * 10) + rem;
            x /= 10;
        }
        cout << reverse_num << endl;
        
    }

void bitwiseComplement(int n) {
    vector<int> bits;
    while (n > 0) {
        bits.push_back(n % 2);
        n /= 2;
    }

    reverse(bits.begin(), bits.end());
    for (int i=0; i<bits.size(); i++){
        if (bits[i] == 0){
            bits[i] = 1;
        }
        else if(bits[i] == 1){
            bits[i] = 0;
        }
    }

    int result = 0;
    for (int i=0; i<bits.size(); i++){
        result = result + (pow(2,bits.size()-i-1) * bits[i]);
    }

    cout << result;
}


int reverse_integer(int x) {
    string reverse_num = "";
    bool is_negative = false;
    if (x < 0){
        x = abs(x);
        is_negative = true;
    }
    int i = 1;
    while (x > 0){
        int digit = x % 10;
        string new_str = to_string(digit);
        reverse_num += new_str;
        x /= 10;
    }
    int final_ans = stoi(reverse_num);
    if (is_negative){
        final_ans = -final_ans;    
    }
    return final_ans;
}


bool isPowerOfTwo(int n) {
        if (n <= 0){
            return false;
        }
        if (n == 1){
            return true;
        }
        if (n%2 != 0){
            return false;
        }
        while(n != 1){
            int check = n/2;
            if (check % 2 != 0 && check != 1){
                return false;
            }
            n/=2;
        }
        return true;
    }

int main(){
    subtractProductAndSum(234);
    hammingWeight(2147483645);
    reverse(-123);
    bitwiseComplement(5);
    cout << reverse_integer(-123);
    cout << isPowerOfTwo(258);
    cout << endl;
}