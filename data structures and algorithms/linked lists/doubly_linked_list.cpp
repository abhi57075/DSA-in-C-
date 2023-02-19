# include <iostream>
using namespace std;

/*
Doubly linked list
          next     next    next    next
         -------> ------> ------> ------> --->NULL
HEAD<--- 1       2       3       4       5
NULL<--- <------ <------ <------ <-------
           prev    prev    prev    prev

advantage over linked list is that we will be able to iterate in both the directions

*/

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_head(node* &head, int val){
    node* n = new node(val);

    n->next = head;

    if (head!=NULL){
        head->prev = n;
    }

    head = n;
}

void insert_at_tail(node* &head, int val){
    if (head == NULL){
        insert_at_head(head,val);
        return;
    }

    node* n = new node (val);
    node* temp = head;

    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void delete_at_head(node* &head){
    node* to_delete = head;

    head = head->next;
    head->prev = NULL;
    
    delete to_delete;
}

void deletion (node* &head, int pos){
    if (pos == 1){
        delete_at_head(head);
        return;
    }

    node* temp = head;
    int count = 1;

    while(temp!=NULL && count != pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void display_dll(node* head){
    node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;

    insert_at_head(head,3);
    insert_at_head(head,2);
    insert_at_head(head,1);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);

    insert_at_head(head,100);
    display_dll(head);

    deletion(head, 1); // first node
    display_dll(head);

    deletion(head, 6); // last node
    display_dll(head);

    deletion(head,3);
    display_dll(head);
}