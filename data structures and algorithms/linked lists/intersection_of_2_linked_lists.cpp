# include <iostream>
using namespace std;

/*
ll1 : 1->2->3->4->5->6
ll2 : 9->8->4->6

ans : 4
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

// this intersect function will be given already 
void intersect (node* &head1, node* &head2, int pos){
    node *temp1 = head1;
    pos--;
    while (pos--!=0){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while (temp2 -> next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int intersection_of_2ll(node* head1, node* head2){
    int l1 = length_of_ll(head1);
    int l2 = length_of_ll(head2);
    
    int diff = 0;
    node* ptr1;
    node* ptr2;

    if (l1>l2){
        diff = l1-l2;
        ptr1 = head1;
        ptr2 = head2; 
    }
    else{
        diff = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(diff != 0){
        if(ptr1 == NULL){
            return -1;
        }
        ptr1 = ptr1->next;
        diff--;
    }

    while(ptr1 != NULL && ptr2 != NULL){
        if (ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
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

    insert_at_tail(head1,1);
    insert_at_tail(head1,2);
    insert_at_tail(head1,3);
    insert_at_tail(head1,4);
    insert_at_tail(head1,5);
    insert_at_tail(head1,6);
    display_ll(head1);

    node* head2 = NULL;

    insert_at_tail(head2,9);
    insert_at_tail(head2,10);
    insert_at_tail(head2,5);
    insert_at_tail(head2,6);
    display_ll(head2);

    intersect(head1,head2,3);

    cout<<intersection_of_2ll(head1,head2)<<endl;

}