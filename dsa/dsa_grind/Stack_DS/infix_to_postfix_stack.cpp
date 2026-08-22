#include <bits/stdc++.h>

using namespace std;

// +,- --> pre. 1
// *,/ --> pre. 2

int isOperand(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return 0;
    }
    else{
        return 1;
    }
}

int pre(char ch){
    if(ch == '+' || ch == '-'){
        return 1;
    }
    else if(ch == '*' || ch == '/'){
        return 2;
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

            else{

                int stack_top_prec = pre(st.top());
                int current_prec = pre(ch);

                if(stack_top_prec < current_prec){
                    st.push(ch);
                }

                else{
                    while(!st.empty() && pre(st.top()) >= pre(ch)){
                        char at_top = st.top();
                        st.pop();

                        exp += at_top;
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

    string s = "a+b*c-d/e";

    cout << "Postfix expression : "
         << infix_to_postfix(s) << endl;

    return 0;
}