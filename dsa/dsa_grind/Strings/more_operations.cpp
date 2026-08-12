// Only alphabets or numbers are allowed

# include <bits/stdc++.h>
using namespace std;

bool validate_string(string arr){
    for(int i=0; i<arr.size(); i++){
        if((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122) || (arr[i] >= 48 && arr[i] <= 57)){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

void reverse_string(string &s){
    for(int i=0; i<s.size()/2; i++){
        int temp = s[i];
        s[i] = s[s.size()-i-1];
        s[s.size()-i-1] = temp;
    }
}

bool compare_strings(string a, string b){
    for(int i=0; i<max(a.size(),b.size()); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

bool check_palindrome(string s){
    string orginal = s;
    reverse(s.begin(),s.end());

    if(orginal == s){
        return true;
    }
    else{
        return false;
    }
}

void duplicates_string_other_letters(string s){
    for(int i=0; i<s.size(); i++){
        int cnt = 0;
        for(int j=0; j<s.size(); j++){
            if(s[i] == s[j]){
                cnt += 1;
            }
        }

        if(cnt > 1){
            cout << "Duplicates present" << endl;
            return;
        }
    }
    cout << "No duplicates found" << endl;
}

void duplicates_string_hash_table(string s){
    int arr[(122-97) + 1] = {};
    for(int i=0; i<s.size(); i++){
        int num = s[i] - 97;
        arr[num] += 1;
    }

    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > 1){
            cout << "Duplicates present" << endl;
            return;
        }
    }

    cout << "No duplicates found" << endl;
}


void duplicates_string_bits(string s){
    // we need 26 bit but cant get closest is 32 bit
    int H = 0;
    // int x = 0;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        int num = ch - 97;

        if(H & (1 << num) != 0){
            cout << "Duplicates present" << endl;
            return;
        }
        else{
            H = H | (1 << num);
        }
    }
    cout << "No duplicates found" << endl;
}

// anagram our basically 2 strings of same set of alphabets
void check_anagram(string a, string b){
    int arr[122-97 + 1] = {};
    for(int i=0; i<a.size(); i++){
        arr[a[i] - 97] += 1;
    }

    for(int j=0; j<b.size(); j++){
        if(arr[b[j] - 97] != 0){
            arr[b[j] - 97] -= 1;
        }
        else{
            cout << "Not an anagram" << endl;
            return;
        }
    }

    cout << "It is an anagram" << endl;

    // If no duplicate letters then we can use bit set also
}


int main(){
    string s = "Yashas Sadananda";
    if(validate_string(s)){
        cout << "Valid string" << endl;
    }
    else{
        cout << "Invalid string" << endl;
    }

    s = "Python";
    cout << "Orginal string : " << s << endl;
    reverse_string(s);
    cout << "Reversed string : " << s << endl;

    string a = "Painter";
    string b = "Painting";
    if(compare_strings(a,b)){
        cout << "Same string" << endl;
    }
    else{
        cout << "Different string" << endl;
    }

    cout << check_palindrome("bhaiiahB") << endl;

    duplicates_string_other_letters("abcdefghi");
    duplicates_string_hash_table("zabcd");
    duplicates_string_bits("ababab");


    cout << endl << endl;
    check_anagram("verbose","observe");
    return 0;
}