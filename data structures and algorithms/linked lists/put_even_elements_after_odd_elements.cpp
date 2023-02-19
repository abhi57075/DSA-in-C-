# include <iostream>
using namespace std;

/*
Example : 1->2->3->4->5->6
Odd position pe hai 1,3,5
Even position pe hai 2,4,6
Ans : 1->3->5->2->4->6
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

void even_after_odd (node* &head){
    node* odd = head;
    node* even = head->next;
    node* even_start = even;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next =  even_start;
    if (odd->next != NULL){ // case when length of the linked list is even
        even->next = NULL;
    }
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

    even_after_odd(head);
    display_ll(head);
}