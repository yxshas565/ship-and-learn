# include <bits/stdc++.h>
using namespace std;

void change_case_string(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            arr[i] += 32;
        }
        else if(arr[i] >= 97 && arr[i] <= 122){
            arr[i] -= 32;
        }
        else{
            continue;
        }
    }
}

void count_vowels(char arr[]){
    int count_vowels = 0;
    int count_consonants = 0;

    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' ){
            count_vowels += 1;
        }
        else if((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122)){
            count_consonants += 1;
        }
    }

    cout << "Vowel count : " << count_vowels << endl;
    cout << "Consonants count : " << count_consonants << endl;
}

void count_word(char arr[]){
    int words = 0;
    int i = 0;
    while(arr[i] != '\0'){
        if((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122)){
            while(arr[i] != ' ' && arr[i] != '\0'){
                i++;
            }
            words += 1;
        }
        else if(arr[i] == ' '){
            i++;
        }
        else{
            while((!(arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122)) && arr[i] != '\0'){
                i++;
            }
        }
    }
    cout << words;
}

int main(){
    char random[] = " Hi , My name is XXXXXX     !!!!     ";
    int size = 0;
    for(int i=0; random[i]!='\0'; i++){
        size += 1;
    }
    cout << "Size : " << size << endl;

    char arr[] = "WeLcOmE tO dSa !!555";
    cout << "Inital string : ";
    for(char i : arr){
        cout << i;
    } 
    cout << endl;
    change_case_string(arr);
    cout << "Case change string : ";
    for(char i : arr){
        cout << i;
    } 
    cout << endl;


    char a[] = "How are you doing ??";
    count_vowels(a);
    cout << endl;
    char b[] = "How are   you   doing  ??  XXX !! What's Up babe ??";
    count_word(b);

    return 0;
} 