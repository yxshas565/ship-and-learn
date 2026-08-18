# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void createNode(struct Node* &head){
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = head;
    }

    struct Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = head;
}

int length_List(struct Node *head){
    struct Node *temp = head;
    int length = 0;
    do{
        length += 1;
        temp = temp->next;
    }while(temp != head);

    return length;
}


void displayList(struct Node* head){
    if(head == NULL){
        return;
    }
    struct Node* temp = head;
    do{
        if(temp->next == head){
            cout << temp->data << "|" << int(temp->next);
        }   
        else{
            cout << temp->data << "|" << int(temp->next) << " --> ";
        }
        temp = temp->next;
    }while(temp != head);

    cout << endl << endl;
}

void insertNode(struct Node* &head, int length){
    int pos;
    cout << "Enter pos to be inserted : ";
    cin >> pos;

    if(pos > length+1 || pos < 1){
        return;
    }

    struct Node* ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = head;
    }
    else if(pos == 1){
        ptr->next = head;

        struct Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        head = ptr;
        temp->next = head;
    }
    else if(pos == length){
        struct Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        ptr->next = head;
        temp->next = ptr;
    }
    else{
        struct Node *temp,*prev;
        temp = head;
        prev = temp;
        for(int i=0; i<pos-1; i++){
            prev = temp;
            temp = temp->next;
        }

        ptr->next = temp;
        prev->next = ptr;
    }
}


void deleteNode(struct Node* &head, int length){
    int pos;
    cout << "Enter pos to be deleted : ";
    cin >> pos;

    if(pos > length || pos < 1){
        return;
    }
    if(head == NULL){
        return;
    }
    else if(pos == 1){
        struct Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        head = head->next;
        temp->next = head;
    }
    else{
        struct Node *temp = head;
        struct Node *prev = temp;
        for(int i=0; i<pos-1; i++){
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
    }

}

int main(){
    struct Node* head = NULL;
    for(int i=0; i<5; i++){
        createNode(head);
    }

    cout << int(head) << endl;
    displayList(head);

    int length = length_List(head);
    // cout << length;


    insertNode(head,length);
    displayList(head);
    length = length_List(head);
    deleteNode(head,length);
    displayList(head);
    return 0;
}