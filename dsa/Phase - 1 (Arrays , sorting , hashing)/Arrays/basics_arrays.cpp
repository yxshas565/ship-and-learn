// Array is a data-structure used to store elements of same data type / similar items
// It is of fixed size and has an index using which individual elements can be accessed
// It is by-default pass by reference (C - version)
// It is allocated in a contiguous manner

// We can use both stl version array and C-stype array also so stl type one is not pass by refernce

# include <bits/stdc++.h>
using namespace std;

array<int,5> creation(){
    array<int,5> arr;
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        arr[i] = i*2 + 3 - 8 + 7 ;
    }
    return arr;
}

void print_array(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void linear_search(int arr[], int size, int element){
    for (int i=0; i<size; i++){
        if (arr[i] == element){
            cout << "Element found in index " << i << endl;
            return;
        }
    }
    cout << "Element was not found in array !!" << endl;
}

void binary_search(int arr[], int size, int element){
    int left,right,mid;
    left = 0;
    right = size-1;

    while (left <= right){
        mid = (left + right) / 2;
        if (arr[mid] == element){
            cout << "Element found in index " << mid << endl;
            return;
        }
        else if (arr[mid] > element){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << "Element was not found in array !!" << endl;
}

void reverse_array(int arr[], int size){
    for (int i=0,j=size-i-1; i<size/2,j>size/2; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void swap_alternate(int arr[], int size){
    if (size%2 == 0){
        for (int i=0; i<size; i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    else{
        for (int i=0; i<size-1; i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }   
}

void unique_element(int arr[], int size){
    int count = 0;
    int ele = 0;
    for (int i=0; i<size; i++){
        count = 1;
        for (int j=0; j<size; j++){
            if (i == j){
                continue;
            }
            else{
                if (arr[i] == arr[j]){
                    count++;
                }
            }
        }
        if (count == 1){
            cout << "Unique element : " << arr[i] << endl;
            return;
        }
    }
    cout << "No unique element exists in this array !!" << endl;
    return;
}


void duplicate_element(int arr[], int size){
    int store_count[size];
    vector <int> store_ele;
    int count;
    for (int i=0; i<size; i++){
        count = 0;
        for (int j=0; j<size; j++){
            if (arr[i] == arr[j]){
                count += 1;
            }
        }
        int isPresent = 0;
        if(i > 0){
            for (int j=i-1; j>=0; j--){
                if(arr[i] == arr[j]){
                    isPresent = 1;
                }
            }

            if(!isPresent){
                store_count[i] = count;
            }
            else{
                store_count[i] = -1;
            }
        }
        else{
            store_count[i] = count;
        }
    }
    for (int i=0; i<size; i++){
        if (store_count[i] != -1){
            cout << "Element " << arr[i] << " occurs " << store_count[i] << " times" << endl;
        }
    }
}


void intersection_diff_array(int arr1[], int size1, int arr2[], int size2){
    cout << "First array : ";
    for (int i=0; i<size1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Second array : ";
    for (int i=0; i<size2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    vector <int> intersection_ele;
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++){
            if (arr1[i] == arr2[j]){
                intersection_ele.push_back(arr1[i]);
            }
        }
    }

    // reverse(intersection_ele.begin(),intersection_ele.end());
    cout << "Intersection array : ";
    for (int x : intersection_ele){
        cout << x << " ";
    }
    cout << endl;
}


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *arr = (int *)malloc(2 * sizeof(int));
    int sum = 0;
    for (int i=0; i<numsSize; i++){
        for (int j=i+1; j<numsSize; j++){
            sum = nums[i] + nums[j];
            if (sum == target){
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }
    return arr;
}


vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int sum = 0;
        for (int i=0; i<nums.size(); i++){
            for (int j=i+1; j<nums.size(); j++){
                for (int k=j+1; k<nums.size(); k++){
                    sum = nums[i] + nums[j] + nums[k];
                    vector <int> temp;
                    if (sum == 0){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);

                        sort(temp.begin(),temp.end());

                        ans.push_back(temp);
                    }
                }
            }
        }


        set<vector<int>> unique;

        for (auto triplet : ans) {
            unique.insert(triplet);
        }

        vector<vector<int>> result(unique.begin(), unique.end());

        return result;
    }

vector<vector<int>> reducing_3_sum_problem(vector<int>& nums){
    vector<vector<int>> ans;
    int sum = 0;
    sort(nums.begin(),nums.end());

    for (int i=0; i<nums.size(); i++){
        int left,right;
        left = i+1; right=nums.size()-1;
        int target = -nums[i];
        while (left < right){
            sum = nums[left] + nums[right];
            if (sum == target){
                vector <int> temp;
                temp = {nums[i],nums[left],nums[right]};
                ans.push_back(temp);
                left++;
                right--;
            }
            else if (sum < target){
                left += 1;
            }
            else{
                right -= 1;
            }
        }
    }

    set<vector<int>> unique;
    for (auto triplet : ans) {
        unique.insert(triplet);
    }

    vector<vector<int>> result(unique.begin(), unique.end());
    return result;
}

void sortColors(vector<int>& nums) {
    int min = INT_MAX;
    int i,j;
    int index = 0;
    for (i=0; i<nums.size(); i++){
        min = INT_MAX;
        for (j=i; j<nums.size(); j++){
            if (nums[j] < min){
                min = nums[j];
                index = j;
            }
        }   
        int temp = nums[i];
        nums[i] = nums[index];
        nums[index] = temp;
    }

    return;
}

int main(){
    array <int,5> arr = creation();
    for (int x: arr){
        cout << x << " ";
    }
    cout << endl;


    array <string,5> s = {"Buggati","Ferrari","BMW","Audi","Lamborgini"};
    for (string x : s){
        cout << x << " ";
    }
    cout << endl;


    array <int,100> new_arr = {};
    int i = -24;
    for (int &x : new_arr){
        x = i;
    }
    fill(new_arr.begin(),new_arr.end(),7);
    int size = new_arr.size();
    cout << size << endl;
    for (int x : new_arr){
        cout << x << " ";
    }
    cout << endl;


    int pass_arr[20] = {1,2,3,4,5,6,7,8,9,10};
    int* intial_add = pass_arr;
    cout << intial_add << endl;
    cout << (uintptr_t)intial_add << endl;
    print_array(pass_arr,sizeof(pass_arr)/sizeof(pass_arr[0]));


    cout << endl << endl;

    int check_arr[] = {4,8,1,2,100,56,39,47,200};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i=0; i<sizeof(check_arr)/sizeof(check_arr[0]); i++){
        if (check_arr[i] > max){
            max = check_arr[i];
        }
        if (check_arr[i] < min){
            min = check_arr[i];
        }
    }

    cout << "Min : " << min << " , " << "Max : " << max << endl;

    int arr_linear[] = {1,2,3,4,5,6,7,8,9,10,11};
    linear_search(arr_linear,11,7);
    binary_search(arr_linear,11,7);

    reverse_array(arr_linear,11);
    for (int i=0; i<11; i++){
        cout << arr_linear[i] << " ";
    }
    cout << endl;
    swap_alternate(arr_linear,11);
    for (int i=0; i<11; i++){
        cout << arr_linear[i] << " ";
    }

    int arr_test[] = {1,2,1,3,1,2,3,4,2,4,5,4,4,4,4,4,4,4,4,4,2,3,2,1,2,3,4,5,4,4,2,1,6};
    int size = sizeof(arr_test)/sizeof(arr_test[0]);
    unique_element(arr_test,size);
    cout << endl;
    duplicate_element(arr_test,size);


    int intersection_1[] = {1,2,3,4,5,6};
    int intersection_2[] = {4,5,6,7,8,9,10,1,2,3};

    intersection_diff_array(intersection_1,sizeof(intersection_1)/sizeof(intersection_1[0]),intersection_2,sizeof(intersection_2)/sizeof(intersection_2[0]));
    
    vector <int> nums = {-1,0,1,2,-1,-4};
    vector<vector <int> > final_ans = reducing_3_sum_problem(nums);
    
    for (int i = 0; i < final_ans.size(); i++) {

    for (int j = 0; j < final_ans[i].size(); j++) {
        cout << final_ans[i][j] << " ";
    }

    cout << endl;
}

    vector <int> nums = {2,0,1};
    sortColors(nums);

    for (int x : nums){
        cout << x << " ";
    }
    
    return 0;
}