# include <bits/stdc++.h>
using namespace std;

void pattern_star(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "* "; 
        }
        cout << endl;
    }
    cout << endl;
}

void num_pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << i+1 << " "; 
        }
        cout << endl;
    }
    cout << endl;
}

void num_diff_pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void num_diff_reverse_pattern(int n){
    int a = n;
    for (int i=0; i<n; i++){
        a = n;
        for (int j=0; j<n; j++){
            cout << a << " ";
            a--;
        }
        cout << endl;
    }
    cout << endl;
}

// 1 2 3
// 4 5 6
// 7 8 9


void num_patter_all(int n){
    int a = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    cout << endl;
}


void cone_pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}


void cone_num_pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void cone_num_all_pattern(int n){
    int a = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    cout << endl;
}

// 1
// 1 2
// 2 3 4
// 4 5 6 7

void diff_cone_pattern(int n){
    for (int i=0; i<n; i++){
        int a = i+1;
        for (int j=0; j<i+1; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    cout << endl;
}


// 1
// 2 1
// 3 2 1
// 4 3 2 1

void cone_reverse_num_right(int n){
    for (int i=0; i<n; i++){
        int a = i+1;
        for (int j=0; j<i+1; j++){
            cout << a << " ";
            a--;
        }
        cout << endl;
    }
    cout << endl;
}


void char_pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << char(i+65) << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void char_inverted_pattern(int n){
    for (int i=0; i<n; i++){
        char ch = 'A';
        for (int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;
}

void char_all_pattern(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;
}


void char_all_repeat_pattern(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        ch = ch + i;
        for (int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
        ch = 'A';
    }
    cout << endl;
}


void cone_char_pattern(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << char(ch + i) << " ";
        }   
        cout << endl;
    }
    cout << endl;
}



void cone_char_all_pattern(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << ch << " ";
            ch++;
        }   
        cout << endl;
    }
    cout << endl;
}


void cone_char_repeated_pattern(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        ch = ch + i;
        for (int j=0; j<i+1; j++){
            cout << ch << " ";
            ch++;
        }   
        ch = 'A';
        cout << endl;
    }
    cout << endl;
}

void cone_char_reverse_pattern(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        ch = ch + n - i - 1;
        for (int j=0; j<i+1; j++){
            cout << ch << ' ';
            ch++;
        }   
        ch = 'A';
        cout << endl;
    }
    cout << endl;
}


void square_char_2_repetative(int n){
    char ch = 'A';
    for (int i=0; i<n; i++){
        ch = ch + i;
        for (int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        ch = 'A';
        cout << endl;
    }
    cout << endl;
}



void inverted_cone(int n){
    for (int i=0; i<n; i++){
        for (int j=n-1-i; j>0; j--){
            cout << "  ";
        }
        for (int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void ulta_inverted_cone(int n){
    for (int i=0; i<n; i++){
        for (int j=n-i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}


void ulta_inverted_cone_reverse(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            cout << "  ";
        }
        for (int j=n-i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}



int main(){
    int n= 5;
    pattern_star(n);
    num_pattern(n);
    num_diff_pattern(n);
    num_diff_reverse_pattern(n);
    num_patter_all(n-2);
    cone_pattern(4);
    cone_num_pattern(4);
    cone_num_all_pattern(4);
    diff_cone_pattern(4);
    cone_reverse_num_right(9);
    char_pattern(4);
    char_inverted_pattern(4);
    char_all_pattern(4);
    char_all_repeat_pattern(4);
    cone_char_pattern(4);
    cone_char_all_pattern(4);
    cone_char_repeated_pattern(4);
    cone_char_reverse_pattern(4);
    square_char_2_repetative(3);
    inverted_cone(4);
    ulta_inverted_cone(4);
    ulta_inverted_cone_reverse(4);
    return 0;
}