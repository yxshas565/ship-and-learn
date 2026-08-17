# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void create(struct Node* &head){
    int n;
    cout << "How many nodes you wanna create : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        struct Node *ptr;
        ptr = new Node;
        cout << "Enter data : ";
        cin >> ptr->data;

        if(head == NULL){
            head = ptr;
            ptr->next = NULL;
        }

        else{
            struct Node *temp;
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = ptr;
            ptr->next = NULL;
        }
    }
}

void display(struct Node *head){
    struct Node *temp;
    temp = head;
    while(temp != NULL){
        if(temp->next == NULL){
            cout << temp->data << "|" << "NULL";
        }
        else{
            cout << temp->data << "|" << int(temp->next) << " --> ";
        }
        temp = temp->next;


        // if(temp->next == NULL){
        //     cout << int(temp) << "|" << temp->data << "|" << "NULL";
        // }
        // else{
        //     cout << int(temp) << "|" << temp->data << "|" << int(temp->next) << " --> ";
        // }
        // temp = temp->next;
    }
}

// This will print reverse of linkedin list
void display_recursive(struct Node *head, struct Node* temp){
    if(temp == NULL){
        return;
    }
    else{
        // if(temp->next == NULL){
        //     cout << temp->data << "|" << int(temp->next);
        // }
        // else{
        //     cout << temp->data << "|" << int(temp->next) << " --> ";
        // }
        
        display_recursive(head,temp->next);

        if(temp->next == NULL){
            cout << temp->data << "|" << int(temp->next);
        }
        else{
            cout << temp->data << "|" << int(temp->next) << " --> ";
        }
    }
}

int lengthLinkedList(struct Node *head){
    int count = 0;
    if(head == NULL){
        return count;
    }

    while(head != NULL){
        count += 1;
        head = head->next;
    }

    return count;
}

int lengthLinkedList_recursive(struct Node *head){
    if(head == NULL){
        return 0;
    }

    return lengthLinkedList_recursive(head->next) + 1;
}

int sum_linkedlist(struct Node *head){
    struct Node *temp = head;
    int sum = 0;

    while(temp != NULL){
        sum += temp->data;
        temp = temp->next;
    }

    return sum;
}

int main(){
    struct Node *head;
    head = NULL;
    struct Node *ptr1,*ptr2;
    ptr1 = new Node;
    ptr2 = new Node;
    head = ptr1;
    ptr1->data = 100;
    ptr2->data = 200;
    ptr1->next = ptr2;
    ptr2->next = NULL;
    // create(head);
    display(head);
    // display_recursive(head,head);

    cout << endl;
    cout << "Length of linked list : " << lengthLinkedList_recursive(head) << endl;

    cout << "Sum of linked List : " << sum_linkedlist(head) << endl;


    free(head);
    free(ptr1);
    free(ptr2);

    return 0;
}