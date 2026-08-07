// Tower of hanoi
// We must transfer only 1 disc at a time
// We cannot place larger disc on top of smaller disc
// We have to move from tower A to tower C , finally we must get same order

# include <bits/stdc++.h>
using namespace std;

// Time comeplexity : O(2^n)
// Space complexity : O(n)
void TOH(int n, int A , int B , int C){
    if(n > 0){
        TOH(n-1,A,C,B);
        cout << "from " << A << " to " << C;
        cout << endl;
        TOH(n-1,B,A,C);
    }
}

int main(){
    // If 2 disc --> 3 moves
    // If 3 disc --> 7 moves
    // If 4 disc --> 15 moves
    TOH(4,1,2,3);
    return 0;
}