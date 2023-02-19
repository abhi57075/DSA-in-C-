# include <iostream>
using namespace std;

/*
if the linked list is 1->2->3->4->5->6
and k = 2 then the ans should be
2->1->4->3->6->5
*/

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

node* reverse_k_nodes(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr = NULL;

    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;

        count++;
    }

    // after the above loop is executed
    // prevptr will be pointing to the last node
    // currptr will be pointing to the 
    // nextptr will be pointing to the next of the last node

    if (nextptr!=NULL){      // condition for last element of the linked list
        head->next = reverse_k_nodes(nextptr,k);
    }

    return prevptr;
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
    
    int k = 2;
    node* new_head = reverse_k_nodes(head,k);
    display_ll(new_head);
}

