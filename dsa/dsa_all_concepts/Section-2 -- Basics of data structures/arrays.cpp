#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first_name = "Yashas";
    string last_name = "Sadananda";
    cout << first_name + " " + last_name;
    cout << endl;

    string arr[] = {"XXX", "yyy", "zzzz", "AAAA"};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl
         << endl;

    vector<string> names = {"Yashas", "Surya", "Avish"};
    // -------------------------
    // Adding Elements
    // -------------------------
    names.push_back("XXX");                 // Add at end
    names.insert(names.begin() + 2, "CCC"); // Insert at index 2

    // -------------------------
    // Removing Elements
    // -------------------------
    names.pop_back();                        // Remove last element
    names.erase(names.begin() + 1);          // Remove element at index 1
    names.erase(names.begin(), names.end()); // Remove all elements
    // names.clear();                        // Alternative: Remove all elements

    // -------------------------
    // Utility Functions
    // -------------------------
    names.size();  // Number of elements
    names.empty(); // true if vector is empty
    names.clear(); // Remove all elements

    // -------------------------
    // Modifying Vector
    // -------------------------
    names.assign(5, "Hello"); // Fill vector with 5 copies of "Hello"

    vector<string> other = {"A", "B", "C"};
    names.swap(other); // Swap contents with another vector

    // -------------------------
    // Traversing
    // -------------------------
    for (string x : names)
    {
        cout << x << "\t";
    }

    return 0;
}