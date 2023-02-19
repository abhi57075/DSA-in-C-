# include <iostream>
using namespace std;

int main(){
    

    int num1 = 10;
    int *p1 = &num1;
    int **p2 = &p1;
    //Address of num1
    cout<<&num1<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;
    //Address of p1
    cout<<&p1<<endl;
    cout<<p2<<endl;
    //Value of num1
    cout<<num1<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    int *ptr;
    int num2 = 10;
    ptr = &num2;
    *ptr = 20;
    cout<<*ptr<<endl;

    int *a = NULL;
    int *b = 0;
    cout<<a<<" "<<*a<<" "<<"finished"<<endl;
    cout<<b<<" "<<*b<<" "<<"finished"<<endl;
}


/*
Types of pointers:

1. NULL pointers
-> It points to nothing.
-> If we don't have the address to be assigned to a pointer we can use NULL.
Example : int *p; // contains garbage value.
          int *p = NULL; // NULL is constant with value 0.
          int *q = 0; // We can either use 0 or NULL.   

2. Double pointers
-> The pointer is a pointer to a pointer.
Example : int a = 10;
          int *p = &a;
          int**q = &p;

3. Void pointers
-> A void pointer can hold address of any data type and can be typecasted to any data type
Example : void *ptr;

4. Wild pointers
-> A pointer behaves like a wild pointer when declared but not initialized.
Example : int *ptr; // Wild pointer
          *ptr = 5;
*/