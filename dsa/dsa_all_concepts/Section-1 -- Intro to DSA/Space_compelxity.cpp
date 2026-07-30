# include <bits/stdc++.h>
using namespace std;

// O(1) --> space compelxity
int findMax(int arr[], int n) {
    int maxi = arr[0];
    for (int i = 1; i < n; i++) {

        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
}

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}


// Space compelxity : O(n)
vector<int> copyArray(int arr[], int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(arr[i]);
    }
    return ans;
}


void frequencyArray(int arr[], int n) {
    vector<int> freq(n);
}


vector<int> reverseArray(int arr[], int n) {
    vector<int> rev;
    for (int i = n - 1; i >= 0; i--)
        rev.push_back(arr[i]);
    return rev;
}



// Space complexity : O(n^2)
vector<vector<int>> matrix(int n) {
    vector<vector<int>> mat(n, vector<int>(n));
    return mat;
}


// Space complexity : O(log n)
int binarySearch(int arr[], int low, int high, int target) {
    // Recursion stack --> calls function gaain and again reducing n --> n/2 each time
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] < target)
        return binarySearch(arr, mid + 1, high, target);

    return binarySearch(arr, low, mid - 1, target);
}

// Space compelxity : O(n)
void print(int n) {
    if (n == 0)
        return;
    print(n - 1);
    // Recursive stack calls function n times here 
}


// Space complexity : O(n)
void subsets(vector<int>& nums, int index) {
    if (index == nums.size())
        return;

    subsets(nums, index + 1);

    subsets(nums, index + 1);
}

// Time : O(n!) . Space : O(n)
void permutations(vector<int>& nums, int index) {
    if (index == nums.size())
        return;

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        permutations(nums, index + 1);
        swap(nums[index], nums[i]);
    }
}


int main(){
    return 0;
}