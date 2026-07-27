// Switch cases and functions
// Replacemnet and concise code for if-else statements
// Even nested switch will work
// switch parmeter --> we can either use constant or expression

// break --> it exits the loop
// continue --> moves directly to next iteration withexecuting below code


// Functions = re-usable blocks of code and amke it concise and imporves readbility
// It follows function stack (LIFO)


# include <bits/stdc++.h>
using namespace std;

void mini_calculator(int a, int b, char operation){
    switch(operation){
        case '+':
            cout << a + b << endl;
            break;
        
        case '-':
            cout << a - b << endl;
            break;

        case '*':
            cout << a * b << endl;
            break;

        case '/':
            cout << a / b << endl;
            break;

        case '%':
            cout << a % b << endl;
            break;

        default:
            cout << "Wrong operator\n";
    }
}


void days_of_week(int x, int num){
    switch (x)
    {
    case 1:
        cout << "Sunday\n";
        break;
    
    case 2:
        cout << "Monday\n";
        break;
    
    case 3:
        cout << "Tuesday\n";
        break;
    
    case 4:
        switch(num){
            case 4 :
                cout << "Number is " << num << endl;
                break;
        }
        cout << "Wednesday\n";
        break;
    
    case 5:
        cout << "Thursday\n";
        break;

    case 6:
        cout << "Friday\n";
        break;

    case 7:
        cout << "Saturday\n";
        break;
    
    default:
    cout << "Invalid day !!\n";
        break;
    }
}

int pow_num(int num, int pow){
    int ans = 1;
    for (int i=0; i<pow; i++){
        // num *= num;
        ans *= num;
    }
    return ans;
}

bool odd_even(int num){
    // 1--> Even 
    // 0 --> Odd
    if (num & 1){
        // odd case
        return false;
    }
    else{
        return true;
    }
}

int fact(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
    if (r == 0){
        return 1;
    }
    if (r == 1){
        return n;
    }
    int combination =  fact(n) / (fact(r) * fact(n-r));
    return combination;
}

void print_counting(int n){
    for (int i=1; i<=n; i++){
        cout << i << " ";
    }
    return;
}

bool isPrime(int n){
    if (n == 0 || n == 1){
        return false;
    }
    else if(n == 2){
        return true;
    }
    else{
        for (int i=2; i<n; i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    // int x;
    // int num;
    // cout << "Enter which day : ";
    // cin >> x;
    // num = x;
    // days_of_week(x,num);

    // cout << endl << endl;


    // int a,b;
    // char opeartor;

    // cout << "Enter 2 numbers : ";
    // cin >> a >> b;
    // cout << "Enter operation to be performed (+,-,*,/,%) : ";
    // cin >> opeartor;


    // mini_calculator(a,b,opeartor);

    // cout << endl << endl;
    // int n,pow;
    // cout << "Enter number and power : ";
    // cin >> n >> pow;
    // cout << "Power of " << n << " times " << pow << " is : " << pow_num(n,pow);

    // cout << endl << endl;
    // if(odd_even(5)){
    //     cout << "It's even !!" << endl;
    // }
    // else{
    //     cout << "It's odd !!" << endl;
    // }

    // cout << fact(5) << endl;
    // cout << combination(6,3) << endl;


    // print_counting(10);
    // cout << endl;
    // int check = isPrime(23);
    // if(check){
    //     cout << "It's a prime number !!" << endl;
    // }
    // else{
    //     cout << "It's not a prime number !!" << endl;
    // }




    return 0;
}

