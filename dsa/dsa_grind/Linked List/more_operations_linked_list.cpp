# include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};


void create(struct Node *&head, int &length){
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;

    if(head == NULL){
        head = ptr;
        ptr->next = NULL;
    }

    struct Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;

    length += 1;
}



void display(struct Node *head){
    if(head == NULL){
        return;
    }
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
    }

    cout << endl << endl;
}

string check_sorted_or_not(struct Node* head){
    if(head == NULL){
        return "Sorted\n";
    }
    struct Node* temp = head;

    while(temp->next != NULL){
        if(temp->data > temp->next->data){
            return "Not sorted !!\n";
        }
        temp = temp->next;
    }

    return "Sorted\n";
}


string check_duplicates(struct Node* head){
    if(head == NULL){
        return "No duplicates present\n";
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            return "Duplicates are present !!\n";
        }
        temp = temp->next;
    }

    return "No duplicates present\n";
}


void remove_duplicates(struct Node* &head){
    if(head == NULL){
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
        }
    }
}


void reverse_linked_list_links(struct Node *&head){
    if(head == NULL){
        return;
    }
    struct Node *temp = head;
    struct Node *next_node = temp->next;
    struct Node *prev = NULL;
    while(next_node != NULL){
        temp->next = prev;
        prev = temp;
        temp = next_node;
        next_node = next_node->next;
    }

    temp->next = prev;
    head = temp;
}


void reverse_linked_list_elements(struct Node *&head, int &length){
    // We can also copy to array reverse it in array and update back in linked list

    if(head == NULL || length <= 1){
        return;
    }
    struct Node *i = head;
    struct Node *j = head;

    while(j->next != NULL){
        j = j->next;
    }

    while(i != j){
        int temp = i->data;
        i->data = j->data;
        j->data = temp;

        if(i->next == j){
            break;
        }
        else{
            i = i->next;
            struct Node *move = i;
            while(move->next != j){
                move = move->next;
            }
            j = move;
        }
    }
}

void concatenate(int arr1[], int arr2[], int size1, int size2){
    struct Node *head = NULL;
    struct Node *temp = head;
    for(int i=0; i<size1; i++){
        struct Node *ptr = new Node;
        ptr->data = arr1[i];
        if(head == NULL){
            ptr->next = NULL;
            head = temp = ptr;
        }
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    }

    for(int i=0; i<size2; i++){
        struct Node *ptr = new Node;
        ptr->data = arr2[i];
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
    }


    display(head);
}


void merge(int arr1[], int arr2[], int size1, int size2){
    struct Node *head = NULL;
    struct Node *temp = head;
    int i,j;
    i = j = 0;

    while(i<size1 && j<size2){
        struct Node *ptr = new Node;
        if(arr1[i] < arr2[j]){
            ptr->data = arr1[i];
            if(head == NULL){
                head = ptr;
            }
            else{
                temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = ptr;
            }
            ptr->next = NULL;
            i++;
        }
        else{
            ptr->data = arr2[j];
            if(head == NULL){
                head = ptr;
            }
            else{
                temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = ptr;
            }
            ptr->next = NULL;
            j++;
        }
    }

    while(i < size1){
        struct Node *ptr = new Node;
        ptr->data = arr1[i];
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
        i++;
    }
    while(j < size2){
        struct Node *ptr = new Node;
        ptr->data = arr2[j];
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
        j++;
    }


    display(head);
}


bool check_loop_linked_list(struct Node *head){
    // Use small and big ptr. concept --> smaller one moves one index forward and bigger moves 2 index
    // There will be a particular index where both meet if they meet then loop exists or else if small one 

    struct Node *i,*j;
    i = head;
    j = head;

    bool isLoop = true;

    do{
        i = i->next;
        j = j->next->next;

        if(j == NULL){
            isLoop = false;
            break;
        }
    }while(i != j);

    return isLoop;
}




int main(){
    struct Node *head = NULL;
    int length = 0;

    for(int i=0; i<2; i++){
        create(head,length);
    }

    cout << "Length of linked list : " << length << endl;
    display(head);

    cout << check_sorted_or_not(head);
    cout << check_duplicates(head);
    remove_duplicates(head);

    display(head);

    // reverse_linked_list_links(head);
    cout << length << endl;
    reverse_linked_list_elements(head,length);

    display(head);


    int arr1[] = {2,8,10,15};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {4,7,12,14};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    concatenate(arr1,arr2,size1,size2);
    merge(arr1,arr2,size1,size2);

    cout << endl << endl;
    cout << check_loop_linked_list(head);


    return 0;
}