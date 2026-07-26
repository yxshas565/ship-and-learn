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

int main(){
    // subtractProductAndSum(234);
    // hammingWeight(2147483645);
    // reverse(-123);
    // bitwiseComplement(5);
    cout << endl;
}