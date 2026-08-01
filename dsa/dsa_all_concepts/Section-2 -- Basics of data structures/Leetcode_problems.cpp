# include <bits/stdc++.h>
using namespace std;

// Two sum (2 pointers)
vector<int> twoSum(vector<int>& numbers, int target) {
        int left , right;
        left = 0; right = numbers.size()-1;
        int sum = 0;
        while (left < right){
            sum = numbers[left] + numbers[right];
            if (sum == target){
                vector <int> temp = {left+1, right+1};
                return temp;
            }
            else if (sum > target){
                right --;
            }
            else{
                left++;
            }
        }
    }


void moveZeroes(vector<int>& nums) {
        int i,j;
        i = j = 0;

        while (j < nums.size()){
            if (nums[j] == 0){
                j++;
            }
            else if (nums[j] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                i++;
                j++;
            }
        }

        for (int x : nums){
            cout << x << " ";
        }
}


int maxProfit(vector<int>& prices) {
    int profit = 0;
    int current_min = prices[0];

    for (int i=1; i<prices.size(); i++){
        int current_prof = prices[i] - current_min;
        if (current_prof > profit){
            profit = current_prof;
        }
        current_min = min(current_min,prices[i]);
    }

    return profit;
}

void maxProfit_anoth(vector<int>& prices) {
    // we have to loop in such a way that we have to loop until a particular variable reacghes until end and stop there
    // inside loop we gotta find the next min number such that previously num should be greater than present num and the end of vector shouldnt be enxt number so we can sell 
    // previous and buy on current one and sell similarly again until we find end


    int i,j;
    i = 0;
    j = 1;
    int current_profit = 0;
    int profit = 0;
    int current_min = prices[0];
    int didSell = 0;
    int didBuy = 0;

    if (prices.size() > 1){
        j = 1;
    }
    else if (prices.size() == 2){
        if (prices[1] > prices[0]){
            cout << prices[1] - prices[0];
            return;
        }
        else{
            cout << 0;
            return;
        }
    }
    else{
        cout << 0;
        return;
    }

    while (j < prices.size()){
        didSell = 0;
        if (prices[j] > current_min && prices[j+1] < prices[j]){
            current_profit = prices[j] - current_min;
            didSell = 1;
            profit += current_profit;
            j++;
            didBuy = 0;
        }

        if (j == prices.size()-1 && prices[j] > current_min && didBuy){
            current_profit = prices[j] - current_min;
            profit += current_profit;
        }
        

        if(didSell && j<prices.size()-1){
            current_min = prices[j];
            j++;
            didBuy = 1;
        }
        else{
            current_min = min(current_min,prices[j]);
            j++;
        }
    }

    cout << profit;

}



int maxProfit_anoth_new(vector<int>& prices) {

    // We loop through the prices, buying at local minima
    // and selling at local maxima.

    int i, j;
    i = 0;
    j = 1;

    int current_profit = 0;
    int profit = 0;
    int current_min = prices[0];

    if (prices.size() <= 1) {
        return 0;
    }

    if (prices.size() == 2) {
        if (prices[1] > prices[0])
            return prices[1] - prices[0];
        else
            return 0;
    }

    while (j < prices.size()) {

        // Sell if today is a peak OR it is the last day.
        if ((j == prices.size() - 1) ||
            (prices[j] > current_min && prices[j] > prices[j + 1])) {

            if (prices[j] > current_min) {
                current_profit = prices[j] - current_min;
                profit += current_profit;
            }

            // Buy again from the next day (if it exists)
            if (j < prices.size() - 1)
                current_min = prices[j + 1];
        }
        else {
            current_min = min(current_min, prices[j]);
        }

        j++;
    }

    return profit;
}



bool isPalindrome(string s) {
    // for (int i=0; i<s.length(); i++){
    //     s[i] = tolower(s[i]);
    // }
    string ans = "";
    for (int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if (isalpha(s[i]) || isdigit(s[i])){
            if (isdigit(s[i])){
                char a = char(s[i]);
                ans += a;
            }
            else{
                ans += s[i];
            }
        }
    }

    string org = ans;
    reverse(ans.begin(),ans.end());

    if (ans == org){
        return true;
    }
    else{
        return false;
    }
}


