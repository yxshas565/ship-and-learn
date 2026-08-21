# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void displayStack(struct Node *top){
    struct Node *temp = top;
    cout << "Stack : " << endl;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }

    cout << endl << endl;
}

void push(struct Node *&top, int size, int &length){
    if(length == size){
        cout << "Overflow !!\n\n";
        return;
    }
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;

    if(top == NULL){
        ptr->next = NULL;
        top = ptr;
    }
    else{
        ptr->next = top;
        top = ptr;
    }
    length += 1;
    cout << endl;
}



void pop(struct Node *&top, int &length){
    if(top == NULL){
        cout << "UnderFlow !!\n\n";
        return;
    }
    else{
        top = top->next;
    }
    length -= 1;
}

void peek(struct Node *top, int pos, int length){
    if(pos > length){
        cout << "Invalid index\n";
        return;
    }
    for(int i=0; i<pos-1; i++){
        top = top->next;
    }

    cout << "Element : " << top->data << endl;
}

void TopStack(struct Node *top){
    if(top == NULL){
        return;
    }
    cout << "Top element : " << top->data << endl;
}

void isEmpty(struct Node *top){
    if(top == NULL){
        cout << "Stack is empty !!\n";
    }
    else{
        cout << "Stack is not empty !!\n";
    }
}

void isFull(struct Node *top, int length, int size){
    if(length == size){
        cout << "Stack is full !!\n";
    }
    else{
        cout << "Stack is not full !!\n";
    }
}

int main(){
    struct Node *top;
    top = NULL;
    int size;
    cout << "Size of stack : ";
    cin >> size;
    int length = 0;

    for(int i=0; i<6; i++){
        push(top,size,length);
    }
    displayStack(top);
    pop(top,length);
    pop(top,length);
    displayStack(top);

    peek(top,2,length);
    TopStack(top);
    isEmpty(top);
    isFull(top,length,size);



    return 0;
}