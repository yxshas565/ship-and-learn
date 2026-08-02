// Linked list is basically chain of nodes where each node contains info. such as data and a pointer to the next node in the chain
// Single linked list : only next ptr is given
// Doubly linked list : next and prev ptr. both pts given
// Circular linked list : circular way it rotates so same as singular linked list but end node points to beginning



// Fast and slow pointer concept


# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val) : data (val), next(nullptr) {}
};

int main(){

    Node* a = new Node(5);
    Node* b = new Node(8);
    Node* c = new Node(12);

    a->next = b;
    b->next = c;
    c->next = NULL;
    Node* head = a;

    cout << head->data << endl;
    cout << head->next->next->data << endl;

    int data = 13;
    int pos = 2;
    
    Node* temp = a;
    Node* prev = NULL;
    Node* next_node = temp->next;
    Node* d = new Node(19);
    for (int i=0; i<pos; i++){
        next_node = temp->next;
        if (i == pos-1){
            prev->next = d;
            d->next = next_node;
        }
        temp = temp->next;
        prev = temp;
    }

    int length = 0;
    temp = a;
    while (temp != NULL){
        if (temp->next == NULL){
            cout << temp->data;
        }
        else{
            cout << temp->data << " --> ";
        }
        temp = temp->next;
        length += 1;
    }
    cout << endl << length << endl;

    // find middle of linkedin list
    int middle = length/2 + 1;
    if (length % 2 == 0){
        middle = length/2;
    }   
    else{
        middle = (length/2) + 1;
    }

    temp = head;
    for (int i=0; i<middle; i++){
        if (i == (middle-1)){
            cout << temp->data << endl;
            // cout << temp << endl;
            // cout << temp->next << endl;
            break;
        }
        temp = temp->next;
    }
    cout << endl;
    

    int n = 2;
    temp = head;
    prev = NULL;
    for (int i=0; i<=length-n; i++){
        if (i == length-n){
            // cout << temp->data;
            prev->next = temp->next;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    cout << endl;

    temp = a;
    while (temp != NULL){
        if (temp->next == NULL){
            cout << temp->data;
        }
        else{
            cout << temp->data << " --> ";
        }
        temp = temp->next;
    }
    cout << endl;

    cout << endl << endl;


    // Save next
    // Reverse current
    // Move prev
    // Move current
    

    temp = head;
    next_node = NULL;
    prev = NULL;

    while (temp != NULL){
        next_node = temp->next;   
        temp->next = prev;        
        prev = temp;              
        temp = next_node;         
    } 


    cout << endl;

    



    temp = head;
    while (temp != NULL){
        if (temp->next == NULL){
            cout << temp->data;
        }
        else{
            cout << temp->data << " --> ";
        }
        temp = temp->next;
    }
    

    return 0;
}