int pivotIndex(vector<int>& nums) {
    int left_sum,right_sum,pivot;
    left_sum = pivot = right_sum = 0;
    int isLeft_right = 0;
    int left_most_index = 0;
    while (pivot < nums.size()){
        left_sum = right_sum = 0;
        if (pivot == 0){
            left_sum = 0;
            for (int i=1; i<nums.size(); i++){
                right_sum += nums[i];
            }
        }
        else{
            for (int i=pivot-1; i>=0; i--){
                left_sum += nums[i];
            }
            for (int i=pivot+1; i<nums.size(); i++){
                right_sum += nums[i];
            }
        }

        if (left_sum == right_sum){
            // if (pivot == 0){
            //     isLeft_right = 1;
            //     left_most_index = pivot;
            // }
            // else{
            //     return pivot;
            // }

            return pivot;
        }
        pivot ++;
    }
    // if (isLeft_right){
    //     return 0;
    // }
    // else{
    //     return -1;
    // }
    return -1;
}


int removeDuplicates(vector<int>& nums) {
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i=0; i<nums.size(); i++){
        if (nums[i] > max){
            max = nums[i];
        }
        if (nums[i] < min){
            min = nums[i];
        }
    }

    // return max;
    
    // vector<int> duplicates(max + 1, 0);
    vector<int> duplicates(max + 1, 0);

    for (int i=0; i<nums.size(); i++){
        int a = nums[i];
        duplicates[a] ++;
    }

    // for (int i=0; i<=max; i++){
    //     cout << duplicates[i] << " ";
    // }

    for (int i=0; i<nums.size(); i++){
        int a = nums[i];
        if (duplicates[a] > 1){
            nums.erase(nums.begin() + i);
            i--;
            duplicates[a]--;
        }
    }


    // for (int i : nums){
    //     cout << i << " ";
    // }


}


int removeDuplicates_new(vector<int> &nums){
    int max = INT_MIN;
int min = INT_MAX;

for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > max)
        max = nums[i];

    if (nums[i] < min)
        min = nums[i];
}

vector<int> duplicates(max - min + 1, 0);


for (int i = 0; i < nums.size(); i++) {
    duplicates[nums[i] - min]++;
}

for (int i = 0; i < nums.size(); i++) {

    if (duplicates[nums[i] - min] > 1) {
        duplicates[nums[i] - min]--;
        nums.erase(nums.begin() + i);
        i--;
    }
}

return nums.size();
}


vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> ans;

    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right) {

        // Move Right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Move Down
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Move Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Move Up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}


double findMaxAverage(vector<int>& nums, int k) {
    double avg = INT_MIN;
    double prev_avg = INT_MIN;
    double a,b;
    double sum = 0;
    double prev_sum = 0;
    a = 0;
    b = (a+k) - 1;
    while (b < nums.size()){
        sum = 0;
        if (a == 0){
            for (int i=a; i<=b; i++){
                sum += nums[i];
                prev_sum = sum;
            }
        }
        else{
            sum = prev_sum - nums[a-1] + nums[b];
            prev_sum = sum;
        }
        
        prev_avg = sum/double(k);

        if (prev_avg > avg){
            avg = prev_avg;
        }
        a++;
        b++;
    }
    return avg;
}



int subarraySum(vector<int>& nums, int k) {
    int prev_sum = INT_MIN;
    int sum = INT_MIN;
    int isBound = 0;

    int a,b;
    a = 0; b = 0;
    int count = 0;
    while (a < nums.size()){
        if (b == nums.size()-1 && a!=b){
            sum = prev_sum + nums[b];
            a+=1;
            b = a;
            prev_sum = sum;
        }
        else{
            if (a == b){
                sum = nums[a];
                prev_sum = sum;
            }
            else{
                sum = prev_sum + nums[b];
                prev_sum = sum;
            }
            b++;
            if (b >= nums.size()){
                isBound = 1;
            }
        }  


        if (prev_sum == k){
            count += 1;
        }

        if(isBound){
            break;
        }
    }
    return count;
}



int subarraySumAnoth(vector<int>& nums, int k) {
    unordered_map<int,int> mp;

    mp[0] = 1;

    int prefix = 0;
    int count = 0;

    for(int i = 0; i < nums.size(); i++) {

        prefix += nums[i];

        if(mp.find(prefix - k) != mp.end())
            count += mp[prefix - k];

        mp[prefix]++;
    }

    return count;
}

