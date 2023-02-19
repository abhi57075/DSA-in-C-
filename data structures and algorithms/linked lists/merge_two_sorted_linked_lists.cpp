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

node* merge_two_ll(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummy_node = new node(-1);
    node* p3 = dummy_node;

    while (p1 != NULL && p2 != NULL){
        if (p1->data < p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy_node->next;
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
    node* head1 = NULL;

    insert_at_tail(head1,10);
    insert_at_tail(head1,22);
    insert_at_tail(head1,34);
    insert_at_tail(head1,45);
    insert_at_tail(head1,52);
    insert_at_tail(head1,69);
    display_ll(head1);

    node* head2 = NULL;

    insert_at_tail(head2,1);
    insert_at_tail(head2,12);
    insert_at_tail(head2,13);
    insert_at_tail(head2,44);
    insert_at_tail(head2,555);
    insert_at_tail(head2,7776);
    display_ll(head2);

    node* newhead = merge_two_ll(head1, head2);
    display_ll(newhead);

}