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

int main(){
    // myAtoi(" -042");
    // vector <int> arr1 = {7,3,9};
    // vector <int> arr2 = {100,100};
    // cout << minPrice(arr1,arr2);


    vector <int> nums = {5,5,5,5,5,5,5};
    cout << maxSubarrayLength(nums,4);
    return 0;
}