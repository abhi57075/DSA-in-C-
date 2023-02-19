# include <iostream>
using namespace std;

class node{
    public :
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert_at_head(node* &head, int val){
    node* n = new node(val);
    node* temp = head; 

    if (head == NULL){
        n->next = n;
        head = n;
        return;
    }

    while (temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void insert_at_tail(node* &head, int val){

    if (head == NULL){
        insert_at_head(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while (temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void delete_at_head(node* &head){
    node* temp = head;
    while (temp->next != head){
        temp = temp->next;
    }

    node* to_delete = head;
    temp->next = head->next;
    head = head->next;
    delete to_delete;
}

void deletion (node* &head, int pos){

    if (pos == 1){
        delete_at_head(head);
        return;
    }
    node* temp = head;
    int count = 1;

    while(count!=pos-1){
        temp = temp->next;
        count++;
    }

    node* to_delete = temp->next;
    temp->next = temp->next->next;

    delete to_delete;

}

void display_ll(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while (temp!=head);
    cout<<endl;
}

int main(){
    node* head1 = NULL;

    insert_at_tail(head1,10);
    insert_at_tail(head1,22);
    insert_at_tail(head1,34);
    insert_at_tail(head1,45);
    insert_at_tail(head1,52);
    insert_at_tail(head1,69);
    display_ll(head1);

    insert_at_head(head1,1019);
    display_ll(head1);

    delete_at_head(head1);
    display_ll(head1);
}