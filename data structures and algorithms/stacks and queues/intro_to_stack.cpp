# include <iostream>
using namespace std;
# define n 100 

/*
stack will have the following operations:
1. push -> insert an element to a stack
2. pop -> removes the top element from the stack
3. top -> gives us the top element of the stack
4. empty -> returns true if the stack is empty else false
*/

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int [n];
        top = -1;
    }

    void push (int x){
        if (top == n-1){
            cout<<"STACK IS FULL!"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop (){
        if (top == -1){
            cout<<"STACK IS EMPTY!"<<endl;
            return;
        }
        top--;
    }

    int top_element(){
        if (top == -1){
            cout<<"STACK DOES NOT CONTAIN ANY ELEMENT!"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(50);
    s.push(40);
    s.push(100);

    cout<<s.top_element()<<endl;
    
    s.pop();
    cout<<s.top_element()<<endl;

    cout<<s.empty()<<endl;
}