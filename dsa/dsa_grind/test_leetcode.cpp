# include <bits/stdc++.h>
using namespace std;

void myAtoi(string s) {
        char whitespace = ' ';
        char add_symbol = '+';
        char sub_symbol = '-';
        string new_num = "";
        int isNegative = 0;
        int isDigit_started = 0;

        for (int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch >= 48 && ch < 58){
                // if(ch == '0' && i == 0){
                //     continue;
                // }
                // else{
                //     new_num += ch;
                // }
                new_num += ch;
                isDigit_started = 1;
            }
            else if(ch == whitespace || ch == add_symbol || ch == sub_symbol){
                if(i == 0){
                    if(ch == whitespace || ch == add_symbol){
                        continue;
                    }
                    else{
                        isNegative = 1;
                    }
                }
                else{
                    if(isDigit_started){
                        // return 0;
                        // cout << 0;
                        // return;
                        break;
                    }
                    else if(ch == whitespace && !isDigit_started){
                        continue;
                    }
                    else if((ch == sub_symbol || ch == add_symbol) && !isDigit_started){
                        if(ch == sub_symbol){
                            isNegative = 1;
                        }
                        else{
                            continue;
                        }
                        
                    }
                    else{
                        continue;
                    }
                    break;
                }
            }
            else{
                // return 0;
                // cout << 0;
                // return;
                if (i > 0){
                    break;
                }
                else{
                    cout << 0;
                    return;
                }
                
            }
        }
        cout << new_num << endl;
        int a = stoi(new_num);
        cout << a << endl;
        if(isNegative){
            // return -a;
            cout << -a << endl;
        }
        else{
            cout << a << endl;
        }
    }


double minPrice(vector<int>& prices, vector<int>& discounts) {
    sort(prices.begin(),prices.end());
    sort(discounts.begin(),discounts.end());
    
    reverse(prices.begin(),prices.end());
    reverse(discounts.begin(),discounts.end());

    double p,d;
    
    double sum = 0;
    int store = 0;
    int j;

    for (j=0; j<min(discounts.size(),prices.size()); j++){
        p = prices[j]; d = discounts[j];
        double formula = (p * (100 - d)) / 100;
        // cout << formula << endl;
        sum += formula;
        store = j;
    }


    if(discounts.size() < prices.size()){
        for(int i=j; i<prices.size(); i++){
            sum += prices[i];
        }
    }

    return sum;

}



vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector <vector <int>> final_ans;
    // int sum = 0;
    // for (int i=0; i<candidates.size(); i++){
    //     sum = 0;
    //     vector <int> temp;
    //     int ele = candidates[i];
    //     if(target % candidates[i] == 0){
    //         temp = vector<int> (target/candidates[i],candidates[i]);
    //     }

    //     else{
    //         int mod = target%candidates[i];
    //         for(int i=0; i<candidates.size(); i++){
    //             if(candidates[i] == mod){
    //                 temp = vector <int> (target/candidates[i],);
    //             }
    //         }
    //     }


    //     final_ans.push_back(temp);

    // }


    int sum = 0;
    int i,j;
    i = 0;
    j = 0;
    while(i<candidates.size()){
        vector <int> temp;
        int k = i;
        int mod = target % candidates[i];
        int val = target / candidates[i];
        if(mod == 0){
            temp = vector <int> (target/candidates[i],candidates[i]);
        }
        else{
            for(int i=0; i<candidates.size(); i++){
                if(mod == candidates[i]){
                    temp = {candidates[i],candidates[k],candidates[k],candidates[k]};
                }
                else{
                    int new_val = target-val;
                    // again we have to loop such that to find 
                }
            }
        }
    }
}



int maxSubarrayLength(vector<int>& nums, int k) {
    int max = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }

    vector <int> hash_table(max+1);
    vector <int> store_final;

    vector <int> temp;
    for (int i=0; i<nums.size(); i++){
        int current_cnt = hash_table[nums[i]];
        if(current_cnt >= k){
            break;
        }
        else{
            temp.push_back(nums[i]);
        }
        hash_table[nums[i]] += 1;
    }


    if(store_final.size() < temp.size()){
        store_final = temp;
    }

    return store_final.size();
}


