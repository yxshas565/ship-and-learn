#include <bits/stdc++.h>

using namespace std;

// +,- --> pre. 1
// *,/ --> pre. 3
// ^    --> pre. 6 (out), 5 (in)
// (    --> pre. 7 (out), 0 (in)
// )    --> pre. 0

int isOperand(char ch){

    if(ch == '+' || ch == '-' ||
       ch == '*' || ch == '/' ||
       ch == '^' || ch == '(' || ch == ')'){
        return 0;
    }
    else{
        return 1;
    }
}

int pre_out(char ch){

    if(ch == '+' || ch == '-'){
        return 1;
    }
    else if(ch == '*' || ch == '/'){
        return 3;
    }
    else if(ch == '^'){
        return 6;
    }
    else if(ch == '('){
        return 7;
    }
    else if(ch == ')'){
        return 0;
    }

    return 0;
}

int pre_in(char ch){

    if(ch == '+' || ch == '-'){
        return 2;
    }
    else if(ch == '*' || ch == '/'){
        return 4;
    }
    else if(ch == '^'){
        return 5;
    }
    else if(ch == '('){
        return 0;
    }

    return 0;
}

string infix_to_postfix(string s){

    stack<char> st;
    string exp = "";

    for(int i = 0; i < s.size(); i++){

        char ch = s[i];

        if(isOperand(ch)){
            exp += ch;
        }

        else{
            if(st.empty()){
                st.push(ch);
            }
            else if(ch == ')'){
                while(!st.empty() && st.top() != '('){
                    exp += st.top();
                    st.pop();
                }

                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
            }
            else{
                int current_prec = pre_out(ch);
                int stack_top_prec = pre_in(st.top());

                if(current_prec > stack_top_prec){

                    st.push(ch);
                }
                else{
                    while(!st.empty() &&
                          pre_in(st.top()) >= pre_out(ch)){

                        exp += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
            }
        }
    }

    while(!st.empty()){

        exp += st.top();
        st.pop();
    }

    return exp;
}

int main(){

    string s = "((a+b)*c)-d^e^f";

    cout << "Postfix expression : "
         << infix_to_postfix(s) << endl;
    return 0;
}