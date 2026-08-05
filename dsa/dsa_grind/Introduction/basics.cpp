# include <bits/stdc++.h>
using namespace std;

void func2(int i){
    int a;
}

void func1(){
    int x;
    func2(x);
}

int main(){
    int a = 5;
    float b = 10.23;
    func1();
    return 0;
}


// functions are usually inside code section intially and then variables are formed inside stack
// level by level inside stack frames.