int longestSubsequence(vector<int>& nums) {
        // int i,j;
        // i = 0;
        // j = 1;

        // int max_len = 0;
        // int result = 0;
        // int XOR_check = 0;

        // if(nums.size() == 2){
        //     if(nums[0] ^ nums[1]){
        //         return 2;
        //     }
        //     else{
        //         return 1;
        //     }
        // }

        // while(j<nums.size()){
        //     if(i==0 && j==1){
        //         XOR_check = nums[i] ^ nums[j];
        //     }
        //     else{
        //         XOR_check = result ^ nums[j];
        //     }

        //     result = XOR_check;

        //     if(XOR_check){
        //         if(j-i+1 > max_len){
        //             max_len = j-i + 1;
        //         }
        //         j++;
        //     }
        //     else{
        //         i++;
        //         j=i+1;
        //     }
        // }

        // return max_len;


        // int i,j;
        // i = 0;
        // j = 1;

        // int max_len = 0;
        // int XOR_check = 0;
        // int result = 0;

        // if(nums.size() == 2){
        //     if(nums[0] ^ nums[1]){
        //         return 2;
        //     }
        //     else{
        //         return 1;
        //     }
        // }

        // while(i<nums.size()-1){
        //     int curr_len = 0;
        //     if(j-i == 1){
        //         result = 0;
        //         XOR_check = nums[i] ^ nums[j];
        //     }
        //     else{
        //         XOR_check = result ^ nums[j];
        //     }

        //     result = XOR_check;

        //     if(j == nums.size()-1){
        //         if(result){
        //             curr_len = j-i + 1;
        //             i++;
        //             j = i+1;
        //         }
        //         else{
        //             i++;
        //             j = i+1;
        //         }
        //     }
        //     else{
        //         j++;
        //     }

        //     if(curr_len > max_len){
        //         max_len = curr_len;
        //     }
        // }

        // return max_len;
        bool non_zero_exists = true;
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            int XOR = result ^ nums[i];
            if(nums[i] > 0){
                non_zero_exists = true;
            }
            result = XOR;
        }

        if(result){
            return nums.size();
        }
        else{
            if(non_zero_exists){
                return nums.size()-1;
            }
            else{
                return 0;
            }
        }
    }

int maximumLengthSubstring(string s) {
        int hash_table[26+1] = {};
        int i,j;
        i = j = 0;

        int max_len = 0;

        while(j < s.size()){
            int curr_len = 0;
            char ch = s[j];
            int cnt = hash_table[ch - 97 + 1];

            if(cnt >= 2){
                // curr_len = j-i;
                for(int k=i; k<=j; k++){
                    hash_table[s[k] - 97 + 1] -= 1;
                    if(s[k] == ch){
                        i = k+1;
                        // j++;
                        break;
                    }
                }   

                curr_len = j-i+1;
            }
            else{
                hash_table[ch - 97 + 1] += 1;
                curr_len = j-i+1;
                j++;
            }

            if(curr_len > max_len){
                max_len = curr_len;
            }
        }

        return max_len;


    }


void longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
        int size = queryCharacters.size();
        vector <int> length;
        for(int i=0; i<size; i++){
            int index = queryIndices[i];
            char ch = queryCharacters[i];
            s[index] = ch;

            int hash_table[27] = {};


            // map <char,int> mp;

            // for(int i=0; s[i] != '\0'; i++){
            //     if(mp[s[i]] == 0){
            //         mp[s[i]] = 1;
            //         hash_table[s[i] - 97 + 1] = i;
            //     }
            //     else{
            //         int val = hash_table[s[i] - 97];
            //         if(val+1 == i){
            //             mp[s[i]] += 1;
            //         }
            //         else{
                         
            //         }
            //     }
            // }

            vector<pair<char, int>> runs;

            int count = 1;

            for(int i = 0; i < s.size(); i++){

                if(i > 0 && s[i] == s[i-1]){
                    count++;
                }
                else{
                    if(i > 0){
                        runs.push_back({s[i-1], count});
                    }

                    count = 1;
                }
            }

            runs.push_back({s.back(), count});

            int max = INT_MIN;

            // for(auto x : mp){
            //     if(x.second > max){
            //         max = x.second;
            //     }
            // }

            for(auto p : runs){
                if(p.second > max){
                    max = p.second;
                }
            }
            

            length.push_back(max);
        }   

        for(int i : length){
            cout << i << " ";
        }
    }


int main(){
    // myAtoi(" -042");
    // vector <int> arr1 = {7,3,9};
    // vector <int> arr2 = {100,100};
    // cout << minPrice(arr1,arr2);


    // vector <int> nums = {5,5,5,5,5,5,5};
    // cout << maxSubarrayLength(nums,4);

    // vector <int> check = {2,3,4};
    // cout << longestSubsequence(check);

    // string s = "dcfdddccb";
    // cout << maximumLengthSubstring(s);


    string ch = "dbgmcagale";
    string queryCharacters = "mf";
    vector <int> queryIndices = {5,0};


    longestRepeating(ch,queryCharacters,queryIndices);

    return 0;
}