int lengthOfLongestSubstring(string s) {
    // unordered_map<char,int> mp;

    // int i,j;
    // i = 0;
    // j = 0;  
    // int longest = INT_MIN;
    // int length = 0;
    // while (j < s.size()){
    //     char a = s[j];

    //     if (j > mp[a]){
    //         length = j-i;
    //         i = mp[a] + 1;
    //         mp[a] = j;
    //         j = i;
    //     }
    //     else{
    //         // mp[a] += 1;
    //         mp[a] = j;
    //         length = (j-i) + 1;
    //     }
    //     if(length > longest){
    //         longest = length;
    //     }
    //     j++;
    // }


    // int i,j;
    // i = 0; j=0;

    // int longest = INT_MIN;
    // int length = 0;

    // while (j < s.size()){
    //     char ch = s[j];
    //     if(j > mp[ch] && mp.find(ch) != mp.end()){
    //         length = j-i;
    //         i++;
    //         j = i;

    //     }
    //     else{
    //         length = j - i + 1;
    //         mp[ch] = j;
    //     }
    //     if(length > longest){
    //         longest = length;
    //     }
    //     j++;
    // } 


    unordered_map<char, int> mp;

    int i = 0, j = 0;

    int longest = 0;

    while (j < s.size()) {
        char ch = s[j];
        if (mp.find(ch) != mp.end() && mp[ch] >= i) {
            i = mp[ch] + 1;
        }

        mp[ch] = j;
        // Current window length
        longest = max(longest, j - i + 1);
        j++;
    }
    
    return longest;
}

int maxSubArray(vector<int>& nums) {
    // int i,j;
    // i = j = 0;
    // int sum = INT_MIN;
    // int prev_sum = INT_MIN;
    // while (j < nums.size()){
    //     if (i == j){
    //         prev_sum = nums[i];
    //         j++;
    //     }
    //     else{
    //         int a = prev_sum + nums[j];
    //         if (a > nums[j] && a > nums[i]){
    //             sum = a;
    //             j++;
    //         }
    //         else{
    //             if(nums[j] > a){
    //                 i = j;
    //                 prev_sum = nums[i];
    //                 j++;
    //             }
    //             else if(nums[i] > a){
    //                 j++;
    //             }
    //         }
    //     }

    //     if (prev_sum > sum){
    //         sum = prev_sum;
    //         prev_sum = sum;
    //     }
    // }
    // return sum;

    int i,j;
    i = j = 0;
    int sum = INT_MIN;
    int prev_sum = INT_MIN;

    i=0; j=1;
    prev_sum = nums[0];
    sum = nums[0];

    while (j < nums.size()){
        // if (i == j && i==0 && j==0){
        //     prev_sum = nums[i];
        //     j++;
        // }
        // else{
            int a = prev_sum + nums[j];
            // int max_num = max(prev_sum,a);

            if (a >= nums[j]){
                prev_sum = a;
                j++;
            }
            // else if (prev_sum > a){
            //     j++;
            // }
            else{
                prev_sum = nums[j];
                i = j;
                j++;
            }
        // }
        
            if (prev_sum > sum) {
                sum = prev_sum;
            }
    }

    return sum;
}



int main(){
    // vector <int> numbers = {-1,0};
    // int target = -1;
    // vector <int> arr = twoSum(numbers,target);

    // for (int x : arr){
    //     cout << x << " ";
    // }

    // cout << endl << endl;;

    // vector <int> nums = {0,1,0,3,12,0,8,5,9,0,0,3,1,6,9,4};
    // moveZeroes(nums);

    // vector <int> profit_loss = {1,2};
    // maxProfit_anoth(profit_loss);

    // cout << isPalindrome("0P");

    // vector <int> pivot = {10,-10,10,-10,0};
    // cout << pivotIndex(pivot);

    // vector <int> duplicates = {1,1,1,1};
    // removeDuplicates(duplicates);
    // int size = duplicates.size();
    // cout << "Size : " << size << endl;
    // for (int x : duplicates){
    //     cout << x << " ";
    // }

    // vector<vector <int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    // spiralOrder(matrix);

    // vector <int> avg = {1,12,-5,-6,50,3};
    // int k = 4;

    // cout << findMaxAverage(avg,k);

    // vector <int> nums = {1,2,3,4};
    // int k = 20;
    // cout << subarraySum(nums,k);

    // string s = "dvdf";
    // cout << lengthOfLongestSubstring(s);


    vector <int> nums = {5,4,-1,7,8};
    cout << maxSubArray(nums);

    return 0;
}
