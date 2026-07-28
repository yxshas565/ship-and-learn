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

vector <int> plusOne(vector<int>& digits) {
    // string s = "";
    // for (int i=0; i<digits.size(); i++){
    //     int b = digits[i];
    //     string a = to_string(b);
    //     s += a;
    // }
    // int orginal_num = stoi(s);
    // orginal_num += 1;

    // string new_s = to_string(orginal_num);
    // int i = 1;
    // if (s.size() == new_s.size()){
    //     while (orginal_num > 0){
    //         int bit = orginal_num % 10;
    //         digits[digits.size() - i] = bit;
    //         i++;
    //         orginal_num /= 10;
    //     }
    // }
    // else{
    //     while (orginal_num > 1){
    //         int bit = orginal_num % 10;
    //         digits[digits.size() - i] = bit;
    //         i++;
    //         orginal_num /= 10;
    //     }
    //     digits.insert(digits.begin(),1);
    // }
    // return digits;


    for (int i=digits.size()-1; i>=0; i--){
        if (digits[i] < 9){
            digits[i] += 1;
            return digits;
        }
        else{
            digits[i] = 0;
        }
    }
    digits.insert(digits.begin(),1);
    return digits;
}

int mySqrt(int x) {
    if (x == 1 || x == 0){
        return x;
    }
    int left,right,mid;
    left = 0;
    right = x;
    

    // while (left <= right){
    //     mid = (left + right) / 2;
    //     if (mid*mid <= x){
    //         return mid;
    //     }
    //     else if (mid*mid > x){
    //         right--;
    //     }
    //     else{
    //         left++;
    //     }
    // }
    int ans = 0;

while(left <= right){

    mid = left + (right-left)/2;

    long long square = 1LL * mid * mid;

    if(square == x){
        return mid;
    }

    else if(square < x){

        ans = mid;          // save possible answer
        left = mid + 1;     // search for a bigger one
    }

    else{

        right = mid - 1;    // search left
    }
}

return ans;
    
}

int addDigits(int num) {
    int sum = INT_MAX;
    while (num >= 10){
        sum = 0;
        while (num > 0){
            int bit = num % 10;
            sum += bit;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

bool isPerfectSquare(int num) {
    if (num == 0 || num == 1){
        return true;
    }
    int left,right,mid;

    left = 0;
    right = num;

    while (left <= right){
        mid = (left + right) / 2;
        long long square = 1LL * mid * mid;
        if (square == num){
            return true;
        }
        else if (square > num){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return false;
}

bool isPowerOfThree(int n) {
    bool isPower = false;
    if (n <= 0){
        isPower = false;
    }
    else if (n == 1){
        isPower = true;
    }
    else{
        while (n%3 == 0){
            n/=3;
        }
        if(n == 1){
            isPower = true;
        }
        else{
            isPower = false;
        }
    }
    return isPower;
}
        

int main(){
    subtractProductAndSum(234);
    hammingWeight(2147483645);
    reverse(-123);
    bitwiseComplement(5);
    cout << reverse_integer(-123);
    cout << isPowerOfTwo(258);

    vector <int> digits = {9,9,9,9,9,9,9,9,9,9,9,9};
    plusOne(digits);

    for (int x : digits){
        cout << x << " ";
    }

    cout << mySqrt(8);
    cout << addDigits(99);

    cout << isPerfectSquare(2000105819);
    cout << isPowerOfThree(45);

    cout << endl;
}