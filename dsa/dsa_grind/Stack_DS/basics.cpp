# include <bits/stdc++.h>
using namespace std;

void displayStack(int arr[], int size, int top){
    if(top == -1){
        cout << "Array is empty !!\n";
        return;
    }
    cout << "Array : ";
    for(int i=0,j=top; i<size,j>=0; i++,j--){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Stack : " << endl;
    for(int i=top; i>=0; i--){
        cout << arr[i] << endl;
    }

    cout << endl << endl;
}

void push(int arr[], int size, int &top){
    if(top == size-1){
        cout << "Overflow !!\n";
    }
    else{
        int data;
        cout << "Enter data : ";
        cin >> data;
        top++;
        arr[top] = data;
    }
}

void pop(int arr[], int size, int &top){
    if(top == -1){
        cout << "Underflow !!\n";
        return;
    }
    arr[top] = -1;
    top--;
}

void peek(int arr[], int size, int index, int top){
    if(top == -1){
        cout << "Underflow\n";
    }
    else if(index >= top+1){
        cout << "Invalid stack\n";
    }
    else{
        int index_ele = top;
        for(int i=0; i<index; i++){
            index_ele -= 1;
        }
        cout << "Peek element : " << arr[index_ele] << "\n";
    }
}

void StackTop(int arr[], int size, int top){
    if(top == -1){
        cout << "Underflow\n";
        return;
    }
    cout << "Top element : " << arr[top] << endl;
}

void isEmpty(int top){
    if(top == -1){
        cout << "Stack is empty !!\n";
    }
    else{
        cout << "Stack is not empty !!\n";
    }
}

void isFull(int size, int top){
    if(top == size-1){
        cout << "Stack is full !!\n";
    }
    else{
        cout << "Stack is not full !!\n";
    }
}

int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    int top = -1;

    pop(arr,size,top);

    for(int i=0; i<10; i++){
        push(arr,size,top);
    }
    cout << endl;

    displayStack(arr,size,top);
    pop(arr,size,top);
    pop(arr,size,top);
    // pop(arr,size,top);
    // pop(arr,size,top);
    // pop(arr,size,top);
    displayStack(arr,size,top);

    peek(arr,size,3,top);
    StackTop(arr,size,top);
    isEmpty(top);
    isFull(size,top);

    displayStack(arr,size,top);

    return 0;
}