# include <bits/stdc++.h>
using namespace std;

// self-referential structure
struct Node{
    int data;
    struct Node* next;
};


void create(struct Node* &head){
    struct Node* ptr = new Node();
    cout << "Enter data : " ;
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = NULL;
        return;
    }

    struct Node* temp;
    temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;
}

void display(struct Node *head){
    struct Node *temp;
    temp = head;
    while(temp != NULL){
        if(temp->next == NULL){
            cout << temp->data << "|" << temp;
        }
        else{
            cout << temp->data << "|" << temp << " --> ";
        }
        temp = temp->next;
    }
}

int main(){
    int arr[10]; // array of 10 integers stored in stack
    int *p = new int[5]; // dynamically allcated in heap




    struct Node *a,*b;
    b = a; // it means both are pointing to the same node
    b = a->next; // it stores next address or next node of a
    a = a->next; // ptr a itself points to next node it moves from one node to next

    // All 3 of them are used for checking if a is pointing to anything or not 
    if(a == NULL);
    if(a == 0);
    if(!a);




    struct Node *head;
    struct Node *ptr;
    // ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = new Node;
    struct Node *ptr1 = new Node;
    struct Node *ptr2 = new Node;

    head = ptr;
    ptr->data = 10;
    ptr1->data = 20;
    ptr2->data = 30;

    ptr->next = ptr1;
    ptr1->next = ptr2;
    ptr2->next = NULL;


    // struct Node *temp;
    // temp = head;

    display(head);

    // create(head);

    return 0;
}