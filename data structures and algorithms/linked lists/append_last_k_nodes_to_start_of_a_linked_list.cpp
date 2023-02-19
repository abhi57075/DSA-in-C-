# include <iostream>
using namespace std;

/*
linked list is 1->2->3->4->5->6
k = 3
ans = 4->5->6->1->2->3
*/

class node{
    public :
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

int length_of_ll (node* head){
    int l = 1;
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        l++;
    }
    return l;
}

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

node* append_last_k_to_start(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail = head;

    int l = length_of_ll(head);
    //k = k%l; // if k>l
    int count = 1;

    while(tail->next != NULL){
        if(count==l-k){
            newtail = tail; 
        }
        if (count==l-k+1){
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

void display_ll(node* head){
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
    display_ll(head);

    node* newhead = append_last_k_to_start(head,3);
    display_ll(newhead);
}