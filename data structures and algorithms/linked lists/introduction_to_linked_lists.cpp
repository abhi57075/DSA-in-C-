# include <iostream>
using namespace std;

class node{
    public :
    int data;
    node* next;
};

void display_ll(node* n){
    while (n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    node* first = NULL;
    node* second = NULL;

    head = new node();
    first = new node();
    second = new node();

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;

    display_ll(head);
}