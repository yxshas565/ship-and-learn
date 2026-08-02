# include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack <char> ch;
    int length = s.length();

    for (int i=0; i<length; i++){
        char a = s[i];
        if (a == '(' || a == '{' || a == '['){
            ch.push(a);
        }
        else if(a == ')' || a == '}' || a == ']'){
            if(ch.empty()){
                return false;
            }
            char b = ch.top();
            if (a == ')' && b == '('){
                ch.pop();
            }
            else if (a == '}' && b == '{'){
                ch.pop();
            }
            else if (a == ']' && b == '['){
                ch.pop();
            }
            else{
                return false;
            }
        }
    }

    if(ch.empty()){
        return true;
    }
    else{
        return false;
    }
}

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector <int> store_ans;
    int index = 0;
    int j;
    for (int i=0; i<nums1.size(); i++){
        for (j=0; j<nums2.size(); j++){
            if (nums1[i] == nums2[j]){
                index = j;
                break;
            }
        }
        int isFound = 0;
        if(j+1 < nums2.size()){
            for (int k=j+1; k<nums2.size(); k++){
                if(nums2[k] > nums1[i]){
                    store_ans.push_back(nums2[k]);
                    isFound = 1;
                    break;
                }
                else{
                    isFound = 0;
                }
            }

            if(!isFound){
                store_ans.push_back(-1);
            }
        }
        else{
            store_ans.push_back(-1);
        }
    }       

    return store_ans;
}


vector<int> nextGreaterElements(vector<int>& nums) {
    vector <int> store_ans;
    int n = nums.size();
    int index = 0;
    for (int i=0; i<nums.size(); i++){
        index = i;
        int j = ((i+1)%(n));
        int isFound = 0;
        while (j%n != index){
            if(nums[j%n] > nums[i]){
                store_ans.push_back(nums[j%n]);
                isFound = 1;
                break;
            }
            isFound = 0;
            j++;
        }   
        if(!isFound){
            store_ans.push_back(-1);
        }
    }
    return store_ans;
}


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    // deque <int> store_nums;
    //     int i,j;
    //     i = j = 0;
    //     vector <int> max_arr;
    //     int max = INT_MIN;
    //     while (j <= nums.size()){
    //         j = i;
    //         max = INT_MIN;
    //         for (int i=0; i<k; i++){
    //             // if(nums[j] > max){
    //             //     max = nums[j];
    //             // }
    //             if(store_nums.empty()){
    //                 store_nums.push_front(nums[j]);
    //             }
    //             else{
    //                 int a = store_nums.pop_back();
    //                 if (nums[j] > a){
    //                     store_nums.push_back(nums[j]);
    //                 }
    //             }
    //             j++;
    //         }
    //         max_arr.push_back(max);
    //         i++;
    //         j++;
    //     }
    //     return max_arr;

    deque<int> store_nums;      
    vector<int> max_arr;

    int i = 0;
    int j = 0;

    while (j < nums.size()) {
        while (!store_nums.empty() && store_nums.front() <= j - k) {
            store_nums.pop_front();
        }

        while (!store_nums.empty() && nums[store_nums.back()] <= nums[j]) {
            store_nums.pop_back();
        }

        store_nums.push_back(j);

        if (j >= k - 1) {
            max_arr.push_back(nums[store_nums.front()]);
            i++;
        }

        j++;
    }

    return max_arr;
}

int main(){
    // stack <int> my_stack;
    // my_stack.push(5);
    // my_stack.push(10);

    // while(!my_stack.empty()){
    //     cout << my_stack.top() << endl;
    //     my_stack.pop();
    // }

    // Parenthesis checker --> (), {} , []
    // cout << isValid("()[]{}");

    // vector<int> nums1 = {2,4};
    // vector<int> nums2 = {1,2,3,4};
    // vector<int> ans = nextGreaterElement(nums1,nums2);

    // for (int i : ans){
    //     cout << i << " ";
    // }

    // vector <int> new_arr = {1,2,3,4,3};
    // vector <int> final_ans = nextGreaterElements(new_arr);

    // for (int i: final_ans){
    //     cout << i << " ";
    // }

    // queue <int> my_queue;
    // my_queue.push(1);
    // my_queue.push(10);
    // my_queue.push(20);

    // // so on poping front element or first inserted element is poped here
    // my_queue.pop();
    // cout << my_queue.front() << " ";
    // cout << my_queue.back() << " "; 

    vector <int> my_arr = {1,2,3};
    int k = 1;
    vector<int> ans = maxSlidingWindow(my_arr,k);
    for (int x : ans){
        cout << x << " ";
    }

    return 0;
}