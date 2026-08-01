// Hashing

# include <bits/stdc++.h>
using namespace std;

int main(){
    // // Hashing -- set

    // set <int> new_set = {1,2,3,4,1,2,3,4,5,6,0,8,5,100,65,76}; // order maintained
    // unordered_set <int> set_new = {1,2,3,4,1,2,3,4,5,6,0,8,5,100,65,76}; // no order
    // // multi-set --> elements arent unqiue but it will be sorted
    // for (int x : new_set){
    //     cout << x << " ";
    // }

    // cout << endl;

    // for (int x : set_new){
    //     cout << x << " ";
    // }


    // // Hashing map  

    // map<int,int> mp;

    // mp[3] = 30;
    // mp[1] = 10;
    // mp[2] = 20;

    // cout << "Printing Map\n";

    // for(auto it : mp){
    //     cout << it.first << " -> " << it.second << endl;
    // }

    // cout << endl;

    // cout << "Value of key 2 = " << mp[2] << endl;

    // mp.erase(1);

    // cout << "\nAfter Erase\n";

    // for(auto it : mp){
    //     cout << it.first << " -> " << it.second << endl;
    // }


    int arr[10] = {3,7,2,3,2,1,5,6,7,3};

    map <int,int> frequency;

    int count = 0;
    for (int i=0; i<10; i++){
        frequency[arr[i]] ++;
    }

    for (auto it : frequency){
    cout << it.first << " -> " << it.second << endl;
}

    return 0;
}