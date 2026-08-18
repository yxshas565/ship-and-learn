# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void createNode(struct Node* &head){
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;

    if(head == NULL){
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
    }
    else{
        struct Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        ptr->next = NULL;
        ptr->prev = temp;
        temp->next = ptr;
    }
}

void displayNode(struct Node *head){
    if(head == NULL){
        return;
    }
    else{
        struct Node *temp = head;
        while(temp != NULL){
            if(temp->next == NULL){
                cout << int(temp->prev) << "|" << temp->data << "|" << int(temp->next);
            }
            else{
                cout << int(temp->prev) << "|" << temp->data << "|" << int(temp->next) << " --> ";
            }
            temp = temp->next;
        }
    }

    cout << endl << endl;
}

int length_List(struct Node *head){
    int length = 0;
    if(head == NULL){
        return length;
    }
    else{
        struct Node *temp = head;
        while(temp != NULL){
            temp = temp->next;
            length += 1;
        }
    }

    return length;
}

void insertNode(struct Node* &head, int length){
    int pos;
    cout << "Enter postion to be inserted : ";
    cin >> pos;

    if(pos > length+1 || pos < 1){
        return;
    }

    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;

    if(head == NULL){
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
    }
    else if(pos == 1){
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
    else if(pos == length+1){
        struct Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        ptr->next = NULL;
        ptr->prev = temp;
        temp->next = ptr;
    }
    else{
        struct Node *temp = head;
        struct Node *prev_node = temp;
        for(int i=0; i<pos-1; i++){
            prev_node = temp;
            temp = temp->next;
        }

        ptr->next = temp;
        ptr->prev = prev_node;
        prev_node->next = ptr;
        temp->prev = ptr;
    }
}

void deleteNode(struct Node* &head, int length){
    int pos;
    cout << "Enter postion to be deleted : ";
    cin >> pos;

    if(pos > length || pos < 1){
        return;
    }

    if(head == NULL){
        return;
    }

    if(pos == 1){
        struct Node *temp = head->next;
        temp->prev = NULL;
        head = temp;
        return;
    }

    struct Node *temp = head;
    struct Node *prev_node = temp;
    for(int i=0; i<pos-1; i++){
        prev_node = temp;
        temp = temp->next;
    }

    prev_node->next = temp->next;
}


void reverse_List(struct Node* &head){
    if(head == NULL){
        return;
    }
    struct Node *temp = head;
    struct Node *prev_node = NULL;
    struct Node *next_node = temp->next;

    while(next_node != NULL){
        temp->prev = next_node;
        temp->next = prev_node;

        prev_node = temp;
        temp = next_node;
        next_node = next_node->next;

    }
    
    temp->prev = NULL;
    temp->next = prev_node;
    head = temp;
}


int main(){
    struct Node *head = NULL;
    for(int i=0; i<5; i++){
        createNode(head);
    }
    displayNode(head);

    int length = length_List(head);
    // cout << length;
    insertNode(head,length);
    displayNode(head);
    length = length_List(head);
    deleteNode(head,length);
    displayNode(head);


    reverse_List(head);
    displayNode(head);

    return 0;
}