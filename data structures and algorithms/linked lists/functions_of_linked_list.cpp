# include <iostream>
using namespace std;

// Creating a node class
class node{
    public:
    // Class variables
    int data;  
    node* next; // A pointer called next which will point to a node
    
    // Constructor
    node (int value){
        data = value;
        next = NULL;
    }
};

void insert_at_head (node* &starting_node, int value){
    node* n = new node(value);
    n->next = starting_node;
    starting_node = n; // now starting node has become n
    // the above statement means ki
    // starting node will be pointing to the same memory block as n
}

void insert_at_tail (node* &starting_node, int value){
    node* n = new node(value);

    if (starting_node == NULL){ // means no element in the linked_list
        starting_node = n;
        return;
    } 
    else{
        node* temp = starting_node;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

void delete_at_head(node* &starting_node){
    node* to_delete = starting_node;
    starting_node = starting_node->next;
    delete to_delete;
}

void deletion(node* &starting_node, int value){
    if (starting_node == NULL){ // empty linked list
        return;
    }
    else if (starting_node->next == NULL){  // only one element in the linked list
        delete_at_head(starting_node);
        return;
    }
    else{
        node* temp = starting_node;
        while(temp->next->data != value){  // jo node delete karna hai uske just previous node pe temp aa ke ruk jaayega
            temp = temp->next;
        }
        node* to_delete = temp->next;
        temp->next = temp->next->next;
        delete to_delete;
    }
}

void reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr = NULL;

    while (currptr!=NULL){
        nextptr = currptr->next;

        // reverse current node's pointer
        currptr->next = prevptr;
        
        // move ponters one position ahead
        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}

bool search(node* starting_node, int value){
    node* temp = starting_node;
    while (temp != NULL){
        if (temp->data == value){
            return true;
        }
        else{
            temp = temp->next;
        }
    }
    return false;
}

void display_ll (node* node_ptr){
    while (node_ptr!=NULL){
        cout<<node_ptr->data<<" ";
        node_ptr = node_ptr->next;
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