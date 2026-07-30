# include <bits/stdc++.h>
using namespace std;

void func(int n){
    // Time complexity :- O(n)
    // Best case : omega(1)
    // Avg. case : theta(n)
    // Worst case : O(n)


    for (int i=0; i<n; i++){
        if (i == n){ // --> max operations or innermost loop 
            break;
        }
    }


    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            continue;
        }
    }

    for (int i=0; i<n+5; i++){
        continue;
    }


    // Time complexity : O(n) + O(n^2) + O(n) = O(n^2)
}

// Constant complexity
void constantTime(int arr[]) {
    cout << arr[5] << endl;
}

// Logarithmic complexity
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// Sq.root complexity
bool isPrime(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}


// Linear complexity
void printArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}


// n * log(n) complexity
void sortArray(vector<int>& arr) {

    sort(arr.begin(), arr.end());
}


// Quadratic complexity
void bubbleSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

        }

    }

}


// n^2 * log(n) complexity
void sortEachRow(vector<vector<int>>& matrix) {

    int n = matrix.size();

    for (int i = 0; i < n; i++) { // --> O(n)

        sort(matrix[i].begin(), matrix[i].end()); // --> O(n log(n))

    }

    // O(n) * O(n log(n)) = O(n^2 log (n))

}

// 2^n complexity
void subsets(vector<int>& nums, int index) {

    if (index == nums.size()) {
        return;
    }

    // Include
    subsets(nums, index + 1);

    // Exclude
    subsets(nums, index + 1);

}

// Factorial complexity
void permutations(vector<int>& nums, int index) {

    if (index == nums.size()) {
        return;
    }

    for (int i = index; i < nums.size(); i++) {

        swap(nums[index], nums[i]);

        permutations(nums, index + 1);

        swap(nums[index], nums[i]);

    }

}


int main(){

    return 0;
}