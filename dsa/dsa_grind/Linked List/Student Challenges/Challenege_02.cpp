// Find intersection point of 2 lists

// list1 = [8->6->3->9->10->4->2->12]
// list2 = [20->30->40->10->4->2->12]

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

void displayNode(struct Node *head){
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

struct Node * Intersection_address(struct Node *head){
    int cnt = 4;
    struct Node *temp = head;
    for(int i=0; i<cnt; i++){
        temp = temp->next;
    }

    return temp;
}


struct Node * another_arr(struct Node *head){
    struct Node *temp = head;
    for(int i=0; i<2; i++){
        temp = temp->next;
    }

    return temp;
}

int main(){

    struct Node *head = NULL;
    cout << "Enter list1 value : " << endl;
    for(int i=0; i<8; i++){
        createNode(head);
    }
    cout << endl;
    cout << "Enter list2 values : " << endl;
    struct Node *head_new = NULL;
    for(int i=0; i<3; i++){
        createNode(head_new);
    }

    struct Node *ptr = Intersection_address(head);
    struct Node *new_ptr = another_arr(head_new);

    new_ptr->next = ptr;

    cout << "List 1 : " << endl;
    displayNode(head);
    cout << "List 2 : " << endl;
    displayNode(head_new);



    stack <struct Node *> list1;
    stack <struct Node *> list2;

    struct Node *temp1 = head;
    struct Node *temp2 = head_new;

    while(temp1 != NULL){   
        list1.push(temp1);
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        list2.push(temp2);
        temp2 = temp2->next;
    }

    struct Node *intersection_ptr;
    while(1){
        if(list1.top() != list2.top()){
            intersection_ptr = list2.top();
            break;
        }

        list1.pop();
        list2.pop();
    }
    cout << endl << endl;
    cout << "Intersection point : " << intersection_ptr->next->data << "|" << int(intersection_ptr->next);

    return 0;
}