# include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    if (a > 0){
        cout << "It's a positive number" << endl;
    }
    else if(a < 0){
        cout << "It's not a positive number" << endl;
    }
    else{
        cout << "It's a 0" << endl;
    }

    int b ,c;
    cout << "Enter values of b and c : ";
    cin >> b >> c;
    cout << "b : " << b << " , c : " << c << endl;

    if (b > c){
        cout << "b is greater than c" << endl;
    }
    else if (c > b){
        cout << "c is greater than b" << endl;
    }


    int n;
    cin >> n;
    int sum = 0;
    int sum_odd = 0;
    int sum_even = 0;

    cout << "for loop : ";
    for (int i=0; i<=n; i++){
        cout << i << " ";
        if (i % 2 == 0){
            sum_even += i;
        }
        else if(i % 2 != 0){
            sum_odd += i;
        }
        sum += i;
    }
    cout << endl;


    cout << "while loop : ";
    int i = 0;
    while (i<=n){
        cout << i << " ";
        i++;
    }
    cout << endl;


    cout << "do-while loop : ";
    i = 0;
    do{
        cout << i << " ";
        i++;
    }while(i<=n);
    cout << endl;

    cout << "Sum : " << sum << endl;
    cout << "Sum of even numbers : " << sum_even << endl;
    cout << "Sum of odd numbers: " << sum_odd << endl;
    return 0;
}