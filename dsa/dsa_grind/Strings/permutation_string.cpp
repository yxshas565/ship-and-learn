// Eg :- abc --> TOTAL n! permutations
// State space tree --> it's used to find all possible permuations
// We have to use backtracking
// Recursion and brute force 


# include <bits/stdc++.h>
using namespace std;

/*

                             res = [ ][ ][ ]
                                k = 0
                             a = [0,0,0]
                                   │
                  ┌────────────────┼────────────────┐
                  │                │                │
               choose A         choose B         choose C
                  │                │                │
             res=[A][ ][ ]    res=[B][ ][ ]    res=[C][ ][ ]
             a=[1,0,0]         a=[0,1,0]         a=[0,0,1]
                  │                │                │
             k = 1             k = 1             k = 1
             /    \             /    \             /    \
            /      \           /      \           /      \
           B        C         A        C         A        B
           │        │         │        │         │        │
        [A,B,_]  [A,C,_]  [B,A,_]  [B,C,_]  [C,A,_]  [C,B,_]
           │        │         │        │         │        │
           C        B         C        A         B        A
           │        │         │        │         │        │
        [A,B,C]  [A,C,B]  [B,A,C]  [B,C,A]  [C,A,B]  [C,B,A]
           │        │         │        │         │        │
          ABC      ACB       BAC      BCA       CAB      CBA


*/


void permutation_string(string s, int k){
    static int res[10];
    static int a[10];    
    int i;

    if(s[k] == '\0'){
        res[k] = '\0';
        for(int i=0; res[i] != '\0'; i++){
            cout << char(res[i]);
        }
        cout << endl;
    }
    else{
        for(int i=0; s[i] != '\0'; i++){
            if(a[i] == 0){
                res[k] = s[i];
                a[i] = 1;
                permutation_string(s,k+1);
                a[i] = 0;
            }
        }
    }
}


/*

                             ABC
                              │
                 ┌────────────┼────────────┐
                 │            │            │
              i=0           i=1          i=2
           swap(0,0)      swap(0,1)    swap(0,2)
                 │            │            │
                 ABC          BAC          CBA
                 │            │            │
             low=1        low=1        low=1
             /    \       /    \       /    \
            /      \     /      \     /      \
       i=1          i=2 i=1    i=2  i=1      i=2
     swap(1,1)    swap(1,2) swap(1,1) swap(1,2) swap(1,1) swap(1,2)
         │            │       │        │       │        │
         ABC          ACB     BAC      BCA     CBA      CAB
         │            │       │        │       │        │
       PRINT        PRINT    PRINT    PRINT   PRINT    PRINT

*/



void permutation_swaps(string s, int low, int high){
    // static int j = 0;
    if(low == high){
        cout << s << endl;
    }

    else{
        for(int i=low; i<=high; i++){
            int temp = s[low];
            s[low] = s[i];
            s[i] = temp;
            // j++;
            permutation_swaps(s,low+1,high);
            // j++;
            temp = s[low];
            s[low] = s[i];
            s[i] = temp;
        }
    }
}

int main(){
    string s = "ABC";
    int length = 0;
    int i = 0;
    while(s[i] != '\0'){
        length += 1;
        i++;
    }
    cout << length << endl;
    permutation_string(s,0);
    permutation_swaps(s,0,s.size()-1);
    return 0;
}