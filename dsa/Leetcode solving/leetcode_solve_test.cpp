# include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int min = INT_MAX;
    int index = 0;
    for (int i=0; i<nums.size(); i++){
        for(int j=i; j<nums.size()-1; j++){
            if (nums[j] < min){
                min = nums[j];
                index = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[index];
        nums[index] = temp;
    }
    for (int x : nums){
        cout << x << " ";
    }
    cout << endl;
    
}


void uniqueOccurrences(vector<int>& arr) {
    int count_arr[arr.size()];
    vector <int> ele_arr;
    vector <int> count_vec;
    int count = 1;
    int ele = 0;
    int index = 0;
    for (int i=0; i<arr.size(); i++){
        count = 0;
        for (int j=0; j<arr.size(); j++){
            if (arr[i] == arr[j]){
                count += 1;
                ele = arr[i];
                index = i;
            }
        }


        int is_present = 0;
        if (i > 0){
            for (int j = i-1; j>=0; j--){
                if (arr[index] == arr[j]){
                    is_present = 1;
                    break;
                }
            }
        }
        else{
            is_present = 0;
        }
        
        if (!is_present){
            count_arr[i] = count;
        }
        else{
            count_arr[i] = -1;
        }
    }

    for (int i=0; i<arr.size(); i++){
        if (count_arr[i] != -1){
            ele_arr.push_back(arr[i]);
            count_vec.push_back(count_arr[i]);
            // cout << "Element " << arr[i] << " occurs " << count_arr[i] << " times" << endl;
        }
    }
    // cout << endl;


    // for (int i=0; i<count_vec.size(); i++){
    //     cout << ele_arr[i] << " occurs " << count_vec[i] << " times" << endl;
    // }

    for (int i=0; i<count_vec.size(); i++){
        int count = 0;
        for (int j=0; j<count_vec.size(); j++){
            if (count_vec[i] == count_vec[j]){
                count += 1;
            }
        }
        if (count > 1){
            cout << "false" << endl;
            return;
        }
    }
    cout << "true" << endl;
    return;

}



int main(){
    vector <int> nums = {1,1,2,2};
    // sortColors(nums);
    uniqueOccurrences(nums);
    return 0;
}