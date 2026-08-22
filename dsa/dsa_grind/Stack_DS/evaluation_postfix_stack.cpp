#include <bits/stdc++.h>

using namespace std;

int isOperand(char ch){

    if(ch == '+' || ch == '-' ||
       ch == '*' || ch == '/' ||
       ch == '^'){
        return 0;
    }
    else{
        return 1;
    }
}

int operation(int lhs, int rhs, char op){
    if(op == '+'){
        return lhs + rhs;
    }
    else if(op == '-'){
        return lhs - rhs;
    }
    else if(op == '*'){
        return lhs * rhs;
    }
    else if(op == '/'){
        return lhs / rhs;
    }
    else if(op == '^'){
        return pow(lhs, rhs);
    }
    return 0;
}

int evaluate_postfix(string s){
    stack<int> st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(isOperand(ch)){
            st.push(ch - '0');
        }
        else{

            int rhs = st.top();
            st.pop();

            int lhs = st.top();
            st.pop();

            int result = operation(lhs, rhs, ch);
            st.push(result);
        }
    }
    return st.top();
}

int main(){

    string s = "35*62/+4-";

    cout << "Result : "
         << evaluate_postfix(s) << endl;

    return 0;
}