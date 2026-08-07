# include <bits/stdc++.h>
using namespace std;

void myAtoi(string s) {
        char whitespace = ' ';
        char add_symbol = '+';
        char sub_symbol = '-';
        string new_num = "";
        int isNegative = 0;
        int isDigit_started = 0;

        for (int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch >= 48 && ch < 58){
                // if(ch == '0' && i == 0){
                //     continue;
                // }
                // else{
                //     new_num += ch;
                // }
                new_num += ch;
                isDigit_started = 1;
            }
            else if(ch == whitespace || ch == add_symbol || ch == sub_symbol){
                if(i == 0){
                    if(ch == whitespace || ch == add_symbol){
                        continue;
                    }
                    else{
                        isNegative = 1;
                    }
                }
                else{
                    if(isDigit_started){
                        // return 0;
                        // cout << 0;
                        // return;
                        break;
                    }
                    else if(ch == whitespace && !isDigit_started){
                        continue;
                    }
                    else if((ch == sub_symbol || ch == add_symbol) && !isDigit_started){
                        if(ch == sub_symbol){
                            isNegative = 1;
                        }
                        else{
                            continue;
                        }
                        
                    }
                    else{
                        continue;
                    }
                    break;
                }
            }
            else{
                // return 0;
                // cout << 0;
                // return;
                if (i > 0){
                    break;
                }
                else{
                    cout << 0;
                    return;
                }
                
            }
        }
        cout << new_num << endl;
        int a = stoi(new_num);
        cout << a << endl;
        if(isNegative){
            // return -a;
            cout << -a << endl;
        }
        else{
            cout << a << endl;
        }
    }

int main(){
    myAtoi(" -042");
    return 0;
}