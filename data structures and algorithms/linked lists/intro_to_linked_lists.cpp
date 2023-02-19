# include <iostream>
using namespace std;

class node{
    public : 
    int data;
    node* next;

    node (int val){
        data = val;
        next = NULL;
    }
};

void insert_at_head(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insert_at_tail(node* &head, int val){
    node* n = new node(val);
    if (head == NULL){
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

void delete_at_head(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion (node* head, int val){
    if (head == NULL){
        return;
    }
    else if (head->next == NULL){
        delete_at_head(head);
        return;
    }
    else{
        node* temp = head;
        while(temp->next->data!=val){
            temp = temp->next;
        }
        node* todelete = temp->next;
        temp->next = temp->next->next;
        delete  todelete;
    }
}

bool search(node* head, int key){
    node* temp = head;
    while (temp!=NULL){
        if (temp->data == key){
            return true;
        }
        else{
            temp = temp->next;
        }
    }
    return false;
}

void reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr = NULL;

    while (currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}

void display_ll (node* head){
    node* temp = head;
    while (temp!=NULL){
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
    display_ll(head);
    
    
    cout<<search(head,5)<<endl;
    cout<<search(head,15)<<endl;
    
    delete_at_head(head);
    display_ll(head);
    
    deletion(head,3);
    display_ll(head);

    reverse(head);
    display_ll(head);
}