#include <bits/stdc++.h>
using namespace std;

// ------------------------------------------------------------
// Q1. Time compelexity : O(n) , Space compelxity : O(1)
// ------------------------------------------------------------
void func1(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
    }

    cout << sum;
}

// ------------------------------------------------------------
// Q2. Time compelexity : O(log(n)) , Space compelxity : O(1)
// ------------------------------------------------------------
void func2(int arr[], int n) {

    for (int i = 1; i < n; i *= 2) {
        cout << arr[i] << " ";
    }

}

// ------------------------------------------------------------
// Q3. Time compelexity : O(n^2) , Space compelxity : O(1)
// ------------------------------------------------------------
void func3(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << arr[i] + arr[j] << " ";

        }

    }

}

// ------------------------------------------------------------
// Q4. Time compelexity : O(n) , Space compelxity : O(n)
// ------------------------------------------------------------
void func4(int arr[], int n) {

    vector<int> temp;

    for (int i = 0; i < n; i++) { // O(n)

        temp.push_back(arr[i]); // O(1)

    }

}

// ------------------------------------------------------------
// Q5. Time compelexity : O(n) , Space compelxity : O(1)
// ------------------------------------------------------------
void func5(int n) {
    // n --> n/2 --> n/4 --> .....
    for (int i = n; i > 1; i /= 2) { // O(log n)

        for (int j = 0; j < i; j++) { // O(n)

            cout << j << " ";

        }

    }

}

// ------------------------------------------------------------
// Q6. Time compelexity : O(n^2) , Space compelxity : O(n^2)
// ------------------------------------------------------------
void func6(int n) {

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            mat[i][j] = i + j;

        }

    }

}

// ------------------------------------------------------------
// Q7. Time compelexity : O(n) , Space compelxity : O(n)
// ------------------------------------------------------------
void func7(int n) {

    if (n == 0)
        return;

    func7(n - 1);

}

// ------------------------------------------------------------
// Q8. Time compelexity : O(log(n)) , Space compelxity : O(log(n))
// ------------------------------------------------------------
void func8(int n) {

    if (n <= 1)
        return;

    func8(n / 2);

}

// ------------------------------------------------------------
// Q9. Time compelexity : O(2^n) , Space compelxity : O(n+n) --> O(n)
// ------------------------------------------------------------
void func9(int n) {
    // T(n) = 2T(n-1) + 1
    if (n == 0)
        return;

    func9(n - 1);
    func9(n - 1);

}

// ------------------------------------------------------------
// Q10. Time compelexity : O(n!) , Space compelxity : O(n)
// ------------------------------------------------------------
void func10(vector<int>& nums, int index) {

    if (index == nums.size())
        return;

    for (int i = index; i < nums.size(); i++) {

        swap(nums[index], nums[i]);

        func10(nums, index + 1);

        swap(nums[index], nums[i]);

    }

}

// ------------------------------------------------------------
// Q11. Time compelexity : O(n^2) , Space compelxity : O(1)
// ------------------------------------------------------------
void func11(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j++) {

            cout << i + j << " ";

        }

    }

}

// ------------------------------------------------------------
// Q12. Time compelexity : O(n log (n)) , Space compelxity : O(1)
// ------------------------------------------------------------
void func12(int n) {

    for (int i = 1; i <= n; i *= 2) {

        for (int j = 1; j <= n; j++) {

            cout << i * j << " ";

        }

    }

}

// ------------------------------------------------------------
// Q13. Time compelexity : O(n) , Space compelxity : O(n)
// ------------------------------------------------------------
void func13(int n) {

    vector<int> a(n);

    for (int i = 1; i <= n; i *= 2) {

        vector<int> temp(i);

    }

}

// ------------------------------------------------------------
// Q14. Time compelexity : O(n log (n)) , Space compelxity : O(1)
// ------------------------------------------------------------
void func14(int n) {

    for (int i = 0; i < n; i++) { // --> O(n)

        for (int j = 1; j < n; j *= 2) { // --> O(log n)

            cout << i * j << " ";

        }

    }

}

// ------------------------------------------------------------
// Q15 (Hard). Time compelexity : O(n) , Space compelxity : O(log(n))
// ------------------------------------------------------------
void func15(int n) {
    // T(n) = T(n/2) + n
    if (n <= 1) // --> O(n)
        return;

    for (int i = 0; i < n; i++) {

        cout << i << " "; // --> O(n)

    }

    func15(n / 2); // --> O(log n)

}