// Find and display middle node

# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void create(struct Node *&head){
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        ptr->next = NULL;
        head = ptr;
    }

    struct Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;
}

void display(struct Node *head){
    if(head == NULL){
        return;
    }
    struct Node *temp = head;
    while(temp != NULL){
        if(temp->next == NULL){
            cout << temp->data << "|" << "NULL";
        }
        else{
            cout << temp->data << "|" << int(temp->next) << " --> ";
        }
        temp = temp->next;
    }

    cout << endl << endl;
}

void display_middle_element(struct Node *head, int length){
    if(length % 2 == 0){
        length = length/2 - 1;
    }
    else{
        length = length/2;
    }
    struct Node *temp = head;
    for(int i=0; i<length; i++){
        temp = temp->next;
    }
    cout << temp->data << "|" << int(temp->next) << endl;
}

// big and small ptr approach
void display_middle_node(struct Node *head){
    struct Node *small , *big;
    small = head;
    big = head;

    while(big != NULL && big->next != NULL){
        small = small->next;
        big = big->next->next;
    };

    cout << "Middle element : " << small->data;
}

// one more method we can use stack to store all address's from start to end and pop out size/2 elemnts and print in the top element
void display_stack(){
    
}


int main(){
    struct Node *head = NULL;
    int length = 0;
    for(int i=0; i<5; i++){
        create(head);
        length += 1;
    }
    display(head);

    display_middle_element(head,length);
    display_middle_node(head);

    return 0;
}