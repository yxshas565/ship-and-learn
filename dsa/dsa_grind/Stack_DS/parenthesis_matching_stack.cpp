# include <bits/stdc++.h>
using namespace std;

bool parenthesis_matching(string s, stack <char> &st){
    for(int i=0; s[i] != '\0'; i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']'){
            char curr = st.top();
            if(ch == ')' && curr == '('){
                st.pop();
            }
            else if(ch == '}' && curr == '{'){
                st.pop();
            }
            else if(ch == ']' && curr == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    stack <char> st;
    string s = "((({[()]})[{}])({[]})";
    if(parenthesis_matching(s,st)){
        cout << "Valid\n";
    }
    else{
        cout << "Invalid\n";
    }
}