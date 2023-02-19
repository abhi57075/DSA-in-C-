# include <iostream>
using namespace std;

/*
Also called as floyds algorithm or hare and tortoise algorithm
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

void make_cycle (node* &head, int pos){
    node* temp = head;
    node* startnode;

    int count = 1;
    while(temp->next!=NULL){
        if (count == pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detect_cycle (node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if (fast==slow){
            return true;
        }
    }
    return false;
}

void remove_cycle (node* &head){
    node* slow = head;
    node* fast = head;
    
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;  // or we can write slow = head;
    while (slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
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

    make_cycle(head,3); // ans will be 3->4->5->6->3->4->5->6........ infinitely
    //display_ll(head);

    cout<<detect_cycle(head)<<endl;

    remove_cycle(head);
    cout<<detect_cycle(head)<<endl;
    display_ll(head);
   
}

