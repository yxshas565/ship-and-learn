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

int sum_linkedlist_recursive(struct Node *head){
    if(head == NULL){
        return 0;
    }
    return sum_linkedlist_recursive(head->next) + head->data;
}

int max_element_list(struct Node *head){
    int max = INT_MIN;
    if(head == NULL){
        return max;
    }
    while(head != NULL){
        if(head->data > max){
            max = head->data;
        }
        head = head->next;
    }

    return max;
}

int min_element_list(struct Node *head){
    int min = INT_MAX;
    if(head == NULL){
        return min;
    }
    while(head != NULL){
        if(head->data < min){
            min = head->data;
        }
        head = head->next;
    }

    return min;
}

int linear_search_list(struct Node* head, int target){
    int index = 0;
    if(head == NULL){
        return -1;
    }
    while(head != NULL){
        if(target == head->data){
            return index;
        }
        index += 1;
        head = head->next;
    }

    return -1;
}

int improvised_search_list(struct Node *&head, int target){
    // We can imporve by transposition and move to head
    struct Node *temp = head;
    int index = 0;
    if(head == NULL){
        return -1;
    }
    struct Node *prev;
    
    while(temp != NULL){
        if(target == temp->data){
            prev->next = temp->next;
            temp->next = head;
            head = temp;
            return index;
        }
        index += 1;
        prev = temp;
        temp = temp->next;
    }

    return -1;
}

int swap_nodes(struct Node *&head){
    struct Node *temp = head->next;
    head->next = temp->next;
    temp->next = head;
    head = temp;
}


void insert_nodes(struct Node *&head){
    int pos;
    cout << "Enter position to be inserted : ";
    cin >> pos;
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = NULL;
        return;
    }
    struct Node* temp = head;
    struct Node* prev,next_node;

    for(int i=0; i<pos-1; i++){
        prev = temp;
        temp = temp->next;
    }   

    ptr->next = temp;
    prev->next = ptr;
}


void all_methods_insert(struct Node *&head,int length){
    int pos;
    cout << "Enter index to be inserted : ";
    cin >> pos;


    if(pos > length || pos < 0){
        return;
    }

    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = NULL;
        return;
    }

    struct Node* temp = head;
    struct Node* prev,next_node;

    if(pos == 0){
        ptr->next = head;
        head = ptr;
        return;
    }

    for(int i=0; i<pos; i++){
        prev = temp;
        temp = temp->next;
    }   

    ptr->next = temp;
    prev->next = ptr;
}

void insert_from_last(struct Node* &head){
    // ie. insertion from end , ie. same like push_back()
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = NULL;
        return;
    }

    struct Node *temp;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;
}   


void insert_from_beginning(struct Node* &head){
    // ie. insertion from end , ie. same like push_back()
    struct Node *ptr = new Node;
    cout << "Enter data : ";
    cin >> ptr->data;
    if(head == NULL){
        head = ptr;
        ptr->next = NULL;
        return;
    }

    ptr->next = head;
    head = ptr;
}   


// void sort(struct Node* head , int length){
//     if(head == NULL || length == 1){
//         return;
//     }
//     int min = head->data;
//     struct Node *temp1,*temp2;
// }

Node* merge(Node* left, Node* right){
    Node dummy;
    Node* tail = &dummy;

    dummy.next = NULL;

    while(left != NULL && right != NULL){
        if(left->data <= right->data){
            tail->next = left;
            left = left->next;
        }
        else{
            tail->next = right;
            right = right->next;
        }

        tail = tail->next;
    }

    if(left != NULL){
        tail->next = left;
    }
    else{
        tail->next = right;
    }

    return dummy.next;
}


Node* sort(Node* head, int length){
    if(head == NULL || length <= 1){
        return head;
    }

    int mid = length / 2;

    Node* temp = head;

    // Go to node just before the middle
    for(int i = 1; i < mid; i++){
        temp = temp->next;
    }

    Node* right = temp->next;
    temp->next = NULL;

    Node* left = head;

    left = sort(left, mid);
    right = sort(right, length - mid);

    return merge(left, right);
}


void insert_node_sorted_list(struct Node* &head, int value){
    struct Node *ptr = new Node;
    if(head == NULL){
        ptr->data = value;
        ptr->next = NULL;
        head = ptr;
        return;
    }

    if(head->next == NULL){
        if(value > head->data){
            ptr->data = value;
            head->next = ptr;
            ptr->next = NULL;
        }
        else{
            ptr->data = value;
            ptr->next = NULL;
            head = ptr;
        }
    }

    struct Node *temp, *prev;
    temp = head;
    prev = temp;
    while(temp->data < value){
        prev = temp;
        temp = temp->next;
    }

    ptr->data = value;
    ptr->next = temp;
    prev->next = ptr;
}


void delete_nodes(struct Node *&head, int length){
    if(head == NULL){
        return;
    }
    int pos;
    cout << "Enter index to be deleted : ";
    cin >> pos;

    if(pos > length || pos < 0){
        return;
    }

    if(pos-1 == 0){
        head = head->next;
    }
    struct Node *temp = head;
    struct Node *prev = temp;

    
    for(int i=0; i<pos-1; i++){
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
}

string check_sorted_or_not(struct Node *head){
    if(head == NULL){
        return "Sorted";
    }

    struct Node *temp = head;
    while(temp->next != NULL){
        if(temp->data > temp->next->data){
            return "Not Sorted";
        }
        temp = temp->next;
    }

    return "Sorted";
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
    create(head);
    display(head);
    // display_recursive(head,head);

    cout << endl;
    cout << "Length of linked list : " << lengthLinkedList_recursive(head) << endl;

    cout << "Sum of linked List : " << sum_linkedlist_recursive(head) << endl;

    cout << "Max element : " << max_element_list(head) << endl;
    cout << "Min element : " << min_element_list(head) << endl;

    cout << "Index of searched element : " << improvised_search_list(head,20) << endl;
    display(head);
    cout << endl;
    swap_nodes(head);
    display(head);
    cout << endl;
    cout << endl << endl;
    int length = lengthLinkedList(head);
    // insert_nodes(head);
    all_methods_insert(head,length);
    cout << "Inserting from last : " << endl;
    insert_from_last(head);
    insert_from_last(head);
    insert_from_last(head);
    
    display(head);
    cout << endl << endl;
    cout << "Inserting from start : " << endl;
    insert_from_beginning(head);
    insert_from_beginning(head);
    insert_from_beginning(head);

    display(head);
    cout << endl << endl;

    length = lengthLinkedList(head);
    head = sort(head,length);
    display(head);
    cout << endl << endl;
    
    insert_node_sorted_list(head,56);
    display(head);
    cout << endl << endl;

    length = lengthLinkedList(head);
    delete_nodes(head,length);
    display(head);
    cout << endl << endl;

    insert_from_last(head);
    cout << check_sorted_or_not(head);
    free(head);
    free(ptr1);
    free(ptr2);

    return 0;
}